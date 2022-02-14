
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ git_submodule_update_t ;
struct TYPE_3__ {int map_value; char const* str_match; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_1(git_submodule_update_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < (int)FUNC_0(VAR_0); ++VAR_2)
  if (VAR_0[VAR_2].map_value == (int)VAR_1)
   return VAR_0[VAR_2].str_match;
 return ((void*)0);
}
