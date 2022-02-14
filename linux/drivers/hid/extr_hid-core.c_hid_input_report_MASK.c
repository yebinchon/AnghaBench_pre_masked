
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hid_report_enum {int dummy; } ;
struct hid_report {int dummy; } ;
struct hid_driver {int (* raw_event ) (struct hid_device*,struct hid_report*,int *,int ) ;} ;
struct hid_device {int driver_input_lock; int debug_list; struct hid_driver* driver; struct hid_report_enum* report_enum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct hid_device*,int,int *,int ) ;
 struct hid_report* FUNC_3 (struct hid_report_enum*,int *) ;
 scalar_t__ FUNC_4 (struct hid_device*,struct hid_report*) ;
 int FUNC_5 (struct hid_device*,int,int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hid_device*,struct hid_report*,int *,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct hid_device *VAR_2, int VAR_3, u8 *VAR_4, u32 VAR_5, int VAR_6)
{
 struct hid_report_enum *VAR_7;
 struct hid_driver *VAR_8;
 struct hid_report *VAR_9;
 int VAR_10 = 0;

 if (!VAR_2)
  return -VAR_1;

 if (FUNC_1(&VAR_2->driver_input_lock))
  return -VAR_0;

 if (!VAR_2->driver) {
  VAR_10 = -VAR_1;
  goto unlock;
 }
 VAR_7 = VAR_2->report_enum + VAR_3;
 VAR_8 = VAR_2->driver;

 if (!VAR_5) {
  FUNC_0("empty report\n");
  VAR_10 = -1;
  goto unlock;
 }


 if (!FUNC_6(&VAR_2->debug_list))
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_9 = FUNC_3(VAR_7, VAR_4);

 if (!VAR_9) {
  VAR_10 = -1;
  goto unlock;
 }

 if (VAR_8 && VAR_8->raw_event && FUNC_4(VAR_2, VAR_9)) {
  VAR_10 = VAR_8->raw_event(VAR_2, VAR_9, VAR_4, VAR_5);
  if (VAR_10 < 0)
   goto unlock;
 }

 VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

unlock:
 FUNC_8(&VAR_2->driver_input_lock);
 return VAR_10;
}
