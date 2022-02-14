
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_cpu_desc {scalar_t__ x86_microcode_rev; } ;
struct TYPE_2__ {scalar_t__ microcode; } ;


 TYPE_1__ VAR_0 ;
 struct x86_cpu_desc* FUNC_0 (struct x86_cpu_desc const*) ;

bool FUNC_1(const struct x86_cpu_desc *VAR_1)
{
 const struct x86_cpu_desc *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2 || VAR_2->x86_microcode_rev > VAR_0.microcode)
  return 0;

 return 1;
}
