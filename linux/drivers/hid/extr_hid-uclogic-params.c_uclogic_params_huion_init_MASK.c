
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int transition_ver ;
struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct usb_device {int dummy; } ;
struct uclogic_params {int pen_frame_flag; int frame; int pen; int member_0; } ;
struct TYPE_4__ {int parent; } ;
struct hid_device {TYPE_1__ dev; } ;
typedef int p ;
typedef scalar_t__ __u8 ;
struct TYPE_5__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,char*,...) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 struct usb_device* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t const,int ) ;
 int FUNC_5 (struct uclogic_params*,struct uclogic_params*,int) ;
 int FUNC_6 (struct uclogic_params*,int ,int) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 struct usb_interface* FUNC_8 (int ) ;
 int FUNC_9 (struct uclogic_params*) ;
 int FUNC_10 (int *,int*,struct hid_device*) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (struct uclogic_params*) ;
 int FUNC_13 (struct uclogic_params*) ;
 int FUNC_14 (int *,int*,struct hid_device*) ;
 int FUNC_15 (int *,int*,struct hid_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (struct usb_device*,int,char*,size_t const) ;

__attribute__((used)) static int FUNC_17(struct uclogic_params *VAR_7,
         struct hid_device *VAR_8)
{
 int VAR_9;
 struct usb_device *VAR_10 = FUNC_2(VAR_8);
 struct usb_interface *VAR_11 = FUNC_8(VAR_8->dev.parent);
 __u8 VAR_12 = VAR_11->cur_altsetting->desc.bInterfaceNumber;
 bool VAR_13;

 struct uclogic_params VAR_14 = {0, };
 static const char VAR_15[] = "HUION_T153_160607";
 char *VAR_16 = ((void*)0);
 const size_t VAR_17 = sizeof(VAR_15) + 1;


 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto cleanup;
 }


 if (VAR_12 != 0) {

  FUNC_13(&VAR_14);
  goto output;
 }


 VAR_16 = FUNC_4(VAR_17, VAR_3);
 if (VAR_16 == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto cleanup;
 }
 VAR_9 = FUNC_16(VAR_10, 201, VAR_16, VAR_17);
 if (VAR_9 == -VAR_2) {
  *VAR_16 = '\0';
 } else if (VAR_9 < 0) {
  FUNC_1(VAR_8,
   "failed retrieving Huion firmware version: %d\n", VAR_9);
  goto cleanup;
 }


 if (FUNC_7(VAR_16, VAR_15) == 0) {
  FUNC_0(VAR_8,
   "transition firmware detected, not probing pen v2 parameters\n");
 } else {

  VAR_9 = FUNC_15(&VAR_14.pen, &VAR_13, VAR_8);
  if (VAR_9 != 0) {
   FUNC_1(VAR_8,
    "failed probing pen v2 parameters: %d\n", VAR_9);
   goto cleanup;
  } else if (VAR_13) {
   FUNC_0(VAR_8, "pen v2 parameters found\n");

   VAR_9 = FUNC_11(
     &VAR_14.frame,
     VAR_5,
     VAR_6,
     VAR_4);
   if (VAR_9 != 0) {
    FUNC_1(VAR_8,
     "failed creating v2 buttonpad parameters: %d\n",
     VAR_9);
    goto cleanup;
   }

   VAR_14.pen_frame_flag = 0x20;
   goto output;
  }
  FUNC_0(VAR_8, "pen v2 parameters not found\n");
 }


 VAR_9 = FUNC_14(&VAR_14.pen, &VAR_13, VAR_8);
 if (VAR_9 != 0) {
  FUNC_1(VAR_8,
   "failed probing pen v1 parameters: %d\n", VAR_9);
  goto cleanup;
 } else if (VAR_13) {
  FUNC_0(VAR_8, "pen v1 parameters found\n");

  VAR_9 = FUNC_10(
      &VAR_14.frame,
      &VAR_13, VAR_8);
  if (VAR_9 != 0) {
   FUNC_1(VAR_8, "v1 buttonpad probing failed: %d\n", VAR_9);
   goto cleanup;
  }
  FUNC_0(VAR_8, "buttonpad v1 parameters%s found\n",
   (VAR_13 ? "" : " not"));
  if (VAR_13) {

   VAR_14.pen_frame_flag = 0x20;
  }
  goto output;
 }
 FUNC_0(VAR_8, "pen v1 parameters not found\n");

 FUNC_12(&VAR_14);

output:

 FUNC_5(VAR_7, &VAR_14, sizeof(*VAR_7));
 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_9 = 0;
cleanup:
 FUNC_3(VAR_16);
 FUNC_9(&VAR_14);
 return VAR_9;
}
