
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct device {int dummy; } ;
struct ad7879 {int swap_xy; int pen_down_acc_interval; int averaging; int median; int acquisition_time; int first_conversion_delay; scalar_t__ x_plate_ohms; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,scalar_t__*) ;
 int FUNC_3 (struct device*,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct ad7879 *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_2(VAR_0, "adi,resistance-plate-x", &VAR_3);
 if (VAR_2) {
  FUNC_0(VAR_0, "failed to get resistance-plate-x property\n");
  return VAR_2;
 }
 VAR_1->x_plate_ohms = (u16)VAR_3;

 FUNC_3(VAR_0, "adi,first-conversion-delay",
    &VAR_1->first_conversion_delay);
 FUNC_3(VAR_0, "adi,acquisition-time",
    &VAR_1->acquisition_time);
 FUNC_3(VAR_0, "adi,median-filter-size", &VAR_1->median);
 FUNC_3(VAR_0, "adi,averaging", &VAR_1->averaging);
 FUNC_3(VAR_0, "adi,conversion-interval",
    &VAR_1->pen_down_acc_interval);

 VAR_1->swap_xy = FUNC_1(VAR_0, "touchscreen-swapped-x-y");

 return 0;
}
