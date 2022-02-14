
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int lock; int iofl; scalar_t__ urbout; scalar_t__ retry_delay; int reset_work; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hid_device*) ;
 scalar_t__ FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct usbhid_device*) ;
 int FUNC_8 (struct usbhid_device*) ;
 int FUNC_9 (struct usbhid_device*) ;

__attribute__((used)) static void FUNC_10(struct hid_device *VAR_6)
{
 struct usbhid_device *VAR_7 = VAR_6->driver_data;
 int VAR_8 = FUNC_6(VAR_0, &VAR_7->iofl);
 int VAR_9 = FUNC_6(VAR_3, &VAR_7->iofl);

 FUNC_4(&VAR_7->lock);
 FUNC_0(VAR_5, &VAR_7->iofl);
 FUNC_7(VAR_7);

 if (VAR_8 || VAR_9)
  FUNC_3(&VAR_7->reset_work);
 VAR_7->retry_delay = 0;
 FUNC_5(&VAR_7->lock);

 if (VAR_9 || !FUNC_6(VAR_4, &VAR_7->iofl))
  return;

 if (!VAR_8) {
  if (FUNC_2(VAR_6) < 0)
   FUNC_1(VAR_6);
 }

 FUNC_4(&VAR_7->lock);
 if (VAR_7->urbout && !FUNC_6(VAR_2, &VAR_7->iofl))
  FUNC_9(VAR_7);
 if (!FUNC_6(VAR_1, &VAR_7->iofl))
  FUNC_8(VAR_7);
 FUNC_5(&VAR_7->lock);
}
