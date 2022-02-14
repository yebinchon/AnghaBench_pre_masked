
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct dss_device*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct dss_device *VAR_2, int VAR_3,
           enum omap_channel VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_5 = 0;
  break;
 case 129:
  VAR_5 = 1;
  break;
 default:
  return -VAR_1;
 }

 FUNC_0(VAR_2, VAR_0, VAR_5, 17, 17);

 return 0;
}
