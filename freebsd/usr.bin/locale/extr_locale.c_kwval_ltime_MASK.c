
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
typedef scalar_t__ nl_item ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;





 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sbuf*,char*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*) ;
 struct sbuf* FUNC_7 () ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static char *
FUNC_9(int VAR_10)
{
 char *VAR_11;
 struct sbuf *VAR_12;
 nl_item VAR_13, VAR_14 = 0, VAR_15 = 0;

 switch (VAR_10) {
 case 129:
  VAR_14 = VAR_5;
  VAR_15 = VAR_6;
  break;
 case 132:
  VAR_14 = VAR_0;
  VAR_15 = VAR_1;
  break;
 case 128:
  VAR_14 = VAR_7;
  VAR_15 = VAR_8;
  break;
 case 131:
  VAR_14 = VAR_2;
  VAR_15 = VAR_3;
  break;
 case 130:
  if (FUNC_0(&VAR_11, "%s;%s",
      FUNC_2(VAR_4),
      FUNC_2(VAR_9)) == -1)
   FUNC_1(1, "asprintf");
  return (VAR_11);
 }

 VAR_12 = FUNC_7();
 if (VAR_12 == ((void*)0))
  FUNC_1(1, "sbuf");
 for (VAR_13 = VAR_14; VAR_13 <= VAR_15; VAR_13++) {
  (void) FUNC_3(VAR_12, FUNC_2(VAR_13));
  if (VAR_13 != VAR_15)
   (void) FUNC_3(VAR_12, ";");
 }
 (void) FUNC_6(VAR_12);
 VAR_11 = FUNC_8(FUNC_4(VAR_12));
 if (VAR_11 == ((void*)0))
  FUNC_1(1, "strdup");
 FUNC_5(VAR_12);
 return (VAR_11);
}
