
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataset {int n; } ;


 double FUNC_0 (struct dataset*) ;
 double FUNC_1 (struct dataset*) ;
 double FUNC_2 (struct dataset*) ;
 double FUNC_3 (struct dataset*) ;
 double FUNC_4 (struct dataset*) ;
 int FUNC_5 (char*,...) ;
 int* VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct dataset *VAR_1, int VAR_2)
{

 FUNC_5("%c %3d %13.8g %13.8g %13.8g %13.8g %13.8g", VAR_0[VAR_2],
     VAR_1->n, FUNC_3(VAR_1), FUNC_1(VAR_1), FUNC_2(VAR_1), FUNC_0(VAR_1), FUNC_4(VAR_1));
 FUNC_5("\n");
}
