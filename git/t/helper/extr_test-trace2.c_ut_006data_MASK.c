
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, const char **VAR_2)
{
 const char *VAR_3 =
  "expect <cat0> <k0> <v0> [<cat1> <k1> <v1> [...]]";

 if (VAR_1 % 3 != 0)
  FUNC_0("%s", VAR_3);

 while (VAR_1) {
  if (!VAR_2[0] || !*VAR_2[0] || !VAR_2[1] || !*VAR_2[1] ||
      !VAR_2[2] || !*VAR_2[2])
   FUNC_0("%s", VAR_3);

  FUNC_1(VAR_2[0], VAR_0, VAR_2[1], VAR_2[2]);
  VAR_2 += 3;
  VAR_1 -= 3;
 }

 return 0;
}
