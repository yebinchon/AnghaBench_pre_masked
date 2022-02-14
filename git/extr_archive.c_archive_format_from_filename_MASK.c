
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;


 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int VAR_1 ;

const char *FUNC_1(const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (FUNC_0(VAR_2, VAR_0[VAR_3]->name))
   return VAR_0[VAR_3]->name;
 return ((void*)0);
}
