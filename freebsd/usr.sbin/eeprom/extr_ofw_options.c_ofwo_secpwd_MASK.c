
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofwo_extabent {int ex_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int,int ,char*,void**,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(const struct ofwo_extabent *VAR_2, int VAR_3, const void *VAR_4,
    int VAR_5, const char *VAR_6)
{
 void *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = 0;
 VAR_10 = VAR_1;
 VAR_7 = ((void*)0);
 if (VAR_6) {
  VAR_8 = FUNC_1(VAR_3, FUNC_2(VAR_3), "security-mode",
      &VAR_7, &VAR_9, 1);
  if (VAR_8 <= 0 || FUNC_5("none", (char *)VAR_7, VAR_8) == 0) {
   VAR_10 = VAR_0;
   FUNC_6("no security mode set.");
  } else if (FUNC_5("command", (char *)VAR_7, VAR_8) == 0 ||
      FUNC_5("full", (char *)VAR_7, VAR_8) == 0) {
   VAR_10 = FUNC_4(VAR_3);
  } else {
   VAR_10 = VAR_0;
   FUNC_6("invalid security mode.");
  }
 } else
  FUNC_3(VAR_2->ex_prop, (const char *)VAR_4, VAR_5);
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7);
 return (VAR_10);
}
