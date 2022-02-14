
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuple_info {unsigned char code; scalar_t__ name; } ;


 struct tuple_info* VAR_0 ;

__attribute__((used)) static struct tuple_info *
FUNC_0(unsigned char VAR_1)
{
 struct tuple_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->name; VAR_2++)
  if (VAR_2->code == VAR_1)
   return (VAR_2);
 return (0);
}
