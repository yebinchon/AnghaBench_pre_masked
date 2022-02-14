
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct iwmbt_version {int fw_variant; } ;
struct iwmbt_boot_params {int limited_cce; } ;
typedef int libusb_device_handle ;
typedef int libusb_device ;
typedef int libusb_context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct iwmbt_boot_params*) ;
 int FUNC_5 (struct iwmbt_version*) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (int *,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,struct iwmbt_boot_params*) ;
 char* FUNC_9 (struct iwmbt_version*,struct iwmbt_boot_params*,char*,char*) ;
 int FUNC_10 (int *,struct iwmbt_version*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*,int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int **) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int *) ;
 int VAR_3 ;
 int FUNC_24 (int ,scalar_t__*,scalar_t__*) ;
 char* FUNC_25 (int ) ;
 int FUNC_26 () ;

int
FUNC_27(int VAR_4, char *VAR_5[])
{
 libusb_context *VAR_6 = ((void*)0);
 libusb_device *VAR_7 = ((void*)0);
 libusb_device_handle *VAR_8 = ((void*)0);
 static struct iwmbt_version VAR_9;
 static struct iwmbt_boot_params VAR_10;
 uint32_t VAR_11;
 int VAR_12;
 uint8_t VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 int VAR_19 = 1;


 while ((VAR_16 = FUNC_2(VAR_4, VAR_5, "Dd:f:hIm:p:v:")) != -1) {
  switch (VAR_16) {
  case 'd':
   VAR_15 = 1;
   if (FUNC_24(VAR_3, &VAR_13, &VAR_14) < 0)
    FUNC_26();
   break;
  case 'D':
   VAR_1 = 1;
   break;
  case 'f':
   if (VAR_17)
    FUNC_1(VAR_17);
   VAR_17 = FUNC_25(VAR_3);
   break;
  case 'I':
   VAR_2 = 1;
   break;
  case 'h':
  default:
   FUNC_26();
   break;

  }
 }


 if (VAR_15 == 0) {
  FUNC_26();

 }


 VAR_12 = FUNC_18(&VAR_6);
 if (VAR_12 != 0) {
  FUNC_6("libusb_init failed: code %d", VAR_12);
  FUNC_0(127);
 }

 FUNC_3("opening dev %d.%d", (int) VAR_13, (int) VAR_14);


 VAR_7 = FUNC_7(VAR_6, VAR_13, VAR_14);
 if (VAR_7 == ((void*)0)) {
  FUNC_6("device not found");
  goto shutdown;
 }






 VAR_12 = FUNC_20(VAR_7, &VAR_8);
 if (VAR_12 != 0) {
  FUNC_6("libusb_open() failed: code %d", VAR_12);
  goto shutdown;
 }


 VAR_12 = FUNC_19(VAR_8, 0);
 if (VAR_12 < 0) {
  FUNC_6("libusb_kernel_driver_active() failed: code %d", VAR_12);
  goto shutdown;
 }
 if (VAR_12 > 0) {
  FUNC_11("Firmware has already been downloaded");
  VAR_19 = 0;
  goto shutdown;
 }


 VAR_12 = FUNC_10(VAR_8, &VAR_9);
 if (VAR_12 < 0) {
  FUNC_3("iwmbt_get_version() failedL code %d", VAR_12);
  goto shutdown;
 }
 FUNC_5(&VAR_9);
 FUNC_3("fw_variant=0x%02x", (int) VAR_9.fw_variant);


 if (VAR_9.fw_variant == 0x23) {
  FUNC_11("Firmware has already been downloaded");
  VAR_19 = 0;
  goto reset;
 }

 if (VAR_9.fw_variant != 0x06){
  FUNC_6("unknown fw_variant 0x%02x", (int) VAR_9.fw_variant);
  goto shutdown;
 }


 VAR_12 = FUNC_8(VAR_8, &VAR_10);
 if (VAR_12 < 0) {
  FUNC_3("iwmbt_get_boot_params() failed!");
  goto shutdown;
 }
 FUNC_4(&VAR_10);


 if (VAR_10.limited_cce != 0x00) {
  FUNC_6("Unsupported Intel firmware loading method (%u)",
     VAR_10.limited_cce);
  goto shutdown;
 }


 if (VAR_17 == ((void*)0))
  VAR_17 = FUNC_25(VAR_0);

 VAR_18 = FUNC_9(&VAR_9, &VAR_10, VAR_17, "sfi");
 if (VAR_18 == ((void*)0))
  goto shutdown;

 FUNC_3("firmware_path = %s", VAR_18);


 VAR_12 = FUNC_13(VAR_8, VAR_18, &VAR_11);
 FUNC_1(VAR_18);
 if (VAR_12 < 0)
  goto shutdown;

 FUNC_11("Firmware download complete");

 VAR_12 = FUNC_14(VAR_8, VAR_11);
 if (VAR_12 < 0) {
  FUNC_3("iwmbt_intel_reset() failed!");
  goto shutdown;
 }

 FUNC_11("Firmware operational");


 VAR_19 = 0;


 VAR_12 = FUNC_10(VAR_8, &VAR_9);
 if (VAR_12 == 0)
  FUNC_5(&VAR_9);


 VAR_18 = FUNC_9(&VAR_9, &VAR_10, VAR_17, "ddc");
 FUNC_3("ddc_path = %s", VAR_18);
 if (VAR_18 != ((void*)0)) {
  VAR_12 = FUNC_12(VAR_8, VAR_18);
  if (VAR_12 == 0)
   FUNC_11("DDC download complete");
  FUNC_1(VAR_18);
 }


 VAR_12 = FUNC_15(VAR_8);
 if (VAR_12 == 0)
  FUNC_11("Intel Event Mask is set");

reset:


 VAR_12 = FUNC_21(VAR_8);
 if (VAR_12 != 0)
  FUNC_6("libusb_reset_device() failed: %s",
      FUNC_22(VAR_12));

shutdown:



 if (VAR_8 != ((void*)0))
  FUNC_16(VAR_8);

 if (VAR_7 != ((void*)0))
  FUNC_23(VAR_7);

 if (VAR_6 != ((void*)0))
  FUNC_17(VAR_6);

 if (VAR_19 == 0)
  FUNC_11("Firmware download is succesful!");
 else
  FUNC_6("Firmware download failed!");

 return (VAR_19);
}
