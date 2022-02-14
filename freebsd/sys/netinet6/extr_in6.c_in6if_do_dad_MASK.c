
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct ifnet*) ;

int
FUNC_1(struct ifnet *VAR_4)
{

 if ((VAR_4->if_flags & VAR_0) != 0)
  return (0);
 if ((VAR_4->if_flags & VAR_1) == 0)
  return (0);
 if ((FUNC_0(VAR_4)->flags &
     (VAR_2 | VAR_3)) != 0)
  return (0);
 return (1);
}
