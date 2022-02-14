
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** calib_pro_sticks; int lock; int flags; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef void* s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wiimote_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,void**,void**,void**,void**) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct wiimote_data *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;
 s16 VAR_9, VAR_10, VAR_11, VAR_12;

 if (!FUNC_4(VAR_5, "scan\n", 5)) {
  FUNC_1(&VAR_7->state.lock);
  VAR_7->state.flags &= ~VAR_2;
  FUNC_2(&VAR_7->state.lock);
 } else {
  VAR_8 = FUNC_3(VAR_5, "%hd:%hd %hd:%hd", &VAR_9, &VAR_10, &VAR_11, &VAR_12);
  if (VAR_8 != 4)
   return -VAR_0;

  FUNC_1(&VAR_7->state.lock);
  VAR_7->state.flags |= VAR_2;
  FUNC_2(&VAR_7->state.lock);

  VAR_7->state.calib_pro_sticks[0] = VAR_9;
  VAR_7->state.calib_pro_sticks[1] = VAR_10;
  VAR_7->state.calib_pro_sticks[2] = VAR_11;
  VAR_7->state.calib_pro_sticks[3] = VAR_12;
 }

 return FUNC_5(VAR_5, VAR_1);
}
