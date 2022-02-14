
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int physid; } ;
struct TYPE_5__ {TYPE_1__ cpu_info; } ;
typedef TYPE_2__ klcpu_t ;
typedef int cpuid_t ;


 TYPE_2__* FUNC_0 (int ) ;

int FUNC_1(cpuid_t VAR_0)
{
 klcpu_t *VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0)) == ((void*)0))
  return -1;
 return VAR_1->cpu_info.physid;
}
