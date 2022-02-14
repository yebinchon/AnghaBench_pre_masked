
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct uclogic_params_frame {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,char*,...) ;
 struct usb_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t const,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct uclogic_params_frame*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct usb_device*,int,char*,size_t const) ;

__attribute__((used)) static int FUNC_7(
     struct uclogic_params_frame *VAR_7,
     bool *VAR_8,
     struct hid_device *VAR_9)
{
 int VAR_10;
 bool VAR_11 = 0;
 struct usb_device *VAR_12 = FUNC_1(VAR_9);
 char *VAR_13 = ((void*)0);
 const size_t VAR_14 = 16;


 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto cleanup;
 }




 VAR_13 = FUNC_3(VAR_14, VAR_3);
 if (VAR_13 == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_10 = FUNC_6(VAR_12, 123, VAR_13, VAR_14);
 if (VAR_10 == -VAR_2) {
  FUNC_0(VAR_9,
   "generic button -enabling string descriptor not found\n");
 } else if (VAR_10 < 0) {
  goto cleanup;
 } else if (FUNC_4(VAR_13, "HK On", VAR_10) != 0) {
  FUNC_0(VAR_9,
   "invalid response to enabling generic buttons: \"%s\"\n",
   VAR_13);
 } else {
  FUNC_0(VAR_9, "generic buttons enabled\n");
  VAR_10 = FUNC_5(
    VAR_7,
    VAR_5,
    VAR_6,
    VAR_4);
  if (VAR_10 != 0)
   goto cleanup;
  VAR_11 = 1;
 }

 *VAR_8 = VAR_11;
 VAR_10 = 0;
cleanup:
 FUNC_2(VAR_13);
 return VAR_10;
}
