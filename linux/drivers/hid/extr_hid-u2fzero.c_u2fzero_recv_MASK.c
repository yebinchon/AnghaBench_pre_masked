
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct u2fzero_transfer_context {int done; } ;
struct u2fzero_device {int lock; struct u2f_hid_report* buf_in; TYPE_1__* urb; struct u2f_hid_msg* buf_out; struct hid_device* hdev; } ;
struct u2f_hid_report {int dummy; } ;
struct u2f_hid_msg {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_3__ {int actual_length; struct u2fzero_transfer_context* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*,...) ;
 int FUNC_1 (struct hid_device*,struct u2f_hid_msg*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct u2f_hid_msg*,struct u2f_hid_report*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct u2fzero_device *VAR_2,
   struct u2f_hid_report *VAR_3,
   struct u2f_hid_msg *VAR_4)
{
 int VAR_5;
 struct hid_device *VAR_6 = VAR_2->hdev;
 struct u2fzero_transfer_context VAR_7;

 FUNC_5(&VAR_2->lock);

 FUNC_3(VAR_2->buf_out, VAR_3, sizeof(struct u2f_hid_report));

 VAR_2->urb->context = &VAR_7;
 FUNC_2(&VAR_7.done);

 VAR_5 = FUNC_9(VAR_2->urb, VAR_0);
 if (FUNC_7(VAR_5)) {
  FUNC_0(VAR_6, "usb_submit_urb failed: %d", VAR_5);
  goto err;
 }

 VAR_5 = FUNC_1(VAR_2->hdev, VAR_2->buf_out,
       sizeof(struct u2f_hid_msg));

 if (VAR_5 < 0) {
  FUNC_0(VAR_6, "hid_hw_output_report failed: %d", VAR_5);
  goto err;
 }

 VAR_5 = (FUNC_10(
  &VAR_7.done, FUNC_4(VAR_1)));
 if (VAR_5 < 0) {
  FUNC_8(VAR_2->urb);
  FUNC_0(VAR_6, "urb submission timed out");
 } else {
  VAR_5 = VAR_2->urb->actual_length;
  FUNC_3(VAR_4, VAR_2->buf_in, VAR_5);
 }

err:
 FUNC_6(&VAR_2->lock);

 return VAR_5;
}
