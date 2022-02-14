
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Y; int X; int AreaHeight; int AreaWidth; } ;
typedef TYPE_1__ uiAreaMouseEvent ;
typedef int uiAreaHandler ;
typedef int uiArea ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,double*,double*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,double,double) ;
 int FUNC_2 (double,double,double*,double*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(uiAreaHandler *VAR_2, uiArea *VAR_3, uiAreaMouseEvent *VAR_4)
{
 double VAR_5, VAR_6;
 double VAR_7[10], VAR_8[10];
 int VAR_9;

 FUNC_0(VAR_4->AreaWidth, VAR_4->AreaHeight, &VAR_5, &VAR_6);
 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);

 for (VAR_9 = 0; VAR_9 < 10; VAR_9++)
  if (FUNC_1(VAR_4->X, VAR_4->Y, VAR_7[VAR_9], VAR_8[VAR_9]))
   break;
 if (VAR_9 == 10)
  VAR_9 = -1;

 VAR_0 = VAR_9;

 FUNC_3(VAR_1);
}
