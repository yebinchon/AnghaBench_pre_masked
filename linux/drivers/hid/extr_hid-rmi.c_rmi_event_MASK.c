
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_data {int device_flags; int reset_work; } ;
struct hid_usage {int hid; } ;
struct hid_field {scalar_t__ application; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct rmi_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_8, struct hid_field *VAR_9,
   struct hid_usage *VAR_10, __s32 VAR_11)
{
 struct rmi_data *VAR_12 = FUNC_0(VAR_8);

 if ((VAR_12->device_flags & VAR_6) &&
     (VAR_9->application == VAR_1 ||
     VAR_9->application == VAR_0)) {
  if (VAR_12->device_flags & VAR_7) {
   if ((VAR_10->hid & VAR_5) == VAR_4)
    return 0;

   if ((VAR_10->hid == VAR_2 || VAR_10->hid == VAR_3)
       && !VAR_11)
    return 1;
  }

  FUNC_1(&VAR_12->reset_work);
  return 1;
 }

 return 0;
}
