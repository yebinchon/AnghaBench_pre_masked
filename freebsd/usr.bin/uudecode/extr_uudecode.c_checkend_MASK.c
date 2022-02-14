
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 size_t VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (FUNC_2(VAR_3, VAR_4, VAR_6) != 0 ||
     FUNC_3(VAR_3 + VAR_6, " \t\r\n") != FUNC_1(VAR_3 + VAR_6)) {
  FUNC_5("%s: %s: %s", VAR_0, VAR_1, VAR_5);
  return (1);
 }
 if (FUNC_0(VAR_2) != 0) {
  FUNC_4("%s: %s", VAR_0, VAR_1);
  return (1);
 }
 return (0);
}
