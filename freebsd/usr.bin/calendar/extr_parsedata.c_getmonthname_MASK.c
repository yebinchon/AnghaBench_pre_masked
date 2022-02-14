
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; char const* name; } ;


 char const** VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_2)
{
 if (VAR_2 <= 0 || VAR_2 > 12)
  return ("");
 if (VAR_1[VAR_2 - 1].len != 0 && VAR_1[VAR_2 - 1].name != ((void*)0))
  return (VAR_1[VAR_2 - 1].name);
 return (VAR_0[VAR_2 - 1]);
}
