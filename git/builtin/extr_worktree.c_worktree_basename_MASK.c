
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, int *VAR_1)
{
 const char *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 while (VAR_3 && FUNC_0(VAR_0[VAR_3 - 1]))
  VAR_3--;

 for (VAR_2 = VAR_0 + VAR_3 - 1; VAR_2 > VAR_0; VAR_2--)
  if (FUNC_0(*VAR_2)) {
   VAR_2++;
   break;
  }

 *VAR_1 = VAR_3;
 return VAR_2;
}
