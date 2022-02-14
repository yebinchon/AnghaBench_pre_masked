
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct omap_device {int * hwmods; scalar_t__ hwmods_cnt; } ;


 int FUNC_0 (int ) ;
 struct omap_device* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_0)
{
 struct omap_device *VAR_1;
 u32 VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->hwmods_cnt)
  VAR_2 = FUNC_0(VAR_1->hwmods[0]);

 return VAR_2;
}
