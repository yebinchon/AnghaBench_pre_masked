
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int func_code; } ;
union ccb {TYPE_2__ ccb_h; } ;
struct fsl_sata_channel {scalar_t__ batch; int doneq; int mtx; } ;
struct TYPE_3__ {int stqe; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(struct fsl_sata_channel *VAR_3, union ccb *VAR_4)
{

 FUNC_1(&VAR_3->mtx, VAR_0);
 if ((VAR_4->ccb_h.func_code & VAR_1) == 0 ||
     VAR_3->batch == 0) {
  FUNC_2(VAR_4);
  return;
 }

 FUNC_0(&VAR_3->doneq, &VAR_4->ccb_h, VAR_2.stqe);
}
