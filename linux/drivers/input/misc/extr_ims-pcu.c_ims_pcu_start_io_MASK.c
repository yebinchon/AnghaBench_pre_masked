
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int urb_ctrl; int dev; int urb_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ims_pcu *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->urb_ctrl, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2->dev,
   "Failed to start control IO - usb_submit_urb failed with result: %d\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_2->urb_in, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2->dev,
   "Failed to start IO - usb_submit_urb failed with result: %d\n",
   VAR_3);
  FUNC_1(VAR_2->urb_ctrl);
  return -VAR_0;
 }

 return 0;
}
