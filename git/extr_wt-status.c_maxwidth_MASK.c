
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *(*VAR_0)(int), int VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_2; VAR_4++) {
  const char *VAR_5 = VAR_0(VAR_4);
  int VAR_6 = VAR_5 ? FUNC_0(VAR_5) : 0;
  if (VAR_6 > VAR_3)
   VAR_3 = VAR_6;
 }
 return VAR_3;
}
