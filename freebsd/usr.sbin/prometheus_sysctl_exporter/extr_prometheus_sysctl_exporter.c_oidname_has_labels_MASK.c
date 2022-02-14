
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; } ;
struct oidname {scalar_t__* labels; TYPE_1__ oid; } ;



__attribute__((used)) static bool
FUNC_0(const struct oidname *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->oid.len; ++VAR_1)
  if (VAR_0->labels[VAR_1] != 0)
   return (1);
 return (0);
}
