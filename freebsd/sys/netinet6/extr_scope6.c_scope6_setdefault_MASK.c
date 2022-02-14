
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_index; } ;
struct TYPE_2__ {scalar_t__* s6id_list; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;

void
FUNC_2(struct ifnet *VAR_3)
{







 FUNC_0();
 if (VAR_3) {
  VAR_2.s6id_list[VAR_0] =
   VAR_3->if_index;
  VAR_2.s6id_list[VAR_1] =
   VAR_3->if_index;
 } else {
  VAR_2.s6id_list[VAR_0] = 0;
  VAR_2.s6id_list[VAR_1] = 0;
 }
 FUNC_1();
}
