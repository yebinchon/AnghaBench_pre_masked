
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* cdb_ptr; int* cdb_bytes; } ;
struct TYPE_9__ {int cdb_len; TYPE_1__ cdb_io; } ;
struct TYPE_8__ {int flags; int target_lun; } ;
union ccb {TYPE_3__ csio; TYPE_2__ ccb_h; } ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct vscsi_xfer {int srp_iu_size; int srp_iu_offset; TYPE_4__* sc; union ccb* ccb; } ;
struct vscsi_crq {int iu_length; int valid; int format; int iu_data; } ;
struct srp_cmd {int additional_cdb; int tag; int formats; int * data_payload; int lun; int * cdb; int type; } ;
struct TYPE_11__ {int ds_len; int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_10__ {int srp_iu_phys; int unit; int crq_map; int crq_tag; scalar_t__ srp_iu_queue; int srp_iu_arena; int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct srp_cmd*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,int ,int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int,int,int*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_8, bus_dma_segment_t *VAR_9, int VAR_10, int VAR_11)
{
 struct vscsi_xfer *VAR_12 = VAR_8;
 uint8_t *VAR_13;
 union ccb *VAR_14 = VAR_12->ccb;
 struct srp_cmd *VAR_15;
 uint64_t VAR_16;
 uint32_t VAR_17;
 int VAR_18, VAR_19;
 struct vscsi_crq VAR_20;

 FUNC_1(VAR_11 == 0, ("DMA error %d\n", VAR_11));

 FUNC_6(&VAR_12->sc->io_lock, VAR_4);

 VAR_13 = (VAR_14->ccb_h.flags & VAR_1) ?
     VAR_14->csio.cdb_io.cdb_ptr : VAR_14->csio.cdb_io.cdb_bytes;


 VAR_20.iu_length = 48 + ((VAR_10 > 1) ? 20 : 16) +
     ((VAR_14->csio.cdb_len > 16) ? (VAR_14->csio.cdb_len - 16) : 0);
 VAR_12->srp_iu_size = VAR_20.iu_length;
 if (VAR_10 > 1)
  VAR_12->srp_iu_size += VAR_10*16;
 VAR_12->srp_iu_size = FUNC_9(VAR_12->srp_iu_size, 16);
 VAR_11 = FUNC_10(VAR_12->sc->srp_iu_arena, VAR_12->srp_iu_size,
     VAR_5 | VAR_6, &VAR_12->srp_iu_offset);
 if (VAR_11)
  FUNC_7("Error during VMEM allocation (%d)", VAR_11);

 VAR_15 = (struct srp_cmd *)((uint8_t *)VAR_12->sc->srp_iu_queue +
     (uintptr_t)VAR_12->srp_iu_offset);
 FUNC_3(VAR_15, VAR_12->srp_iu_size);
 VAR_15->type = VAR_7;
 if (VAR_14->csio.cdb_len > 16)
  VAR_15->additional_cdb = (VAR_14->csio.cdb_len - 16) << 2;
 FUNC_5(VAR_15->cdb, VAR_13, VAR_14->csio.cdb_len);

 VAR_15->tag = (uint64_t)(VAR_12);
 VAR_15->lun = FUNC_4(FUNC_0(VAR_14->ccb_h.target_lun));

 if (VAR_10 > 1) {

  switch (VAR_14->ccb_h.flags & VAR_2) {
  case 128:
   VAR_15->formats = (2 << 4);
   break;
  case 129:
   VAR_15->formats = 2;
   break;
  default:
   FUNC_7("Does not support bidirectional commands (%d)",
       VAR_14->ccb_h.flags & VAR_2);
   break;
  }

  VAR_18 = ((VAR_14->csio.cdb_len > 16) ?
      VAR_14->csio.cdb_len - 16 : 0);
  VAR_16 = VAR_12->sc->srp_iu_phys + VAR_12->srp_iu_offset + 20 +
      VAR_18 + sizeof(*VAR_15);
  VAR_17 = 16*VAR_10;
  FUNC_5(&VAR_15->data_payload[VAR_18], &VAR_16, 8);
  FUNC_5(&VAR_15->data_payload[VAR_18+12], &VAR_17, 4);
  VAR_17 = 0;
  for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
   VAR_17 += VAR_9[VAR_19].ds_len;
  FUNC_5(&VAR_15->data_payload[VAR_18+16], &VAR_17, 4);
  VAR_18 += 20;
  for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
   VAR_16 = VAR_9[VAR_19].ds_addr;
   VAR_17 = VAR_9[VAR_19].ds_len;

   FUNC_5(&VAR_15->data_payload[VAR_18 + 16*VAR_19],
       &VAR_16, 8);

   FUNC_5(&VAR_15->data_payload[VAR_18 + 16*VAR_19 + 12],
       &VAR_17, 4);
  }
 } else if (VAR_10 == 1) {
  switch (VAR_14->ccb_h.flags & VAR_2) {
  case 128:
   VAR_15->formats = (1 << 4);
   break;
  case 129:
   VAR_15->formats = 1;
   break;
  default:
   FUNC_7("Does not support bidirectional commands (%d)",
       VAR_14->ccb_h.flags & VAR_2);
   break;
  }
  VAR_16 = VAR_9[0].ds_addr;
  VAR_17 = VAR_9[0].ds_len;
  VAR_18 = ((VAR_14->csio.cdb_len > 16) ?
      VAR_14->csio.cdb_len - 16 : 0);

  FUNC_5(&VAR_15->data_payload[VAR_18], &VAR_16, 8);

  FUNC_5(&VAR_15->data_payload[VAR_18+12], &VAR_17, 4);
  FUNC_1(VAR_12->srp_iu_size >= 48 + ((VAR_14->csio.cdb_len > 16) ?
      VAR_14->csio.cdb_len : 16), ("SRP IU command length"));
 } else {
  VAR_15->formats = 0;
 }
 FUNC_2(VAR_12->sc->crq_tag, VAR_12->sc->crq_map, VAR_0);


 VAR_20.valid = 0x80;
 VAR_20.format = 0x01;
 VAR_20.iu_data = VAR_12->sc->srp_iu_phys + VAR_12->srp_iu_offset;

 VAR_11 = FUNC_8(VAR_3, VAR_12->sc->unit, ((uint64_t *)(&VAR_20))[0],
     ((uint64_t *)(&VAR_20))[1]);
 if (VAR_11 != 0)
  FUNC_7("CRQ send failure (%d)", VAR_11);
}
