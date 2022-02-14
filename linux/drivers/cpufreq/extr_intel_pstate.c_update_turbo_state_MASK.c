
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ max_pstate; scalar_t__ turbo_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;
struct TYPE_4__ {int turbo_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpudata** VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(void)
{
 u64 VAR_4;
 struct cpudata *VAR_5;

 VAR_5 = VAR_2[0];
 FUNC_0(VAR_0, VAR_4);
 VAR_3.turbo_disabled =
  (VAR_4 & VAR_1 ||
   VAR_5->pstate.max_pstate == VAR_5->pstate.turbo_pstate);
}
