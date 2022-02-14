
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; char const* name; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(unsigned long VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].mask; VAR_2++) {
  if ((VAR_1 & VAR_0[VAR_2].mask) != 0UL)
   return VAR_0[VAR_2].name;
 }
 return "???";
}
