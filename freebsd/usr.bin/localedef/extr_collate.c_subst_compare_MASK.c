
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ key; } ;
typedef TYPE_1__ subst_t ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int32_t VAR_2 = ((const subst_t *)VAR_0)->key;
 int32_t VAR_3 = ((const subst_t *)VAR_1)->key;

 return (VAR_2 < VAR_3 ? -1 : VAR_2 > VAR_3 ? 1 : 0);
}
