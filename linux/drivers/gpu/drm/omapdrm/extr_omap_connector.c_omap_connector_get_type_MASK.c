
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int type; } ;
typedef enum omap_display_type { ____Placeholder_omap_display_type } omap_display_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (struct omap_dss_device*) ;
 struct omap_dss_device* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_7)
{
 struct omap_dss_device *VAR_8;
 enum omap_display_type VAR_9;

 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = VAR_8->type;
 FUNC_0(VAR_8);

 switch (VAR_9) {
 case 130:
  return VAR_3;
 case 131:
  return VAR_2;
 case 132:
  return VAR_1;
 case 133:
 case 134:
  return VAR_0;
 case 128:

  return VAR_5;
 case 129:
  return VAR_4;
 default:
  return VAR_6;
 }
}
