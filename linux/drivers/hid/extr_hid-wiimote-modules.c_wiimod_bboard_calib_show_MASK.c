
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t** calib_bboard; int lock; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef size_t __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 struct wiimote_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct wiimote_data*) ;
 int FUNC_5 (struct wiimote_data*,int,size_t*,int) ;
 int FUNC_6 (struct wiimote_data*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct wiimote_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5, VAR_6, VAR_7;
 __u16 VAR_8;
 __u8 VAR_9[24], VAR_10;

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_4, 0xa40024, VAR_9, 12);
 if (VAR_7 != 12) {
  FUNC_6(VAR_4);
  return VAR_7 < 0 ? VAR_7 : -VAR_0;
 }
 VAR_7 = FUNC_5(VAR_4, 0xa40024 + 12, VAR_9 + 12, 12);
 if (VAR_7 != 12) {
  FUNC_6(VAR_4);
  return VAR_7 < 0 ? VAR_7 : -VAR_0;
 }

 FUNC_6(VAR_4);

 FUNC_1(&VAR_4->state.lock);
 VAR_10 = 0;
 for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
   VAR_4->state.calib_bboard[VAR_6][VAR_5] = VAR_9[VAR_10];
   VAR_4->state.calib_bboard[VAR_6][VAR_5] <<= 8;
   VAR_4->state.calib_bboard[VAR_6][VAR_5] |= VAR_9[VAR_10 + 1];
   VAR_10 += 2;
  }
 }
 FUNC_2(&VAR_4->state.lock);

 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
   VAR_8 = VAR_4->state.calib_bboard[VAR_6][VAR_5];
   if (VAR_5 == 2 && VAR_6 == 3)
    VAR_7 += FUNC_3(&VAR_3[VAR_7], "%04x\n", VAR_8);
   else
    VAR_7 += FUNC_3(&VAR_3[VAR_7], "%04x:", VAR_8);
  }
 }

 return VAR_7;
}
