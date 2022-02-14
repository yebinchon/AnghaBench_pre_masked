
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct powerdomain {int dummy; } ;
struct platform_device {int dummy; } ;
struct omap_device {int hwmods_cnt; int * hwmods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct powerdomain* FUNC_0 (int ) ;
 int FUNC_1 (struct powerdomain*) ;
 int FUNC_2 (struct powerdomain*,int ) ;
 struct omap_device* FUNC_3 (struct platform_device*) ;

int FUNC_4(struct platform_device *VAR_4, bool VAR_5,
        u8 *VAR_6)
{
 struct powerdomain *VAR_7;
 struct omap_device *VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_3(VAR_4);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_8->hwmods_cnt != 1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_8->hwmods[0]);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_5)
  *VAR_6 = FUNC_1(VAR_7);

 if (*VAR_6 > VAR_3)
  return 0;

 VAR_9 = VAR_5 ? VAR_2 : *VAR_6;

 return FUNC_2(VAR_7, VAR_9);
}
