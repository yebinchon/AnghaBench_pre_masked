
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_freq; int turbo_freq; } ;
struct cpudata {TYPE_1__ pstate; } ;
struct TYPE_4__ {scalar_t__ no_turbo; scalar_t__ turbo_disabled; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cpudata *VAR_1)
{
 return VAR_0.turbo_disabled || VAR_0.no_turbo ?
   VAR_1->pstate.max_freq : VAR_1->pstate.turbo_freq;
}
