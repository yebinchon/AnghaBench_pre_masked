
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vscsi_xfer {int srp_iu_size; int srp_iu_offset; } ;
struct vscsi_softc {size_t cur_crq; int bus_initialized; int n_crqs; int unit; int crq_map; int crq_tag; int dev; int free_xferq; int active_xferq; int srp_iu_arena; scalar_t__ srp_iu_queue; struct vscsi_crq* crq_queue; int io_lock; } ;
struct vscsi_crq {scalar_t__ valid; int format; scalar_t__ iu_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,struct vscsi_xfer*,int ) ;
 int FUNC_1 (int *,struct vscsi_xfer*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct vscsi_xfer*,struct vscsi_crq*) ;
 int FUNC_9 (struct vscsi_xfer*,struct vscsi_crq*) ;

__attribute__((used)) static void
FUNC_10(struct vscsi_softc *VAR_5)
{
 struct vscsi_crq *VAR_6;
 struct vscsi_xfer *VAR_7;
 int VAR_8;

 FUNC_4(&VAR_5->io_lock, VAR_3);

 while (VAR_5->crq_queue[VAR_5->cur_crq].valid != 0) {

  FUNC_6(VAR_2, VAR_5->unit, 0);
  FUNC_2(VAR_5->crq_tag, VAR_5->crq_map, VAR_0);

  VAR_6 = &VAR_5->crq_queue[VAR_5->cur_crq];

  switch (VAR_6->valid) {
  case 0xc0:
   if (VAR_6->format == 0x02)
    VAR_5->bus_initialized = 1;
   break;
  case 0x80:

   VAR_7 = (struct vscsi_xfer *)VAR_6->iu_data;

   switch (VAR_6->format) {
   case 0x01:
    VAR_8 = *((uint8_t *)VAR_5->srp_iu_queue +
            (uintptr_t)VAR_7->srp_iu_offset);
    switch (VAR_8) {
    case 128:
     FUNC_9(VAR_7, VAR_6);
     break;
    case 129:
     FUNC_8(VAR_7, VAR_6);
     break;
    default:
     FUNC_3(VAR_5->dev, "Unknown SRP "
         "response code %d\n", VAR_8);
     break;
    }
    break;
   case 0x02:

    break;
   default:
    FUNC_5("Unknown CRQ format %d\n", VAR_6->format);
    break;
   }
   FUNC_7(VAR_5->srp_iu_arena, VAR_7->srp_iu_offset,
       VAR_7->srp_iu_size);
   FUNC_1(&VAR_5->active_xferq, VAR_7, VAR_4);
   FUNC_0(&VAR_5->free_xferq, VAR_7, VAR_4);
   break;
  default:
   FUNC_3(VAR_5->dev,
       "Unknown CRQ message type %d\n", VAR_6->valid);
   break;
  }

  VAR_6->valid = 0;
  VAR_5->cur_crq = (VAR_5->cur_crq + 1) % VAR_5->n_crqs;

  FUNC_2(VAR_5->crq_tag, VAR_5->crq_map, VAR_1);
  FUNC_6(VAR_2, VAR_5->unit, 1);
 }
}
