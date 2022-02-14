
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char**,char*,int ,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5, int VAR_6)
{
 int VAR_7;
 char *VAR_8;

 if ((VAR_7 = FUNC_4(VAR_5, VAR_6)) < 0) {
  if (VAR_4 == VAR_0 && VAR_5[0] != '/') {
   if (FUNC_0(&VAR_8, "%d%s", VAR_3, VAR_5) < 0)
    FUNC_2(VAR_2, "no memory");
   VAR_7 = FUNC_4(VAR_8, VAR_6);
   FUNC_3(VAR_8);
  }
 }

 if (VAR_7 < 0)
  FUNC_1(VAR_1, "open failed: %s", VAR_5);

 return (VAR_7);
}
