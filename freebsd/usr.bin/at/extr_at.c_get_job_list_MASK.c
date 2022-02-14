
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 long* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static long *
FUNC_3(int VAR_1, char *VAR_2[], int *VAR_3)
{
    int VAR_4, VAR_5;
    long *VAR_6;
    char *VAR_7;

    VAR_6 = ((void*)0);
    VAR_5 = VAR_1;
    if (VAR_5 > 0) {
 if ((VAR_6 = FUNC_0(VAR_5 * sizeof(*VAR_6))) == ((void*)0))
     FUNC_1("out of memory");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
     VAR_0 = 0;
     if ((VAR_6[VAR_4] = FUNC_2(VAR_2[VAR_4], &VAR_7, 10)) < 0 ||
  VAR_7 == VAR_2[VAR_4] || *VAR_7 != '\0' || VAR_0)
  FUNC_1("invalid job number");
 }
    }

    *VAR_3 = VAR_5;
    return VAR_6;
}
