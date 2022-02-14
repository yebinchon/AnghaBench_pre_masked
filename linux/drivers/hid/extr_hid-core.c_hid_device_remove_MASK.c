
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_driver {int (* remove ) (struct hid_device*) ;} ;
struct hid_device {int io_started; int driver_input_lock; struct hid_driver* driver; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 struct hid_device* FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct hid_device *VAR_2 = FUNC_4(VAR_1);
 struct hid_driver *VAR_3;
 int VAR_4 = 0;

 if (FUNC_0(&VAR_2->driver_input_lock)) {
  VAR_4 = -VAR_0;
  goto end;
 }
 VAR_2->io_started = 0;

 VAR_3 = VAR_2->driver;
 if (VAR_3) {
  if (VAR_3->remove)
   VAR_3->remove(VAR_2);
  else
   FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  VAR_2->driver = ((void*)0);
 }

 if (!VAR_2->io_started)
  FUNC_5(&VAR_2->driver_input_lock);
end:
 return VAR_4;
}
