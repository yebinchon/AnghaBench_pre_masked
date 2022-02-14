
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int irqreturn_t ;
struct TYPE_4__ {int mid_ctrl; int key_ctrl; int key_data; } ;
struct TYPE_3__ {int state; int len; int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;


 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;


 TYPE_2__ VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;
 int VAR_15 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_16, void *VAR_17)
{
 u_char VAR_18;
 int VAR_19;
 int VAR_20;

repeat:
 if (VAR_10.mid_ctrl & VAR_2)
  if (&FUNC_3)
   FUNC_3();
 VAR_18 = VAR_10.key_ctrl;

 if (!((VAR_18 | VAR_10.mid_ctrl) & VAR_2))
  return VAR_7;

 if (VAR_18 & VAR_3) {


  FUNC_8("Keyboard overrun\n");
  VAR_19 = VAR_10.key_data;
  if (VAR_12)

   goto interpret_scancode;
  else if (FUNC_0(VAR_19)) {


   VAR_14.state = 130;
   goto interpret_scancode;
  } else {

   VAR_14.state = 129;
   VAR_14.len = 1;
   goto repeat;
  }
 }

 if (VAR_18 & VAR_5) {

  VAR_19 = VAR_10.key_data;
 interpret_scancode:
  switch (VAR_14.state) {
  case 130:
   switch (VAR_19) {
   case 0xF7:
    VAR_14.state = 133;
    VAR_14.len = 0;
    break;

   case 0xF8:
   case 0xF9:
   case 0xFA:
   case 0xFB:
    VAR_14.state = 128;
    VAR_14.len = 1;
    VAR_14.buf[0] = VAR_19;
    break;

   case 0xFC:
    VAR_14.state = 132;
    VAR_14.len = 0;
    break;

   case 0xFE:
   case 0xFF:
    VAR_14.state = 131;
    VAR_14.len = 1;
    VAR_14.buf[0] = VAR_19;
    break;

   case 0xF1:

    if (VAR_12) {
     ++VAR_12;
     VAR_15 = VAR_13;
     break;
    }


   default:
    VAR_20 = VAR_19 & VAR_6;
    VAR_19 &= ~VAR_6;
    if (VAR_12) {






     int VAR_21, VAR_22;

     FUNC_11(VAR_19, VAR_11);
     VAR_15 = VAR_13;

     VAR_21 = VAR_19;
     VAR_22 = FUNC_1(VAR_21) - 0xf0;
     VAR_21 = FUNC_2(VAR_21);

     FUNC_10("Key with scancode %d ", VAR_19);
     if (VAR_22 == VAR_8 || VAR_22 == VAR_9) {
      if (VAR_21 < ' ')
       FUNC_7("('^%c') ", VAR_21 + '@');
      else
       FUNC_7("('%c') ", VAR_21);
     }
     FUNC_7("is broken -- will be ignored.\n");
     break;
    } else if (FUNC_12(VAR_19, VAR_11))
     break;

    if (&FUNC_4)
     FUNC_4((unsigned char)VAR_19, !VAR_20);
    break;
   }
   break;

  case 133:
   VAR_14.buf[VAR_14.len++] = VAR_19;
   if (VAR_14.len == 5) {
    VAR_14.state = 130;


   }
   break;

  case 128:
   VAR_14.buf[VAR_14.len++] = VAR_19;
   if (VAR_14.len == 3) {
    VAR_14.state = 130;
    if (&FUNC_5)
     FUNC_5(VAR_14.buf);
   }
   break;

  case 131:
   VAR_14.buf[1] = VAR_19;
   VAR_14.state = 130;



   break;

  case 132:
   VAR_14.buf[VAR_14.len++] = VAR_19;
   if (VAR_14.len == 6) {
    VAR_14.state = 130;




   }
   break;

  case 129:
   if (VAR_14.len <= 0 || FUNC_0(VAR_19)) {
    VAR_14.state = 130;
    goto interpret_scancode;
   }
   VAR_14.len--;
   break;
  }
 }






 if (VAR_18 & (VAR_1 | VAR_4)) {
  FUNC_9("Error in keyboard communication\n");
 }




 goto repeat;
}
