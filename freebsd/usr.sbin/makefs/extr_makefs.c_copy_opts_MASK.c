
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ name; } ;
typedef TYPE_1__ option_t ;


 int FUNC_0 (size_t,int) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__ const*,size_t) ;

option_t *
FUNC_2(const option_t *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_0[VAR_1].name; VAR_1++)
  continue;
 VAR_1++;
 return FUNC_1(FUNC_0(VAR_1, sizeof(*VAR_0)), VAR_0, VAR_1 * sizeof(*VAR_0));
}
