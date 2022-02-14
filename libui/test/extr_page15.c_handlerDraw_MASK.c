
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiAreaHandler ;
struct TYPE_3__ {int Context; int AreaHeight; int AreaWidth; } ;
typedef TYPE_1__ uiAreaDrawParams ;
typedef int uiArea ;
struct tareas {int close; int bottomrightresize; int bottomleftresize; int toprightresize; int topleftresize; int bottomresize; int rightresize; int topresize; int leftresize; int alsomove; int move; } ;


 int FUNC_0 (int ,int ,double,double,double) ;
 int FUNC_1 (int ,int ,struct tareas*) ;

__attribute__((used)) static void FUNC_2(uiAreaHandler *VAR_0, uiArea *VAR_1, uiAreaDrawParams *VAR_2)
{
 struct tareas VAR_3;

 FUNC_1(VAR_2->AreaWidth, VAR_2->AreaHeight, &VAR_3);
 FUNC_0(VAR_2->Context, VAR_3.move, 0, 0.5, 0);
 FUNC_0(VAR_2->Context, VAR_3.alsomove, 0, 0.5, 0);
 FUNC_0(VAR_2->Context, VAR_3.leftresize, 0, 0, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.topresize, 0, 0, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.rightresize, 0, 0, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.bottomresize, 0, 0, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.topleftresize, 0, 0.5, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.toprightresize, 0, 0.5, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.bottomleftresize, 0, 0.5, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.bottomrightresize, 0, 0.5, 0.5);
 FUNC_0(VAR_2->Context, VAR_3.close, 0.5, 0, 0);


}
