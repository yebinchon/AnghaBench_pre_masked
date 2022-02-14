
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tareas {int close; int bottomrightresize; int bottomleftresize; int toprightresize; int topleftresize; int bottomresize; int rightresize; int topresize; int leftresize; int alsomove; int move; } ;


 int FUNC_0 (int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(double VAR_0, double VAR_1, struct tareas *VAR_2)
{
 FUNC_0(VAR_2->move, 20, 20, VAR_0 - 20, 20 + 30);
 FUNC_0(VAR_2->alsomove, 30, 200, 100, 270);
 FUNC_0(VAR_2->leftresize, 5, 20, 15, VAR_1 - 20);
 FUNC_0(VAR_2->topresize, 20, 5, VAR_0 - 20, 15);
 FUNC_0(VAR_2->rightresize, VAR_0 - 15, 20, VAR_0 - 5, VAR_1 - 20);
 FUNC_0(VAR_2->bottomresize, 20, VAR_1 - 15, VAR_0 - 20, VAR_1 - 5);
 FUNC_0(VAR_2->topleftresize, 5, 5, 15, 15);
 FUNC_0(VAR_2->toprightresize, VAR_0 - 15, 5, VAR_0 - 5, 15);
 FUNC_0(VAR_2->bottomleftresize, 5, VAR_1 - 15, 15, VAR_1 - 5);
 FUNC_0(VAR_2->bottomrightresize, VAR_0 - 15, VAR_1 - 15, VAR_0 - 5, VAR_1 - 5);
 FUNC_0(VAR_2->close, 130, 200, 200, 270);
}
