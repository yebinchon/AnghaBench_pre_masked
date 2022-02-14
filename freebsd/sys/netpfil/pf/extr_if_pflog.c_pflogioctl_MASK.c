
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifnet {int if_flags; int if_drv_flags; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static int
FUNC_0(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 switch (VAR_4) {
 case 128:
  if (VAR_3->if_flags & VAR_2)
   VAR_3->if_drv_flags |= VAR_1;
  else
   VAR_3->if_drv_flags &= ~VAR_1;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
