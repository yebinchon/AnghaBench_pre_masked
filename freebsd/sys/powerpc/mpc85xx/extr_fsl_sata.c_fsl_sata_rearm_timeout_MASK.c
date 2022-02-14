
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timeout_t ;
struct fsl_sata_slot {scalar_t__ state; TYPE_2__* ccb; int timeout; } ;
struct fsl_sata_channel {int toslots; struct fsl_sata_slot* slot; int mtx; } ;
struct TYPE_3__ {int timeout; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,int *,struct fsl_sata_slot*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct fsl_sata_channel *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_5->mtx, VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct fsl_sata_slot *VAR_7 = &VAR_5->slot[VAR_6];


  if (VAR_7->state < VAR_1)
   continue;
  if ((VAR_5->toslots & (1 << VAR_6)) == 0)
   continue;
  FUNC_0(&VAR_7->timeout,
           VAR_3 * VAR_7->ccb->ccb_h.timeout / 2, 0,
      (timeout_t*)VAR_4, VAR_7, 0);
 }
}
