
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_4__ {int Context; } ;
typedef TYPE_1__ uiAreaDrawParams ;


 int FUNC_0 (int *,TYPE_1__*,int ,int ,int,int) ;
 int FUNC_1 (int *,int,int ,int,double) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(uiAreaDrawParams *VAR_1)
{
 uiDrawPath *VAR_2;
 uiDrawBrush VAR_3;

 FUNC_1(&VAR_3, 1, 0, 0, 1);
 VAR_2 = FUNC_4(VAR_0);
 FUNC_0(VAR_2, VAR_1, 0, 0, 200, 100);
 FUNC_5(VAR_2);
 FUNC_2(VAR_1->Context, VAR_2, &VAR_3);
 FUNC_3(VAR_2);

 FUNC_1(&VAR_3, 0, 0, 1, .5);
 VAR_2 = FUNC_4(VAR_0);
 FUNC_0(VAR_2, VAR_1, 0, 0, 100, 200);
 FUNC_5(VAR_2);
 FUNC_2(VAR_1->Context, VAR_2, &VAR_3);
 FUNC_3(VAR_2);
}
