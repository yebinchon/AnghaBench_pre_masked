
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (char const*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, char **VAR_4) {
 int VAR_5, VAR_6, VAR_7;

 switch (VAR_5 = FUNC_3()) {
 case -1:
  FUNC_4(VAR_1, "%s: no more processes\n", VAR_0);
  return 100;
 case 0:

  FUNC_0(VAR_3, VAR_4);
  FUNC_4(VAR_1, "%s: ", VAR_0);
  FUNC_5(VAR_3);
  FUNC_2(VAR_2);
  FUNC_1(100);
 }
 while ((VAR_6 = FUNC_6(&VAR_7)) != VAR_5 && VAR_6 != -1)
  ;
 if (VAR_6 == -1)
  VAR_7 = -1;
 if (VAR_7&0377) {
  FUNC_4(VAR_1, "%s: fatal error in %s\n", VAR_0, VAR_3);
  VAR_7 |= 0400;
 }
 return (VAR_7>>8)&0377;
}
