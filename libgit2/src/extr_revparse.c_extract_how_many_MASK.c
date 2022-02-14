
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int*,char const*,int ,char const**,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(int *VAR_1, const char *VAR_2, size_t *VAR_3)
{
 const char *VAR_4;
 int VAR_5, VAR_6;
 char VAR_7 = VAR_2[*VAR_3];

 FUNC_0(VAR_2[*VAR_3] == '^' || VAR_2[*VAR_3] == '~');

 VAR_6 = 0;

 do {
  do {
   (*VAR_3)++;
   VAR_6++;
  } while (VAR_2[(*VAR_3)] == VAR_7 && VAR_7 == '~');

  if (FUNC_1(VAR_2[*VAR_3])) {
   if (FUNC_2(&VAR_5, VAR_2 + *VAR_3, FUNC_3(VAR_2 + *VAR_3), &VAR_4, 10) < 0)
    return VAR_0;

   VAR_6 += (VAR_5 - 1);
   *VAR_3 = VAR_4 - VAR_2;
  }

 } while (VAR_2[(*VAR_3)] == VAR_7 && VAR_7 == '~');

 *VAR_1 = VAR_6;

 return 0;
}
