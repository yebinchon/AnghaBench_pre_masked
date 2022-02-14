
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static size_t
FUNC_2(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 long VAR_5 = FUNC_1(VAR_1, &VAR_4, 0);

 if (*VAR_4) {
  if (VAR_3)
   goto Lose;
  else
   return 0;
 }
 if (VAR_5 < 0) {
Lose: FUNC_0(VAR_0, "%s", VAR_2);
 }
 return (size_t)VAR_5;
}
