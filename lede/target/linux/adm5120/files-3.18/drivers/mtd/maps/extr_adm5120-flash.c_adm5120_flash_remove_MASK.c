
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int * virt; } ;
struct TYPE_4__ {TYPE_1__ map; } ;
struct adm5120_flash_info {int * res; TYPE_2__ amap; int * mtd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct adm5120_flash_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct adm5120_flash_info *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 == ((void*)0))
  return 0;

 FUNC_5(VAR_0, ((void*)0));

 if (VAR_1->mtd != ((void*)0)) {
  FUNC_3(VAR_1->mtd);
  FUNC_2(VAR_1->mtd);
 }

 if (VAR_1->amap.map.virt != ((void*)0))
  FUNC_0(VAR_1->amap.map.virt);

 if (VAR_1->res != ((void*)0)) {
  FUNC_6(VAR_1->res);
  FUNC_1(VAR_1->res);
 }

 return 0;
}
