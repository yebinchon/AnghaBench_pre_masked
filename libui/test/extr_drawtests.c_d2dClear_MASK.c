
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_3__ {int Context; int AreaHeight; int AreaWidth; } ;
typedef TYPE_1__ uiAreaDrawParams ;


 int FUNC_0 (int *,int ,double) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(uiAreaDrawParams *VAR_1, uint32_t VAR_2, double VAR_3)
{
 uiDrawPath *VAR_4;
 uiDrawBrush VAR_5;

 FUNC_0(&VAR_5, VAR_2, VAR_3);
 VAR_4 = FUNC_3(VAR_0);
 FUNC_4(VAR_4, 0, 0, VAR_1->AreaWidth, VAR_1->AreaHeight);
 FUNC_5(VAR_4);
 FUNC_1(VAR_1->Context, VAR_4, &VAR_5);
 FUNC_2(VAR_4);
}
