
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* wd_loadav; } ;
struct TYPE_5__ {TYPE_1__ hs_wd; } ;


 TYPE_2__* FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
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
  return (VAR_0 *
     (FUNC_0(VAR_2)->hs_wd.wd_loadav[0] - FUNC_0(VAR_1)->hs_wd.wd_loadav[0]));
}
