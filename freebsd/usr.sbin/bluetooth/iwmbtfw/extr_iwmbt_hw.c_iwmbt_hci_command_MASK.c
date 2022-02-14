
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_device_handle {int dummy; } ;
struct iwmbt_hci_cmd {int dummy; } ;


 int FUNC_0 (struct iwmbt_hci_cmd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct libusb_device_handle*,int,int ,int ,int ,int *,int ,int) ;
 int FUNC_3 (struct libusb_device_handle*,int ,void*,int,int*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct libusb_device_handle *VAR_3, struct iwmbt_hci_cmd *VAR_4,
    void *VAR_5, int VAR_6, int *VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3,
     VAR_2 | VAR_1,
     0,
     0,
     0,
     (uint8_t *)VAR_4,
     FUNC_0(VAR_4),
     VAR_8);

 if (VAR_9 < 0) {
  FUNC_1("libusb_control_transfer() failed: err=%s",
      FUNC_4(VAR_9));
  return (VAR_9);
 }

 VAR_9 = FUNC_3(VAR_3,
     VAR_0,
     VAR_5,
     VAR_6,
     VAR_7,
     VAR_8);

 if (VAR_9 < 0)
  FUNC_1("libusb_interrupt_transfer() failed: err=%s",
      FUNC_4(VAR_9));

 return (VAR_9);
}
