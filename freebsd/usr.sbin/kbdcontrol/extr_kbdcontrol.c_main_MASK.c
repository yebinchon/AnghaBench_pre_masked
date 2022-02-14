
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char const*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,char**,int*,float) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_6, char **VAR_7)
{
 const char *VAR_8 = "A:a:b:df:iKk:Fl:L:P:r:x";
 int VAR_9;


 while ((VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8)) != -1) {
  if (VAR_9 == 'P')
   FUNC_0(VAR_3);
  if (VAR_9 == '?')
   FUNC_14();
 }

 VAR_4 = VAR_5 = 1;
 while ((VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8)) != -1)
  switch(VAR_9) {
  case 'A':
  case 'a':
   FUNC_5((VAR_9 == 'A')? VAR_1 : VAR_0, VAR_3);
   break;
  case 'b':
   FUNC_9(VAR_3);
   break;
  case 'd':
   FUNC_7();
   break;
  case 'l':
   FUNC_4(VAR_3, 0);
   break;
  case 'L':
   FUNC_4(VAR_3, 1);
   break;
  case 'P':
   break;
  case 'f':
   FUNC_10(VAR_3,
       FUNC_6(VAR_6, VAR_7, &VAR_4, 'f'));
   break;
  case 'F':
   FUNC_3();
   break;
  case 'i':
   FUNC_13();
   break;
  case 'K':
   FUNC_8();
   break;
  case 'k':
   FUNC_11(VAR_3);
   break;
  case 'r':
   FUNC_12(VAR_3);
   break;
  case 'x':
   VAR_2 = 1;
   break;
  default:
   FUNC_14();
  }
 if ((VAR_4 != VAR_6) || (VAR_6 == 1))
  FUNC_14();
 FUNC_1(0);
}
