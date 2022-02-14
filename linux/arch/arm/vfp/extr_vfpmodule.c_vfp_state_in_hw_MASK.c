
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int cpu; } ;
struct TYPE_4__ {TYPE_1__ hard; } ;
struct thread_info {TYPE_2__ vfpstate; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static bool FUNC_0(unsigned int VAR_1, struct thread_info *VAR_2)
{




 return VAR_0[VAR_1] == &VAR_2->vfpstate;
}
