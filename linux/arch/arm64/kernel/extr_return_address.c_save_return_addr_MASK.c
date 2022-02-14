
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {scalar_t__ pc; } ;
struct return_address_data {int level; void* addr; } ;



__attribute__((used)) static int FUNC_0(struct stackframe *VAR_0, void *VAR_1)
{
 struct return_address_data *VAR_2 = VAR_1;

 if (!VAR_2->level) {
  VAR_2->addr = (void *)VAR_0->pc;
  return 1;
 } else {
  --VAR_2->level;
  return 0;
 }
}
