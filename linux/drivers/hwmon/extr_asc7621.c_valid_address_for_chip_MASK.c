
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* addresses; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_2].addresses[VAR_4] != VAR_0;
      VAR_4++) {
  if (VAR_1[VAR_2].addresses[VAR_4] == VAR_3)
   return 1;
 }
 return 0;
}
