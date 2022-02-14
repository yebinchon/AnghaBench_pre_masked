
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const**) ;
 int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 const char *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 do {
  VAR_3 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
   if (VAR_1[VAR_4] == ((void*)0))
    continue;
   VAR_2 = VAR_1[VAR_4];
   VAR_5 = FUNC_1(&VAR_2);
   if (VAR_5 == -1 || VAR_5 == VAR_4 ||
       *VAR_2 != '\0' ||
       VAR_1[VAR_5] == ((void*)0) ||
       VAR_1[VAR_5] == VAR_1[VAR_4])
    continue;
   FUNC_0("indir...", VAR_4);
   VAR_1[VAR_4] = VAR_1[VAR_5];
   FUNC_0("...ectsym", VAR_4);
   VAR_3++;
  }
 } while (VAR_3);
}
