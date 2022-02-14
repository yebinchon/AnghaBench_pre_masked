
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_i2c_aux {TYPE_1__* func; } ;
struct TYPE_2__ {int (* lnk_ctl ) (struct nvkm_i2c_aux*,int,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_i2c_aux*,int,int,int) ;

int
FUNC_1(struct nvkm_i2c_aux *VAR_1, int VAR_2, int VAR_3, bool VAR_4)
{
 if (VAR_1->func->lnk_ctl)
  return VAR_1->func->lnk_ctl(VAR_1, VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}
