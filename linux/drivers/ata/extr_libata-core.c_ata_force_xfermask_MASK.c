
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; int xfer_mask; } ;
struct ata_force_ent {int port; int device; TYPE_2__ param; } ;
struct ata_device {int devno; unsigned long udma_mask; unsigned long mwdma_mask; unsigned long pio_mask; TYPE_3__* link; } ;
struct TYPE_6__ {int pmp; TYPE_1__* ap; } ;
struct TYPE_4__ {int print_id; } ;


 int FUNC_0 (struct ata_device*,char*,int ) ;
 struct ata_force_ent* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,unsigned long*,unsigned long*,unsigned long*) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_2)
{
 int VAR_3 = VAR_2->link->pmp + VAR_2->devno;
 int VAR_4 = VAR_3;
 int VAR_5;


 if (FUNC_1(VAR_2->link))
  VAR_4 += 15;

 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--) {
  const struct ata_force_ent *VAR_6 = &VAR_0[VAR_5];
  unsigned long VAR_7, VAR_8, VAR_9;

  if (VAR_6->port != -1 && VAR_6->port != VAR_2->link->ap->print_id)
   continue;

  if (VAR_6->device != -1 && VAR_6->device != VAR_3 &&
      VAR_6->device != VAR_4)
   continue;

  if (!VAR_6->param.xfer_mask)
   continue;

  FUNC_2(VAR_6->param.xfer_mask,
        &VAR_7, &VAR_8, &VAR_9);
  if (VAR_9)
   VAR_2->udma_mask = VAR_9;
  else if (VAR_8) {
   VAR_2->udma_mask = 0;
   VAR_2->mwdma_mask = VAR_8;
  } else {
   VAR_2->udma_mask = 0;
   VAR_2->mwdma_mask = 0;
   VAR_2->pio_mask = VAR_7;
  }

  FUNC_0(VAR_2, "FORCE: xfer_mask set to %s\n",
          VAR_6->param.name);
  return;
 }
}
