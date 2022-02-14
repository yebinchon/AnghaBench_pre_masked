
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int retry_delay; int lock; int io_retry; int reset_work; int iofl; scalar_t__ stop_retry; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct hid_device *VAR_5)
{
 unsigned long VAR_6;
 struct usbhid_device *VAR_7 = VAR_5->driver_data;

 FUNC_3(&VAR_7->lock, VAR_6);


 if (FUNC_6(VAR_0, &VAR_7->iofl))
  goto done;



 if (FUNC_7(VAR_4, VAR_7->stop_retry + VAR_3/2))
  VAR_7->retry_delay = 0;


 if (VAR_7->retry_delay == 0) {
  VAR_7->retry_delay = 13;
  VAR_7->stop_retry = VAR_4 + FUNC_1(1000);
 } else if (VAR_7->retry_delay < 100)
  VAR_7->retry_delay *= 2;

 if (FUNC_7(VAR_4, VAR_7->stop_retry)) {


  if (!FUNC_6(VAR_1, &VAR_7->iofl)
       && !FUNC_5(VAR_2, &VAR_7->iofl)) {

   FUNC_2(&VAR_7->reset_work);
   goto done;
  }
 }

 FUNC_0(&VAR_7->io_retry,
   VAR_4 + FUNC_1(VAR_7->retry_delay));
done:
 FUNC_4(&VAR_7->lock, VAR_6);
}
