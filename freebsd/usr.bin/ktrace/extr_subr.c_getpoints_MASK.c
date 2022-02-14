
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

int
FUNC_0(char *VAR_13)
{
 int VAR_14 = 0;

 while (*VAR_13) {
  switch(*VAR_13) {
  case 'c':
   VAR_14 |= VAR_9 | VAR_11;
   break;
  case 'i':
   VAR_14 |= VAR_5;
   break;
  case 'f':
   VAR_14 |= VAR_3 | VAR_4;
   break;
  case 'n':
   VAR_14 |= VAR_6;
   break;
  case 'p':
   VAR_14 |= VAR_1;
   break;
  case 's':
   VAR_14 |= VAR_7;
   break;
  case 't':
   VAR_14 |= VAR_8;
   break;
  case 'u':
   VAR_14 |= VAR_12;
   break;
  case 'w':
   VAR_14 |= VAR_2;
   break;
  case 'y':
   VAR_14 |= VAR_10;
   break;
  case '+':
   VAR_14 |= VAR_0;
   break;
  default:
   return (-1);
  }
  VAR_13++;
 }
 return (VAR_14);
}
