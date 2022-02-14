
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 const char *VAR_1;
 int VAR_2 = 0, VAR_3 = 0;
 const char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = 0, VAR_8 = 0;

 for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
  if (FUNC_0(*VAR_1)) {
   if (VAR_8) {
    VAR_7++;
    VAR_3++;
   }
   continue;
  }
  VAR_5 = VAR_1;
  if (VAR_4 == ((void*)0))
   VAR_4 = VAR_1;
  if (*VAR_1 == '-') {
   VAR_8 = 1;
   VAR_7++;
   continue;
  }
  if ((!FUNC_1(VAR_1, ">8", 2) || !FUNC_1(VAR_1, "8<", 2) ||
       !FUNC_1(VAR_1, ">%", 2) || !FUNC_1(VAR_1, "%<", 2))) {
   VAR_8 = 1;
   VAR_7 += 2;
   VAR_2 += 2;
   VAR_1++;
   continue;
  }
  VAR_8 = 0;
 }
 if (VAR_4 && VAR_5)
  VAR_6 = VAR_5 - VAR_4 + 1;
 else
  VAR_6 = 0;
 return (VAR_2 && 8 <= VAR_6 &&
  VAR_6 < VAR_7 * 3 &&
  VAR_3 * 2 < VAR_7);
}
