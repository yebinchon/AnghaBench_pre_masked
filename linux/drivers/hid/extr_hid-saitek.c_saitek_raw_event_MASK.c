
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saitek_sc {int quirks; int mode; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*,int) ;
 struct saitek_sc* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2,
  struct hid_report *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct saitek_sc *VAR_6 = FUNC_1(VAR_2);

 if (VAR_6->quirks & VAR_1 && VAR_5 == 7) {

  int VAR_7 = -1;
  if (VAR_4[1] & 0x01)
   VAR_7 = 0;
  else if (VAR_4[1] & 0x02)
   VAR_7 = 1;
  else if (VAR_4[1] & 0x04)
   VAR_7 = 2;


  VAR_4[1] &= ~0x07;

  if (VAR_7 != VAR_6->mode) {
   FUNC_0(VAR_2, "entered mode %d\n", VAR_7);
   if (VAR_6->mode != -1) {

    VAR_4[1] |= 0x04;
   }
   VAR_6->mode = VAR_7;
  }
 } else if (VAR_6->quirks & VAR_0 && VAR_5 == 8) {


  int VAR_8 = -1;
  if (VAR_4[1] & 0x80)
   VAR_8 = 0;
  else if (VAR_4[2] & 0x01)
   VAR_8 = 1;
  else if (VAR_4[2] & 0x02)
   VAR_8 = 2;


  VAR_4[1] &= ~0x80;
  VAR_4[2] &= ~0x03;

  if (VAR_8 != VAR_6->mode) {
   FUNC_0(VAR_2, "entered mode %d\n", VAR_8);
   if (VAR_6->mode != -1) {




    VAR_4[1] |= 0x80;
   }
   VAR_6->mode = VAR_8;
  }
 }

 return 0;
}
