
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int (*) (int,int *),int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_2, char *VAR_3[])
{
    int VAR_4 = 0, VAR_5, VAR_6, VAR_7;

    VAR_1 = 1;
    VAR_0 = 1;
    while ((VAR_6 = FUNC_2(VAR_2, VAR_3, "a")) != -1)
 switch(VAR_6) {
 case 'a':
     VAR_4 = 1;
     break;
 default:
     return(FUNC_0(VAR_2, VAR_3));
 }
    VAR_2 -= VAR_0;
    VAR_3 += VAR_0;

    if (VAR_4) {
 FUNC_3(FUNC_4, ((void*)0));
    } else {
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
     if ((VAR_7 = FUNC_1(VAR_3[VAR_5])) == -1) {
  FUNC_5("'%s' is not a valid controller", VAR_3[VAR_5]);
     } else {
  FUNC_4(VAR_7, ((void*)0));
     }
 }
    }
    return(0);
}
