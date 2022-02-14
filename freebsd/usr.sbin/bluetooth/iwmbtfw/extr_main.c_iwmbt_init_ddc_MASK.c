
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwmbt_firmware {int dummy; } ;
typedef int libusb_device_handle ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct iwmbt_firmware*) ;
 scalar_t__ FUNC_2 (struct iwmbt_firmware*,char const*) ;
 int FUNC_3 (int *,struct iwmbt_firmware*) ;

__attribute__((used)) static int
FUNC_4(libusb_device_handle *VAR_0, const char *VAR_1)
{
 struct iwmbt_firmware VAR_2;
 int VAR_3;

 FUNC_0("loading %s", VAR_1);


 if (FUNC_2(&VAR_2, VAR_1) <= 0) {
  FUNC_0("iwmbt_fw_read() failed");
  return (-1);
 }


 VAR_3 = FUNC_3(VAR_0, &VAR_2);
 if (VAR_3 < 0)
  FUNC_0("Loading DDC file failed");


 FUNC_1(&VAR_2);

 return (VAR_3);
}
