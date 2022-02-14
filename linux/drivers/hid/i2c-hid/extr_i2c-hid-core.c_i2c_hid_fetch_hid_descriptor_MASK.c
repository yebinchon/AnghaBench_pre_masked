
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid_desc {int wHIDDescLength; int bcdVersion; } ;
struct i2c_hid {int hdesc_buffer; struct i2c_hid_desc hdesc; struct i2c_client* client; } ;
struct i2c_client {int dev; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct i2c_client*,int *,int ,int) ;
 int FUNC_2 (struct i2c_hid*,char*,...) ;
 struct i2c_hid_desc* FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_hid *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_2->client;
 struct i2c_hid_desc *VAR_4 = &VAR_2->hdesc;
 unsigned int VAR_5;
 int VAR_6;


 if (FUNC_3(VAR_3->name)) {
  FUNC_2(VAR_2, "Using a HID descriptor override\n");
  VAR_2->hdesc =
   *FUNC_3(VAR_3->name);
 } else {
  FUNC_2(VAR_2, "Fetching the HID descriptor\n");
  VAR_6 = FUNC_1(VAR_3, &VAR_1,
          VAR_2->hdesc_buffer,
          sizeof(struct i2c_hid_desc));
  if (VAR_6) {
   FUNC_0(&VAR_3->dev, "hid_descr_cmd failed\n");
   return -VAR_0;
  }
 }





 if (FUNC_4(VAR_4->bcdVersion) != 0x0100) {
  FUNC_0(&VAR_3->dev,
   "unexpected HID descriptor bcdVersion (0x%04hx)\n",
   FUNC_4(VAR_4->bcdVersion));
  return -VAR_0;
 }


 VAR_5 = FUNC_4(VAR_4->wHIDDescLength);
 if (VAR_5 != sizeof(struct i2c_hid_desc)) {
  FUNC_0(&VAR_3->dev, "weird size of HID descriptor (%u)\n",
   VAR_5);
  return -VAR_0;
 }
 FUNC_2(VAR_2, "HID Descriptor: %*ph\n", VAR_5, VAR_2->hdesc_buffer);
 return 0;
}
