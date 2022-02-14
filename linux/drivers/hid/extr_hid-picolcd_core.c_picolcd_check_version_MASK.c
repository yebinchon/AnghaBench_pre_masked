
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_pending {int raw_size; int * raw_data; } ;
struct picolcd_data {int status; int * version; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct picolcd_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,char*,int ,int ) ;
 int FUNC_3 (struct picolcd_pending*) ;
 struct picolcd_pending* FUNC_4 (struct hid_device*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_4)
{
 struct picolcd_data *VAR_5 = FUNC_1(VAR_4);
 struct picolcd_pending *VAR_6;
 int VAR_7 = 0;

 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_4, VAR_3, ((void*)0), 0);
 if (!VAR_6) {
  FUNC_0(VAR_4, "no version response from PicoLCD\n");
  return -VAR_1;
 }

 if (VAR_6->raw_size == 2) {
  VAR_5->version[0] = VAR_6->raw_data[1];
  VAR_5->version[1] = VAR_6->raw_data[0];
  if (VAR_5->status & VAR_2) {
   FUNC_2(VAR_4, "PicoLCD, bootloader version %d.%d\n",
     VAR_6->raw_data[1], VAR_6->raw_data[0]);
  } else {
   FUNC_2(VAR_4, "PicoLCD, firmware version %d.%d\n",
     VAR_6->raw_data[1], VAR_6->raw_data[0]);
  }
 } else {
  FUNC_0(VAR_4, "confused, got unexpected version response from PicoLCD\n");
  VAR_7 = -VAR_0;
 }
 FUNC_3(VAR_6);
 return VAR_7;
}
