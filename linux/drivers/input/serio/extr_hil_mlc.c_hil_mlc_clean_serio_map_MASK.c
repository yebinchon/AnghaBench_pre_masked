
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* di_map; TYPE_1__* serio_map; } ;
typedef TYPE_2__ hil_mlc ;
struct TYPE_4__ {int di_revmap; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(hil_mlc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  int VAR_3, VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 < 7 ; VAR_3++)
   if (VAR_1->di_map[VAR_3] == VAR_2)
    VAR_4++;

  if (!VAR_4)
   VAR_1->serio_map[VAR_2].di_revmap = -1;
 }
}
