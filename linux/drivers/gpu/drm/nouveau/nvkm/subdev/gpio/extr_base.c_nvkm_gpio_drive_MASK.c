
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_gpio {TYPE_1__* func; } ;
struct TYPE_2__ {int (* drive ) (struct nvkm_gpio*,int,int,int) ;} ;


 int FUNC_0 (struct nvkm_gpio*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_gpio *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 return VAR_0->func->drive(VAR_0, VAR_2, VAR_3, VAR_4);
}
