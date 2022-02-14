
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_gpio {int subdev; } ;
struct dcb_gpio_func {int line; int func; } ;
struct TYPE_2__ {int cfgopt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,char*) ;
 struct nvkm_gpio* FUNC_4 (struct nvkm_subdev*) ;
 int FUNC_5 (struct nvkm_gpio*,int ,int ,int ,struct dcb_gpio_func*) ;
 int FUNC_6 (struct nvkm_gpio*,int ,int ,int ) ;
 int FUNC_7 (struct nvkm_gpio*,int ) ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_8(struct nvkm_subdev *VAR_4)
{
 struct nvkm_gpio *VAR_5 = FUNC_4(VAR_4);
 struct dcb_gpio_func VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_2))
  FUNC_7(VAR_5, VAR_0);

 if (FUNC_2(VAR_4->device->cfgopt, "NvPowerChecks", 1)) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); ++VAR_8) {
   VAR_7 = FUNC_5(VAR_5, 0, VAR_3[VAR_8],
          VAR_0, &VAR_6);
   if (VAR_7)
    continue;

   VAR_7 = FUNC_6(VAR_5, 0, VAR_6.func, VAR_6.line);
   if (!VAR_7)
    continue;

   FUNC_3(&VAR_5->subdev,
       "GPU is missing power, check its power "
       "cables.  Boot with "
       "nouveau.config=NvPowerChecks=0 to "
       "disable.\n");
   return -VAR_1;
  }
 }

 return 0;
}
