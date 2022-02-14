
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef enum alias { ____Placeholder_alias } alias ;
struct TYPE_2__ {int alias; int * name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static enum alias
FUNC_1(const char *VAR_2)
{
 u_int VAR_3;

 VAR_3 = 0;
 while (VAR_1[VAR_3].name != ((void*)0)) {
  if (FUNC_0(VAR_1[VAR_3].name, VAR_2) == 0)
   return (VAR_1[VAR_3].alias);
  VAR_3++;
 }
 return (VAR_0);
}
