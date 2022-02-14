
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {unsigned int ulps_enabled; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct panel_drv_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2,
  char *VAR_3)
{
 struct panel_drv_data *VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5;

 FUNC_1(&VAR_4->lock);
 VAR_5 = VAR_4->ulps_enabled;
 FUNC_2(&VAR_4->lock);

 return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_5);
}
