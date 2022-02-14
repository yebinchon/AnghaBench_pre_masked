
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int next_got_entry; scalar_t__ gp; TYPE_1__* got; } ;
struct module {TYPE_2__ arch; } ;
struct got_entry {scalar_t__ val; } ;
struct TYPE_3__ {scalar_t__ sh_size; scalar_t__ sh_addr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t
FUNC_1 (struct module *VAR_0, uint64_t VAR_1, int *VAR_2)
{
 struct got_entry *VAR_3, *VAR_4;

 if (!*VAR_2)
  return 0;

 VAR_3 = (void *) VAR_0->arch.got->sh_addr;
 for (VAR_4 = VAR_3; VAR_4 < VAR_3 + VAR_0->arch.next_got_entry; ++VAR_4)
  if (VAR_4->val == VAR_1)
   goto found;


 FUNC_0(VAR_4 >= (struct got_entry *) (VAR_0->arch.got->sh_addr + VAR_0->arch.got->sh_size));

 VAR_4->val = VAR_1;
 ++VAR_0->arch.next_got_entry;
  found:
 return (uint64_t) VAR_4 - VAR_0->arch.gp;
}
