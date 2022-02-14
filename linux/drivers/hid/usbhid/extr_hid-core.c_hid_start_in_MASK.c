
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int lock; int iofl; int urbin; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = 0;
 struct usbhid_device *VAR_10 = VAR_7->driver_data;

 FUNC_2(&VAR_10->lock, VAR_8);
 if (FUNC_5(VAR_3, &VAR_10->iofl) &&
     !FUNC_5(VAR_2, &VAR_10->iofl) &&
     !FUNC_5(VAR_6, &VAR_10->iofl) &&
     !FUNC_4(VAR_4, &VAR_10->iofl)) {
  VAR_9 = FUNC_6(VAR_10->urbin, VAR_1);
  if (VAR_9 != 0) {
   FUNC_0(VAR_4, &VAR_10->iofl);
   if (VAR_9 == -VAR_0)
    FUNC_1(VAR_5, &VAR_10->iofl);
  } else {
   FUNC_0(VAR_5, &VAR_10->iofl);
  }
 }
 FUNC_3(&VAR_10->lock, VAR_8);
 return VAR_9;
}
