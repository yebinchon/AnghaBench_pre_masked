
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct TYPE_2__ {int ** buffer; struct urb** urb; } ;
struct es2_ap_dev {int* cport_out_urb_busy; int hd; struct usb_device* usb_dev; TYPE_1__ cport_in; int ** arpc_buffer; struct urb** arpc_urb; struct urb** cport_out_urb; int apb_log_enable_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct es2_ap_dev*) ;
 int FUNC_7 (struct usb_device*) ;

__attribute__((used)) static void FUNC_8(struct es2_ap_dev *VAR_5)
{
 struct usb_device *VAR_6;
 struct urb *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5->apb_log_enable_dentry);
 FUNC_6(VAR_5);


 for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
  VAR_7 = VAR_5->cport_out_urb[VAR_8];
  FUNC_5(VAR_7);
  FUNC_4(VAR_7);
  VAR_5->cport_out_urb[VAR_8] = ((void*)0);
  VAR_5->cport_out_urb_busy[VAR_8] = 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  FUNC_4(VAR_5->arpc_urb[VAR_8]);
  FUNC_3(VAR_5->arpc_buffer[VAR_8]);
  VAR_5->arpc_buffer[VAR_8] = ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  FUNC_4(VAR_5->cport_in.urb[VAR_8]);
  FUNC_3(VAR_5->cport_in.buffer[VAR_8]);
  VAR_5->cport_in.buffer[VAR_8] = ((void*)0);
 }


 FUNC_1(VAR_5->hd, VAR_1);
 FUNC_1(VAR_5->hd, VAR_0);

 VAR_6 = VAR_5->usb_dev;
 FUNC_2(VAR_5->hd);

 FUNC_7(VAR_6);
}
