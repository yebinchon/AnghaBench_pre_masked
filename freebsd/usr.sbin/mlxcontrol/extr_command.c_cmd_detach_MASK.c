
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxd_foreach_action {int* arg; int func; } ;


 int FUNC_0 (int,char**) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int,struct mlxd_foreach_action*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(int VAR_3, char *VAR_4[])
{
    struct mlxd_foreach_action VAR_5;
    int VAR_6 = 0, VAR_7, VAR_8, VAR_9;

    VAR_2 = 1;
    VAR_1 = 1;
    while ((VAR_8 = FUNC_3(VAR_3, VAR_4, "a")) != -1)
 switch(VAR_8) {
 case 'a':
     VAR_6 = 1;
     break;
 default:
     return(FUNC_0(VAR_3, VAR_4));
 }
    VAR_3 -= VAR_1;
    VAR_4 += VAR_1;

    if (VAR_6) {
 VAR_5.func = VAR_0;
 VAR_5.arg = &VAR_9;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
     if ((VAR_9 = FUNC_1(VAR_4[VAR_7])) == -1) {
  FUNC_6("'%s' is not a valid controller", VAR_4[VAR_7]);
     } else {
  FUNC_5(VAR_9, &VAR_5);
     }
 }
    } else {
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
     if ((VAR_9 = FUNC_2(VAR_4[VAR_7])) == -1) {
  FUNC_6("'%s' is not a valid drive", VAR_4[VAR_7]);
     } else {

  FUNC_4(VAR_0, &VAR_9);
     }
 }
    }
    return(0);
}
