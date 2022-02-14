
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (char*) ;
 int VAR_17 ;
 int FUNC_1 (int,char*) ;
 int VAR_18 ;
 char* FUNC_2 (int *,char*) ;
 char* FUNC_3 (int*,char*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 char VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 char VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(int VAR_29, char *VAR_30[])
{
 char *VAR_31;

 if (VAR_29 == 1) {
  VAR_18 |= VAR_3 | VAR_16;
 }
 while (--VAR_29 && **++VAR_30 == '-')
  for (VAR_31 = *VAR_30+1; *VAR_31; VAR_31++)
   switch (*VAR_31) {
   case 'T':
    VAR_18 |= VAR_2;
   case 't':
    VAR_18 |= VAR_16;
    break;
   case 'c':
    VAR_18 |= VAR_7;
   case 's':
    if (VAR_31[1])
     VAR_21 = *++VAR_31;
    else
     VAR_21 = '\t';
    break;
   case 'C':
    VAR_18 |= VAR_8;
   case 'S':
    if (VAR_31[1])
     VAR_25 = *++VAR_31;
    else
     VAR_25 = '\t';
    break;
   case 'w':
    VAR_31 = FUNC_3(&VAR_26, VAR_31, 0);
    if (VAR_26 <= 0)
     FUNC_1(1, "width must be a positive integer");
    break;
   case 'K':
    VAR_18 |= VAR_14;
   case 'k':
    VAR_31 = FUNC_3(&VAR_28, VAR_31, 0);
    if (!VAR_28)
     VAR_28 = 1;
    break;
   case 'm':
    VAR_18 |= VAR_4;
    break;
   case 'g':
    VAR_31 = FUNC_3(&VAR_19, VAR_31, 0);
    break;
   case 'G':
    VAR_31 = FUNC_3(&VAR_27, VAR_31, 0);
    break;
   case 'e':
    VAR_18 |= VAR_10;
    break;
   case 'E':
    VAR_18 |= VAR_9;
    break;
   case 'j':
    VAR_18 |= VAR_12;
    break;
   case 'n':
    VAR_18 |= VAR_5;
    break;
   case 'y':
    VAR_18 |= VAR_11;
    break;
   case 'H':
    VAR_18 |= VAR_0;
   case 'h':
    VAR_18 |= VAR_13;
    break;
   case 'z':
    VAR_18 |= VAR_15;
    break;



   case 'o':
    VAR_31 = FUNC_2(&VAR_17, VAR_31);
    break;
   case 'b':
    VAR_18 |= VAR_1;
    VAR_31 = FUNC_2(&VAR_20, VAR_31);
    break;
   case 'B':
    VAR_18 |= VAR_6;
    VAR_31 = FUNC_2(&VAR_22, VAR_31);
    break;
   default:
    FUNC_4();
   }


 switch (VAR_29) {


 case 2:
  if ((VAR_23 = FUNC_0(VAR_30[1])) < 0)
   VAR_23 = 0;
 case 1:
  if ((VAR_24 = FUNC_0(VAR_30[0])) < 0)
   VAR_24 = 0;
 case 0:
  break;
 default:
  FUNC_1(1, "too many arguments");
 }
}
