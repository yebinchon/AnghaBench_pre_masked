
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hs_nusers; } ;


 TYPE_1__* FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (void const*,void const*) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_1, const void *VAR_2)
{
 if (FUNC_1(FUNC_0(VAR_1)))
  if (FUNC_1(FUNC_0(VAR_2)))
   return (FUNC_2(VAR_1, VAR_2));
  else
   return (VAR_0);
 else if (FUNC_1(FUNC_0(VAR_2)))
  return (-VAR_0);
 else
  return (VAR_0 * (FUNC_0(VAR_2)->hs_nusers - FUNC_0(VAR_1)->hs_nusers));
}
