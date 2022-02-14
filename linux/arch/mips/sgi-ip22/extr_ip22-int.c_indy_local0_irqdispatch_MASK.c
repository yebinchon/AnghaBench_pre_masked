
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int istat0; int imask0; int vmeistat; int cmeimask0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_1(void)
{
 u8 VAR_5 = VAR_4->istat0 & VAR_4->imask0;
 u8 VAR_6;
 int VAR_7;

 if (VAR_5 & VAR_0) {
  VAR_6 = VAR_4->vmeistat & VAR_4->cmeimask0;
  VAR_7 = VAR_3[VAR_6];
 } else
  VAR_7 = VAR_2[VAR_5];





 if (VAR_7)
  FUNC_0(VAR_7);
 else
  FUNC_0(VAR_1 + 0);
}
