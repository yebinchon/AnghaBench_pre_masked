
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* v2_eval ) (char*) ;int (* v0_eval ) (int ,char*) ;} ;
struct TYPE_4__ {TYPE_1__ pv_fortheval; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

void
FUNC_6(char *VAR_4)
{
 unsigned long VAR_5;
 if(!VAR_4 || VAR_4[0] == 0)
  return;
 FUNC_1(&VAR_1, VAR_5);
 if(VAR_2 == VAR_0)
  (*(VAR_3->pv_fortheval.v0_eval))(FUNC_3(VAR_4), VAR_4);
 else
  (*(VAR_3->pv_fortheval.v2_eval))(VAR_4);
 FUNC_0();
 FUNC_2(&VAR_1, VAR_5);
}
