
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wacom_features {int type; } ;
struct TYPE_2__ {int bt_high_speed; int bt_features; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_device {int dummy; } ;



 int VAR_0 ;

 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*,int,int) ;
 int FUNC_2 (struct hid_device*,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_1, u8 VAR_2,
  struct wacom_features *VAR_3)
{
 struct wacom *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 u8 VAR_6[2];

 switch (VAR_3->type) {
 case 129:
  VAR_6[0] = 0x03;
  VAR_6[1] = 0x00;
  VAR_5 = FUNC_2(VAR_1, VAR_0, VAR_6, 2,
     3);

  if (VAR_5 >= 0) {
   VAR_6[0] = VAR_2 == 0 ? 0x05 : 0x06;
   VAR_6[1] = 0x00;

   VAR_5 = FUNC_2(VAR_1, VAR_0,
      VAR_6, 2, 3);

   if (VAR_5 >= 0) {
    VAR_4->wacom_wac.bt_high_speed = VAR_2;
    return 0;
   }
  }





  FUNC_1(VAR_1, "failed to poke device, command %d, err %d\n",
    VAR_6[0], VAR_5);
  break;
 case 128:
  if (VAR_2 == 1)
   VAR_4->wacom_wac.bt_features &= ~0x20;
  else
   VAR_4->wacom_wac.bt_features |= 0x20;

  VAR_6[0] = 0x03;
  VAR_6[1] = VAR_4->wacom_wac.bt_features;

  VAR_5 = FUNC_2(VAR_1, VAR_0, VAR_6, 2,
     1);
  if (VAR_5 >= 0)
   VAR_4->wacom_wac.bt_high_speed = VAR_2;
  break;
 }

 return 0;
}
