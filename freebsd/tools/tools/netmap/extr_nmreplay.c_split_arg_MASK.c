
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int,char*) ;
 char** FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (char*,char const) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char **
FUNC_6(const char *VAR_0, int *VAR_1)
{
    char *VAR_2 = ((void*)0), **VAR_3 = ((void*)0), *VAR_4 = " \t\r\n,";
    int VAR_5, VAR_6, VAR_7;

    if (!VAR_0)
 return ((void*)0);
    VAR_5 = FUNC_5(VAR_0);




    for (;;) {
 VAR_6 = VAR_7 = 0;
 FUNC_0("start pass %d: <%s>", VAR_3 ? 1 : 0, VAR_2);
 while (VAR_6 < VAR_5) {

     while (VAR_6 <VAR_5 && FUNC_3(VAR_4, VAR_0[VAR_6]))
  VAR_6++;
     if (VAR_6 >= VAR_5)
  break;
     FUNC_0("   pass %d arg %d: <%s>", VAR_3 ? 1 : 0, VAR_7, VAR_0+VAR_6);
     if (VAR_3)
  VAR_3[VAR_7] = VAR_2+VAR_6;
     VAR_7++;

     while (VAR_6 <VAR_5 && !FUNC_3(VAR_4, VAR_0[VAR_6])) VAR_6++;
     if (VAR_3)
  VAR_2[VAR_6] = '\0';
 }
 if (!VAR_3) {
     FUNC_0("ac is %d", VAR_7);
     VAR_3 = FUNC_2(1, (VAR_5+1) + (VAR_7 + 2)*sizeof(char *));
     VAR_2 = (char *)&(VAR_3[VAR_7+2]);
     FUNC_4(VAR_2, VAR_0);
 } else {
     break;
 }
    }
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
 FUNC_1("%d: <%s>", VAR_6, VAR_3[VAR_6]);
    }
    VAR_3[VAR_6++] = ((void*)0);
    VAR_3[VAR_6++] = VAR_2;
    *VAR_1 = VAR_7;
    return VAR_3;
}
