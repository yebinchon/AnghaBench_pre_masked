
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_device_handle {int dummy; } ;
struct iwmbt_hci_cmd {scalar_t__ length; int data; int opcode; } ;
struct iwmbt_firmware {int len; scalar_t__* buf; int fwname; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct libusb_device_handle*,struct iwmbt_hci_cmd*,int *,int,int*,int ) ;
 int FUNC_4 (int ,scalar_t__*,int ) ;
 int FUNC_5 (int *,int ,int) ;

int
FUNC_6(struct libusb_device_handle *VAR_2,
    const struct iwmbt_firmware *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 int VAR_6, VAR_7;
 uint8_t VAR_8[VAR_1];
 struct iwmbt_hci_cmd *VAR_9 = (struct iwmbt_hci_cmd *)VAR_8;

 VAR_4 = VAR_3->len;

 FUNC_2("file=%s, size=%d", VAR_3->fwname, VAR_4);

 while (VAR_4 > 0) {

  FUNC_5(VAR_8, 0, sizeof(VAR_8));
  VAR_9->opcode = FUNC_1(0xfc8b);
  VAR_9->length = VAR_3->buf[VAR_5] + 1;
  FUNC_4(VAR_9->data, VAR_3->buf + VAR_5, FUNC_0(VAR_3->buf[VAR_5], VAR_4));

  FUNC_2("transferring %d bytes, offset %d",
      VAR_9->length,
      VAR_5);

  VAR_4 -= VAR_9->length;
  VAR_5 += VAR_9->length;

  VAR_6 = FUNC_3(VAR_2,
      VAR_9,
      VAR_8,
      sizeof(VAR_8),
      &VAR_7,
      VAR_0);

  if (VAR_6 < 0) {
    FUNC_2("Intel Write DDC failed: code=%d", VAR_6);
    return (-1);
  }
 }

 return (0);
}
