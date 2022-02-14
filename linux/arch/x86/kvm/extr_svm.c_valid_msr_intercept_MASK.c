
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ index; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].index != VAR_0; VAR_3++)
  if (VAR_1[VAR_3].index == VAR_2)
   return 1;

 return 0;
}
