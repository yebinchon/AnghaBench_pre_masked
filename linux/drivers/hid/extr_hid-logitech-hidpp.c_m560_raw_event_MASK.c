
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_device {int input; int vertical_wheel_counter; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int*,int,int) ;
 struct hidpp_device* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_16, u8 *VAR_17, int VAR_18)
{
 struct hidpp_device *VAR_19 = FUNC_2(VAR_16);


 if (!VAR_19->input) {
  FUNC_0(VAR_16, "error in parameter\n");
  return -VAR_5;
 }

 if (VAR_18 < 7) {
  FUNC_0(VAR_16, "error in report\n");
  return 0;
 }

 if (VAR_17[0] == VAR_15 &&
     VAR_17[2] == VAR_10 && VAR_17[6] == 0x00) {
  switch (VAR_17[5]) {
  case 0xaf:
   FUNC_5(VAR_19->input, VAR_3, 1);
   break;
  case 0xb0:
   FUNC_5(VAR_19->input, VAR_1, 1);
   break;
  case 0xae:
   FUNC_5(VAR_19->input, VAR_0, 1);
   break;
  case 0x00:
   FUNC_5(VAR_19->input, VAR_0, 0);
   FUNC_5(VAR_19->input, VAR_1, 0);
   FUNC_5(VAR_19->input, VAR_3, 0);
   break;
  default:
   FUNC_0(VAR_16, "error in report\n");
   return 0;
  }
  FUNC_7(VAR_19->input);

 } else if (VAR_17[0] == 0x02) {
  int VAR_20;

  FUNC_5(VAR_19->input, VAR_2,
   !!(VAR_17[1] & VAR_6));
  FUNC_5(VAR_19->input, VAR_4,
   !!(VAR_17[1] & VAR_7));

  if (VAR_17[1] & VAR_8) {
   FUNC_6(VAR_19->input, VAR_11, -1);
   FUNC_6(VAR_19->input, VAR_12,
      -120);
  } else if (VAR_17[1] & VAR_9) {
   FUNC_6(VAR_19->input, VAR_11, 1);
   FUNC_6(VAR_19->input, VAR_12,
      120);
  }

  VAR_20 = FUNC_3(FUNC_1(VAR_16, VAR_17+3, 0, 12), 12);
  FUNC_6(VAR_19->input, VAR_13, VAR_20);

  VAR_20 = FUNC_3(FUNC_1(VAR_16, VAR_17+3, 12, 12), 12);
  FUNC_6(VAR_19->input, VAR_14, VAR_20);

  VAR_20 = FUNC_3(VAR_17[6], 8);
  if (VAR_20 != 0)
   FUNC_4(VAR_19->input,
     &VAR_19->vertical_wheel_counter, VAR_20);

  FUNC_7(VAR_19->input);
 }

 return 1;
}
