
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct locked_reg {scalar_t__ reg; scalar_t__ key; } ;
struct TYPE_2__ {struct locked_reg* locked; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct locked_reg *FUNC_0(u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1.locked[VAR_3].key && VAR_2 == VAR_1.locked[VAR_3].reg)
   return &VAR_1.locked[VAR_3];
 return ((void*)0);
}
