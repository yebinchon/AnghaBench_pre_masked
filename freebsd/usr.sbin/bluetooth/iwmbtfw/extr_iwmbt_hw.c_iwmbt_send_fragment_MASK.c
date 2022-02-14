
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct libusb_device_handle {int dummy; } ;
struct iwmbt_hci_cmd {void** data; void* length; int opcode; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwmbt_hci_cmd*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct libusb_device_handle*,int ,void**,int,int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void**,void const*,void*) ;
 int FUNC_6 (void**,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct libusb_device_handle *VAR_3,
    uint8_t VAR_4, const void *VAR_5, uint8_t VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 uint8_t VAR_10[VAR_2];
 struct iwmbt_hci_cmd *VAR_11 = (struct iwmbt_hci_cmd *) VAR_10;

 FUNC_6(VAR_10, 0, sizeof(VAR_10));
 VAR_11->opcode = FUNC_1(0xfc09),
 VAR_11->length = VAR_6 + 1,
 VAR_11->data[0] = VAR_4;
 FUNC_5(VAR_11->data + 1, VAR_5, VAR_6);

 VAR_8 = FUNC_3(VAR_3,
     VAR_1,
     (uint8_t *)VAR_11,
     FUNC_0(VAR_11),
     &VAR_9,
     VAR_7);

 if (VAR_8 < 0 || VAR_9 != (int)FUNC_0(VAR_11)) {
  FUNC_2("libusb_bulk_transfer() failed: err=%s, size=%zu",
      FUNC_4(VAR_8),
      FUNC_0(VAR_11));
  return (-1);
 }

 VAR_8 = FUNC_3(VAR_3,
     VAR_0,
     VAR_10,
     sizeof(VAR_10),
     &VAR_9,
     VAR_7);

 if (VAR_8 < 0) {
  FUNC_2("libusb_bulk_transfer() failed: err=%s",
      FUNC_4(VAR_8));
  return (-1);
 }

 return (0);
}
