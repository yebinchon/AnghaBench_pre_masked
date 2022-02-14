
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pbar; int pulser; scalar_t__ indeterminate; } ;
typedef TYPE_1__ uiProgressBar ;
typedef int gdouble ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;

void FUNC_4(uiProgressBar *VAR_3, int VAR_4)
{
 if (VAR_4 == -1) {
  if (!VAR_3->indeterminate) {
   VAR_3->indeterminate = VAR_1;

   VAR_3->pulser = FUNC_1(100, VAR_2, VAR_3);
  }
  return;
 }
 if (VAR_3->indeterminate) {
  VAR_3->indeterminate = VAR_0;
  FUNC_0(VAR_3->pulser);
 }

 if (VAR_4 < 0 || VAR_4 > 100)
  FUNC_3("Value %d is out of range for a uiProgressBar.", VAR_4);

 FUNC_2(VAR_3->pbar, ((gdouble) VAR_4) / 100);
}
