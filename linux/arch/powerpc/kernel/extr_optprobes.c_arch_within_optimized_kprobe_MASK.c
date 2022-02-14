
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr; } ;
struct optimized_kprobe {TYPE_1__ kp; } ;


 unsigned long VAR_0 ;

int FUNC_0(struct optimized_kprobe *VAR_1,
     unsigned long VAR_2)
{
 return ((unsigned long)VAR_1->kp.addr <= VAR_2 &&
  (unsigned long)VAR_1->kp.addr + VAR_0 > VAR_2);
}
