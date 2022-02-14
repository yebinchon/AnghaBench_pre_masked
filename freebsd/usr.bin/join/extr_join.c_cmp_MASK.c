
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_4__ {size_t fieldcnt; int * fields; } ;
typedef TYPE_1__ LINE ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(LINE *VAR_0, u_long VAR_1, LINE *VAR_2, u_long VAR_3)
{
 if (VAR_0->fieldcnt <= VAR_1)
  return (VAR_2->fieldcnt <= VAR_3 ? 0 : 1);
 if (VAR_2->fieldcnt <= VAR_3)
  return (-1);
 return (FUNC_0(VAR_0->fields[VAR_1], VAR_2->fields[VAR_3]));
}
