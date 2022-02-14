
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct a3d {int mode; char* axes; unsigned char buttons; struct input_dev* dev; } ;






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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct a3d *VAR_19, unsigned char *VAR_20)
{
 struct input_dev *VAR_21 = VAR_19->dev;

 switch (VAR_19->mode) {

  case 131:
  case 130:
  case 129:

   FUNC_2(VAR_21, VAR_17, ((VAR_20[5] << 6) | (VAR_20[6] << 3) | VAR_20[ 7]) - ((VAR_20[5] & 4) << 7));
   FUNC_2(VAR_21, VAR_18, ((VAR_20[8] << 6) | (VAR_20[9] << 3) | VAR_20[10]) - ((VAR_20[8] & 4) << 7));

   FUNC_1(VAR_21, VAR_12, VAR_20[2] & 1);
   FUNC_1(VAR_21, VAR_9, VAR_20[3] & 2);
   FUNC_1(VAR_21, VAR_10, VAR_20[3] & 4);

   FUNC_3(VAR_21);

   VAR_19->axes[0] = ((signed char)((VAR_20[11] << 6) | (VAR_20[12] << 3) | (VAR_20[13]))) + 128;
   VAR_19->axes[1] = ((signed char)((VAR_20[14] << 6) | (VAR_20[15] << 3) | (VAR_20[16]))) + 128;
   VAR_19->axes[2] = ((signed char)((VAR_20[17] << 6) | (VAR_20[18] << 3) | (VAR_20[19]))) + 128;
   VAR_19->axes[3] = ((signed char)((VAR_20[20] << 6) | (VAR_20[21] << 3) | (VAR_20[22]))) + 128;

   VAR_19->buttons = ((VAR_20[3] << 3) | VAR_20[4]) & 0xf;

   break;

  case 128:

   FUNC_2(VAR_21, VAR_17, ((VAR_20[ 9] << 6) | (VAR_20[10] << 3) | VAR_20[11]) - ((VAR_20[ 9] & 4) << 7));
   FUNC_2(VAR_21, VAR_18, ((VAR_20[12] << 6) | (VAR_20[13] << 3) | VAR_20[14]) - ((VAR_20[12] & 4) << 7));

   FUNC_1(VAR_21, VAR_12, VAR_20[2] & 1);
   FUNC_1(VAR_21, VAR_9, VAR_20[3] & 2);
   FUNC_1(VAR_21, VAR_10, VAR_20[3] & 4);
   FUNC_1(VAR_21, VAR_13, VAR_20[7] & 2);
   FUNC_1(VAR_21, VAR_8, VAR_20[7] & 4);

   FUNC_0(VAR_21, VAR_6, ((signed char)((VAR_20[15] << 6) | (VAR_20[16] << 3) | (VAR_20[17]))) + 128);
   FUNC_0(VAR_21, VAR_7, ((signed char)((VAR_20[18] << 6) | (VAR_20[19] << 3) | (VAR_20[20]))) + 128);
   FUNC_0(VAR_21, VAR_4, ((signed char)((VAR_20[21] << 6) | (VAR_20[22] << 3) | (VAR_20[23]))) + 128);
   FUNC_0(VAR_21, VAR_5, ((signed char)((VAR_20[24] << 6) | (VAR_20[25] << 3) | (VAR_20[26]))) + 128);

   FUNC_0(VAR_21, VAR_0, ( VAR_20[5] & 1) - ((VAR_20[5] >> 2) & 1));
   FUNC_0(VAR_21, VAR_1, ((VAR_20[5] >> 1) & 1) - ((VAR_20[6] >> 2) & 1));
   FUNC_0(VAR_21, VAR_2, ((VAR_20[4] >> 1) & 1) - ( VAR_20[3] & 1));
   FUNC_0(VAR_21, VAR_3, ((VAR_20[4] >> 2) & 1) - ( VAR_20[4] & 1));

   FUNC_1(VAR_21, VAR_16, VAR_20[8] & 1);
   FUNC_1(VAR_21, VAR_14, VAR_20[8] & 2);
   FUNC_1(VAR_21, VAR_15, VAR_20[8] & 4);
   FUNC_1(VAR_21, VAR_11, VAR_20[7] & 1);

   FUNC_3(VAR_21);

   break;
 }
}
