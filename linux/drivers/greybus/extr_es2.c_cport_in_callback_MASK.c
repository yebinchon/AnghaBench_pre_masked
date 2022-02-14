
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct urb {int actual_length; struct gb_operation_msg_hdr* transfer_buffer; TYPE_1__* dev; struct gb_host_device* context; } ;
struct gb_operation_msg_hdr {int dummy; } ;
struct gb_host_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct urb*) ;
 scalar_t__ FUNC_1 (struct gb_host_device*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct gb_operation_msg_hdr*) ;
 int FUNC_4 (struct gb_host_device*,int,struct gb_operation_msg_hdr*,int) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_5)
{
 struct gb_host_device *VAR_6 = VAR_5->context;
 struct device *VAR_7 = &VAR_5->dev->dev;
 struct gb_operation_msg_hdr *VAR_8;
 int VAR_9 = FUNC_0(VAR_5);
 int VAR_10;
 u16 VAR_11;

 if (VAR_9) {
  if ((VAR_9 == -VAR_0) || (VAR_9 == -VAR_2))
   goto exit;


  if (VAR_9 == -VAR_1 || VAR_9 == -VAR_3)
   return;

  FUNC_2(VAR_7, "urb cport in error %d (dropped)\n", VAR_9);
  return;
 }

 if (VAR_5->actual_length < sizeof(*VAR_8)) {
  FUNC_2(VAR_7, "short message received\n");
  goto exit;
 }


 VAR_8 = VAR_5->transfer_buffer;
 VAR_11 = FUNC_3(VAR_8);

 if (FUNC_1(VAR_6, VAR_11)) {
  FUNC_4(VAR_6, VAR_11, VAR_5->transfer_buffer,
      VAR_5->actual_length);
 } else {
  FUNC_2(VAR_7, "invalid cport id %u received\n", VAR_11);
 }
exit:

 VAR_10 = FUNC_5(VAR_5, VAR_4);
 if (VAR_10)
  FUNC_2(VAR_7, "failed to resubmit in-urb: %d\n", VAR_10);
}
