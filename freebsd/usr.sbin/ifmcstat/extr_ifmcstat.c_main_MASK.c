
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,char**,int ) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,char const*) ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 () ;
 scalar_t__ VAR_13 ;

int
FUNC_9(int VAR_14, char **VAR_15)
{
 int VAR_16, VAR_17;





 while ((VAR_16 = FUNC_2(VAR_14, VAR_15, VAR_11)) != -1) {
  switch (VAR_16) {
  case 'i':
   if ((VAR_9 = FUNC_3(VAR_10)) == 0) {
    FUNC_1(VAR_12, "%s: unknown interface\n",
        VAR_10);
    FUNC_0(VAR_3);
   }
   break;

  case 'f':
   if (FUNC_6(VAR_10, "link") == 0) {
    VAR_8 = VAR_2;
    break;
   }
   FUNC_1(VAR_12, "%s: unknown address family\n", VAR_10);
   FUNC_0(VAR_6);

   break;







  case 'v':
   ++VAR_13;
   break;
  default:
   FUNC_8();
   break;

  }
 }

 if (VAR_8 == VAR_2 && VAR_13)
  FUNC_8();
 VAR_17 = FUNC_4();
 if (VAR_17 != 0)
  FUNC_0(VAR_5);

 FUNC_0(VAR_4);

}
