
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(char VAR_13, const int *VAR_14, int VAR_15)
{
 int VAR_16;
 switch (VAR_13) {
 case 'm':
  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
   switch (VAR_14[VAR_16]) {
   case 0:
    VAR_10 = VAR_12;
    VAR_11 = 0;
    break;
   case 1:
    VAR_10 |= VAR_8;
    break;
   case 2:
   case 22:
    VAR_10 &= ~VAR_8;
    break;
   case 3:

    break;
   case 4:
   case 21:



    break;
   case 24:

    break;
   case 5:
   case 6:


    VAR_10 |= VAR_3;
    break;
   case 25:
    VAR_10 &= ~VAR_3;
    break;
   case 7:
    VAR_11 = 1;
    break;
   case 27:
    VAR_11 = 0;
    break;
   case 8:
   case 28:

    break;
   case 30:
    VAR_10 &= ~VAR_5;
    break;
   case 31:
    VAR_10 &= ~VAR_5;
    VAR_10 |= VAR_9;
    break;
   case 32:
    VAR_10 &= ~VAR_5;
    VAR_10 |= VAR_7;
    break;
   case 33:
    VAR_10 &= ~VAR_5;
    VAR_10 |= VAR_9 | VAR_7;
    break;
   case 34:
    VAR_10 &= ~VAR_5;
    VAR_10 |= VAR_6;
    break;
   case 35:
    VAR_10 &= ~VAR_5;
    VAR_10 |= VAR_9 | VAR_6;
    break;
   case 36:
    VAR_10 &= ~VAR_5;
    VAR_10 |= VAR_7 | VAR_6;
    break;
   case 37:
    VAR_10 |= VAR_9 |
     VAR_7 |
     VAR_6;
    break;
   case 38:
    break;
   case 39:
    VAR_10 &= ~VAR_5;
    VAR_10 |= (VAR_12 & VAR_5);
    break;
   case 40:
    VAR_10 &= ~VAR_0;
    break;
   case 41:
    VAR_10 &= ~VAR_0;
    VAR_10 |= VAR_4;
    break;
   case 42:
    VAR_10 &= ~VAR_0;
    VAR_10 |= VAR_2;
    break;
   case 43:
    VAR_10 &= ~VAR_0;
    VAR_10 |= VAR_4 | VAR_2;
    break;
   case 44:
    VAR_10 &= ~VAR_0;
    VAR_10 |= VAR_1;
    break;
   case 45:
    VAR_10 &= ~VAR_0;
    VAR_10 |= VAR_4 | VAR_1;
    break;
   case 46:
    VAR_10 &= ~VAR_0;
    VAR_10 |= VAR_2 | VAR_1;
    break;
   case 47:
    VAR_10 |= VAR_4 |
     VAR_2 |
     VAR_1;
    break;
   case 48:
    break;
   case 49:
    VAR_10 &= ~VAR_0;
    VAR_10 |= (VAR_12 & VAR_0);
    break;
   default:

    break;
   }
  }
  FUNC_1();
  break;
 case 'K':
  FUNC_0();
  break;
 default:

  break;
 }
}
