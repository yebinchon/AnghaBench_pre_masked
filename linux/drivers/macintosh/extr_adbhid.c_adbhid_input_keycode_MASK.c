
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adbhid {int flags; int* keycode; int input; } ;



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



 struct adbhid** VAR_12 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void
FUNC_4(int VAR_14, int VAR_15, int VAR_16)
{
 struct adbhid *VAR_17 = VAR_12[VAR_14];
 int VAR_18, VAR_19, VAR_20;

 VAR_18 = VAR_15 & 0x7f;
 VAR_19 = VAR_15 & 0x80;

 if (VAR_13) {
  if (VAR_18 == 135 && !VAR_19) {


   if (VAR_17->flags & VAR_3) {


    VAR_17->flags &= ~VAR_3;
    return;
   } else {
    VAR_17->flags |= VAR_4
     | VAR_2;
   }
  } else if (VAR_15 == 0xff &&
      !(VAR_17->flags & VAR_8)) {



   if (VAR_17->flags & VAR_4) {
    VAR_18 = 135;
    if (VAR_17->flags & VAR_2) {

     VAR_19 = 1;
     VAR_17->flags &= ~VAR_2;
    } else {

     VAR_19 = 0;
     VAR_17->flags &= ~VAR_4;
    }
   } else {
    FUNC_3("Spurious caps lock event (scancode 0xff).\n");
   }
  }
 }

 switch (VAR_18) {
 case 135:
  if (!VAR_13) {

   FUNC_0(VAR_17->input, VAR_9, 1);
   FUNC_1(VAR_17->input);
   FUNC_0(VAR_17->input, VAR_9, 0);
   FUNC_1(VAR_17->input);
   return;
  }
  break;
 }

 VAR_20 = VAR_12[VAR_14]->keycode[VAR_18];
 if (VAR_20) {
  FUNC_0(VAR_12[VAR_14]->input, VAR_20, !VAR_19);
  FUNC_1(VAR_12[VAR_14]->input);
 } else
  FUNC_3("Unhandled ADB key (scancode %#02x) %s.\n", VAR_18,
   VAR_19 ? "released" : "pressed");

}
