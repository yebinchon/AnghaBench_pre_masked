
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int (*) (int,int*),int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int*) ;
 int VAR_3 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(int VAR_4, char *VAR_5[])
{
    int VAR_6, VAR_7 = 1, VAR_8, VAR_9;

    VAR_2 = 1;
    VAR_1 = 1;
    while ((VAR_6 = FUNC_2(VAR_4, VAR_5, "qv")) != -1)
 switch(VAR_6) {
 case 'q':
     VAR_7 = 0;
     break;
 case 'v':
     VAR_7 = 2;
     break;
 default:
     return(FUNC_0(VAR_4, VAR_5));
 }
    VAR_4 -= VAR_1;
    VAR_5 += VAR_1;

    if (VAR_4 < 1) {
 FUNC_3(VAR_0, &VAR_7);
 FUNC_4(FUNC_5, &VAR_7);
    } else {
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
     if ((VAR_9 = FUNC_1(VAR_5[VAR_8])) == -1) {
  FUNC_6("'%s' is not a valid drive", VAR_5[VAR_8]);
     } else {
  FUNC_5(VAR_9, &VAR_7);
     }
 }
    }
    return(VAR_3);
}
