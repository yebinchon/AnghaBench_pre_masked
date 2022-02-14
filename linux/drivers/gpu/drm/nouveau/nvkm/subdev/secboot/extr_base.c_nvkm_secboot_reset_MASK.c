
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_secboot {TYPE_2__* acr; int subdev; } ;
struct TYPE_4__ {unsigned long managed_falcons; TYPE_1__* func; } ;
struct TYPE_3__ {int (* reset ) (TYPE_2__*,struct nvkm_secboot*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,struct nvkm_secboot*,unsigned long) ;

int
FUNC_2(struct nvkm_secboot *VAR_1, unsigned long VAR_2)
{

 if ((VAR_2 | VAR_1->acr->managed_falcons) != VAR_1->acr->managed_falcons) {
  FUNC_0(&VAR_1->subdev, "cannot reset unmanaged falcon!\n");
  return -VAR_0;
 }

 return VAR_1->acr->func->reset(VAR_1->acr, VAR_1, VAR_2);
}
