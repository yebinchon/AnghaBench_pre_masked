
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_device {int hwmods_cnt; int * hwmods; } ;


 int FUNC_0 (int ,char const*) ;
 struct omap_device* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_0, const char *VAR_1)
{
 struct omap_device *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->hwmods_cnt; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2->hwmods[VAR_4], VAR_1);
  if (VAR_3)
   break;
 }

 return VAR_3;
}
