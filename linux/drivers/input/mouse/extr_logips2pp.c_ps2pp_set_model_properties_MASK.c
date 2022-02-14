
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* name; struct input_dev* dev; } ;
struct ps2pp_info {int features; int kind; } ;
struct input_dev {int dummy; } ;


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
 int FUNC_0 (struct input_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_15,
           const struct ps2pp_info *VAR_16,
           bool VAR_17)
{
 struct input_dev *VAR_18 = VAR_15->dev;

 if (VAR_16->features & VAR_10)
  FUNC_0(VAR_18, VAR_5, VAR_3);

 if (VAR_16->features & VAR_7)
  FUNC_0(VAR_18, VAR_5, VAR_1);

 if (VAR_16->features & VAR_11)
  FUNC_0(VAR_18, VAR_5, VAR_4);

 if (VAR_16->features & VAR_9) {
  FUNC_0(VAR_18, VAR_5, VAR_2);
  FUNC_0(VAR_18, VAR_5, VAR_0);
 }

 if (VAR_16->features & VAR_12)
  FUNC_0(VAR_18, VAR_6, VAR_14);

 if (VAR_16->features & VAR_8)
  FUNC_0(VAR_18, VAR_6, VAR_13);

 switch (VAR_16->kind) {

 case 128:
  VAR_15->name = "Wheel Mouse";
  break;

 case 131:
  VAR_15->name = "MX Mouse";
  break;

 case 130:
  VAR_15->name = "TouchPad 3";
  break;

 case 129:
  VAR_15->name = "TrackMan";
  break;

 default:





  if (VAR_17)
   VAR_15->name = "Mouse";
  break;
 }
}
