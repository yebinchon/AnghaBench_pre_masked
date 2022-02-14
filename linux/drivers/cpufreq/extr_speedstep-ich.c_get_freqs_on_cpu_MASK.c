
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct get_freqs {TYPE_2__* policy; int ret; } ;
struct TYPE_6__ {int frequency; } ;
struct TYPE_4__ {int transition_latency; } ;
struct TYPE_5__ {TYPE_1__ cpuinfo; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int *,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(void *VAR_5)
{
 struct get_freqs *VAR_6 = VAR_5;

 VAR_6->ret =
  FUNC_0(VAR_3,
       &VAR_2[VAR_1].frequency,
       &VAR_2[VAR_0].frequency,
       &VAR_6->policy->cpuinfo.transition_latency,
       &VAR_4);
}
