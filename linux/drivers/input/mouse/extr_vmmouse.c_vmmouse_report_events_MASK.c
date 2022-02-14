
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct vmmouse_data {struct input_dev* abs_dev; } ;
struct psmouse {struct vmmouse_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int s8 ;
typedef int s32 ;
typedef int psmouse_ret_t ;


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
 int FUNC_0 (int ,int,int,int,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct psmouse*,char*) ;
 int FUNC_5 (struct psmouse*,struct input_dev*,struct input_dev*,struct input_dev*,int ,int) ;

__attribute__((used)) static psmouse_ret_t FUNC_6(struct psmouse *VAR_17)
{
 struct input_dev *VAR_18 = VAR_17->dev;
 struct vmmouse_data *VAR_19 = VAR_17->private;
 struct input_dev *VAR_20 = VAR_19->abs_dev;
 struct input_dev *VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26, VAR_27, VAR_28;
 unsigned int VAR_29;
 unsigned int VAR_30 = 255;

 while (VAR_30--) {

  FUNC_0(VAR_1, 0,
       VAR_22, VAR_26, VAR_27, VAR_28);
  if ((VAR_22 & VAR_12) == VAR_12) {
   FUNC_4(VAR_17, "failed to fetch status data\n");




   return VAR_7;
  }

  VAR_29 = VAR_22 & 0xffff;
  if (VAR_29 == 0)
   break;

  if (VAR_29 % 4) {
   FUNC_4(VAR_17, "invalid queue length\n");
   return VAR_7;
  }


  FUNC_0(VAR_0, 4, VAR_22, VAR_23, VAR_24, VAR_25);
  if (VAR_22 & VAR_15) {
   VAR_21 = VAR_18;
   FUNC_2(VAR_18, VAR_10, (s32)VAR_23);
   FUNC_2(VAR_18, VAR_11, -(s32)VAR_24);
  } else {
   VAR_21 = VAR_20;
   FUNC_1(VAR_20, VAR_2, VAR_23);
   FUNC_1(VAR_20, VAR_3, VAR_24);
  }


  FUNC_2(VAR_18, VAR_9, -(s8)((u8) VAR_25));

  FUNC_5(VAR_17, VAR_20, VAR_18,
          VAR_21, VAR_4,
          VAR_22 & VAR_13);
  FUNC_5(VAR_17, VAR_20, VAR_18,
          VAR_21, VAR_6,
          VAR_22 & VAR_16);
  FUNC_5(VAR_17, VAR_20, VAR_18,
          VAR_21, VAR_5,
          VAR_22 & VAR_14);
  FUNC_3(VAR_20);
  FUNC_3(VAR_18);
 }

 return VAR_8;
}
