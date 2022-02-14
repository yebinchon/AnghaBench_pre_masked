
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int wait; int intf; int iofl; int ctrltail; int ctrlhead; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hid_device*,char*,int ,int ) ;
 scalar_t__ FUNC_3 (struct hid_device*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct hid_device* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct usbhid_device *VAR_3)
{
 struct hid_device *VAR_4 = FUNC_9(VAR_3->intf);
 int VAR_5;
 int VAR_6;

 FUNC_0(VAR_4 == ((void*)0));
 if (!VAR_4 || FUNC_5(VAR_1, &VAR_3->iofl) ||
   FUNC_5(VAR_2, &VAR_3->iofl))
  return 0;

 if ((VAR_5 = (VAR_3->ctrlhead != VAR_3->ctrltail))) {
  FUNC_2(VAR_4, "Kicking head %d tail %d", VAR_3->ctrlhead, VAR_3->ctrltail);


  VAR_6 = FUNC_6(VAR_3->intf);
  if (VAR_6 < 0)
   return VAR_6;





  if (FUNC_5(VAR_2, &VAR_3->iofl)) {
   FUNC_8(VAR_3->intf);
   return VAR_6;
  }


  FUNC_4(VAR_0, &VAR_3->iofl);
  if (FUNC_3(VAR_4)) {
   FUNC_1(VAR_0, &VAR_3->iofl);
   FUNC_7(VAR_3->intf);
  }
  FUNC_10(&VAR_3->wait);
 }
 return VAR_5;
}
