
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* opd; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_2__ Elf64_Shdr ;


 void* FUNC_0 (void*) ;

void *FUNC_1(struct module *VAR_0, void *VAR_1)
{
 Elf64_Shdr *VAR_2 = VAR_0->arch.opd;

 if (VAR_1 < (void *)VAR_2->sh_addr ||
   VAR_1 >= (void *)(VAR_2->sh_addr + VAR_2->sh_size))
  return VAR_1;

 return FUNC_0(VAR_1);
}
