
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unit; int ctrlr; int sysdrive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_3, void *VAR_4)
{
    int VAR_5, VAR_6;


    if ((VAR_6 = FUNC_3(FUNC_1(VAR_3), 0)) >= 0) {
 for (VAR_5 = -1; ;) {

     if (FUNC_2(VAR_6, VAR_1, &VAR_5) < 0)
  break;


     if (VAR_5 == VAR_2.unit) {
  VAR_2.ctrlr = VAR_3;
  if (FUNC_2(VAR_6, VAR_0, &VAR_5) == 0)
      VAR_2.sysdrive = VAR_5;
     }
 }
 FUNC_0(VAR_6);
    }
}
