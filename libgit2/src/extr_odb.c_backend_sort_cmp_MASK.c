
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ priority; scalar_t__ is_alternate; } ;
typedef TYPE_1__ backend_internal ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const backend_internal *VAR_2 = (const backend_internal *)(VAR_0);
 const backend_internal *VAR_3 = (const backend_internal *)(VAR_1);

 if (VAR_3->priority == VAR_2->priority) {
  if (VAR_2->is_alternate)
   return -1;
  if (VAR_3->is_alternate)
   return 1;
  return 0;
 }
 return (VAR_3->priority - VAR_2->priority);
}
