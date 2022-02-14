
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int padded; int grid; } ;
typedef TYPE_1__ uiForm ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(uiForm *VAR_2, int VAR_3)
{
 VAR_2->padded = VAR_3;
 if (VAR_2->padded) {
  FUNC_1(VAR_2->grid, VAR_1);
  FUNC_0(VAR_2->grid, VAR_0);
 } else {
  FUNC_1(VAR_2->grid, 0);
  FUNC_0(VAR_2->grid, 0);
 }
}
