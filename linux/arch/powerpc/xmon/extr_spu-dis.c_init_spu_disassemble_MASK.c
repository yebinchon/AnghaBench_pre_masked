
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opcode; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  int VAR_4;



  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      int VAR_5 = VAR_3[VAR_4].opcode;
      if (VAR_5 >= VAR_0)
 continue;
      if (VAR_1[VAR_5] == 0)
 VAR_1[VAR_5] = &VAR_3[VAR_4];
    }
}
