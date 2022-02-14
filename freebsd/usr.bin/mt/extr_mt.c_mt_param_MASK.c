
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_status_data {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (struct mt_status_data*,char*,int) ;
 int FUNC_4 (int,struct mt_status_data*,char*,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_1, char **VAR_2, int VAR_3, char *VAR_4,
  struct mt_status_data *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11 = 0, VAR_12 = 0;
 int VAR_13;

 while ((VAR_13 = FUNC_2(VAR_1, VAR_2, "lp:qs:x")) != -1) {
  switch (VAR_13) {
  case 'l':
   VAR_6 = 1;
   break;
  case 'p':
   if (VAR_9 != ((void*)0)) {
    FUNC_7("Only one parameter name may be "
        "specified");
    VAR_11 = 1;
    goto bailout;
   }
   VAR_9 = FUNC_6(VAR_0);
   break;
  case 'q':
   VAR_12 = 1;
   break;
  case 's':
   if (VAR_10 != ((void*)0)) {
    FUNC_7("Only one parameter value may be "
        "specified");
    VAR_11 = 1;
    goto bailout;
   }
   VAR_10 = FUNC_6(VAR_0);
   VAR_7 = 1;
   break;
  case 'x':
   VAR_8 = 1;
   break;
  default:
   break;
  }
 }

 if ((VAR_6 + VAR_7 + VAR_8) != 1) {
  FUNC_7("You must specify only one of -s, -l or -x");
  VAR_11 = 1;
  goto bailout;
 }

 if (VAR_8 != 0) {
  FUNC_5("%s", VAR_4);
  VAR_11 = 0;
  goto bailout;
 }

 if (VAR_7 != 0) {
  if (VAR_9 == ((void*)0))
   FUNC_0(1, "You must specify -p with -s");

  VAR_11 = FUNC_4(VAR_3, VAR_5, VAR_9,
      VAR_10);
 } else if (VAR_6 != 0)
  VAR_11 = FUNC_3(VAR_5, VAR_9, VAR_12);

bailout:
 FUNC_1(VAR_9);
 FUNC_1(VAR_10);
 return (VAR_11);
}
