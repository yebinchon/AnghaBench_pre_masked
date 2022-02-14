
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end_opd; scalar_t__ start_opd; } ;
struct module {TYPE_1__ arch; } ;


 void* FUNC_0 (void*) ;

void *FUNC_1(struct module *VAR_0, void *VAR_1)
{
 if (VAR_1 < (void *)VAR_0->arch.start_opd ||
   VAR_1 >= (void *)VAR_0->arch.end_opd)
  return VAR_1;

 return FUNC_0(VAR_1);
}
