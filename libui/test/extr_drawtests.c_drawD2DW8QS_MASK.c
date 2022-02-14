
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_3__ {int AreaWidth; int AreaHeight; int Context; } ;
typedef TYPE_1__ uiAreaDrawParams ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,double) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int,int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(uiAreaDrawParams *VAR_2)
{
 uiDrawPath *VAR_3;
 uiDrawBrush VAR_4;

 FUNC_0(&VAR_4, VAR_0, 1.0);
 VAR_3 = FUNC_3(VAR_1);
 FUNC_4(VAR_3,
  100,
  100,
  (VAR_2->AreaWidth - 100) - 100,
  (VAR_2->AreaHeight - 100) - 100);
 FUNC_5(VAR_3);
 FUNC_1(VAR_2->Context, VAR_3, &VAR_4);
 FUNC_2(VAR_3);
}
