
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_gpio {TYPE_1__* func; } ;
struct TYPE_2__ {int (* sense ) (struct nvkm_gpio*,int) ;} ;


 int FUNC_0 (struct nvkm_gpio*,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_gpio *VAR_0, int VAR_1, int VAR_2)
{
 return VAR_0->func->sense(VAR_0, VAR_2);
}
