
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;
struct TYPE_4__ {int (* get_val ) (struct cpudata*,int) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct cpudata*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cpudata *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_2->pstate.current_pstate)
  return;

 VAR_2->pstate.current_pstate = VAR_3;
 FUNC_1(VAR_0, VAR_1.get_val(VAR_2, VAR_3));
}
