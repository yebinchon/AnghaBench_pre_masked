
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef size_t UBYTE ;


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
 int FUNC_0 (int ) ;

void FUNC_1(UWORD VAR_12, UWORD VAR_13, char VAR_14[20])
{
 UBYTE VAR_15 = 0;

 while(VAR_14[VAR_15]){
  switch(VAR_14[VAR_15]){
      case '1':
     VAR_4 = VAR_8;
     VAR_5 = VAR_0;
     break;
      case '2':
     VAR_4 = VAR_8;
     VAR_5 = VAR_1;
     break;
      case '3':
     VAR_4 = VAR_8;
     VAR_5 = VAR_2;
     break;
      case 'A':
      case 'a':
     VAR_4 = VAR_8;
     VAR_5 = VAR_3;
     break;
      case '4':
     VAR_4 = VAR_9;
     VAR_5 = VAR_0;
     break;
      case '5':
     VAR_4 = VAR_9;
     VAR_5 = VAR_1;
     break;
      case '6':
     VAR_4 = VAR_9;
     VAR_5 = VAR_2;
     break;
   case 'B':
   case 'b':
     VAR_4 = VAR_9;
     VAR_5 = VAR_3;
     break;
   case '7':
     VAR_4 = VAR_10;
     VAR_5 = VAR_0;
     break;
   case '8':
     VAR_4 = VAR_10;
     VAR_5 = VAR_1;
     break;
   case '9':
     VAR_4 = VAR_10;
     VAR_5 = VAR_2;
     break;
   case 'C':
   case 'c':
     VAR_4 = VAR_10;
     VAR_5 = VAR_3;
     break;
   case '*':
     VAR_4 = VAR_11;
     VAR_5 = VAR_0;
     break;
   case '0':
     VAR_4 = VAR_11;
     VAR_5 = VAR_1;
     break;
   case '#':
     VAR_4 = VAR_11;
     VAR_5 = VAR_2;
     break;
   case 'D':
   case 'd':
     VAR_4 = VAR_11;
     VAR_5 = VAR_3;
     break;
   case ',':
     FUNC_0(VAR_12);
     FUNC_0(VAR_13);

   default:
     VAR_7 = 0x00U;
     goto skip;

    }
  VAR_6 = 0x87U;
  VAR_7 = 0x33U;
  FUNC_0(VAR_12);

  VAR_7 = 0x00U;
  FUNC_0(VAR_13);

   skip:
  VAR_15++;
 }
}
