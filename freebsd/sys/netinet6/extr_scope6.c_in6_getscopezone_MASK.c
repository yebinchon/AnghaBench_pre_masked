
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_index; } ;
struct TYPE_2__ {int * s6id_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct ifnet const*) ;

uint32_t
FUNC_1(const struct ifnet *VAR_3, int VAR_4)
{

 if (VAR_4 == VAR_1 ||
     VAR_4 == VAR_2)
  return (VAR_3->if_index);
 if (VAR_4 >= 0 && VAR_4 < VAR_0)
  return (FUNC_0(VAR_3)->s6id_list[VAR_4]);
 return (0);
}
