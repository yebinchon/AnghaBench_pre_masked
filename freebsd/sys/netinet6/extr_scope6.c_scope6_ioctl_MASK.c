
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct scope6_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ ifru_scope_id; } ;
struct in6_ifreq {TYPE_1__ ifr_ifru; } ;
struct ifnet {int ** if_afdata; } ;
typedef scalar_t__ caddr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ifnet*,struct scope6_id*) ;
 int FUNC_1 (struct scope6_id*) ;
 int FUNC_2 (struct ifnet*,struct scope6_id*) ;

int
FUNC_3(u_long VAR_3, caddr_t VAR_4, struct ifnet *VAR_5)
{
 struct in6_ifreq *VAR_6;

 if (VAR_5->if_afdata[VAR_0] == ((void*)0))
  return (VAR_2);

 VAR_6 = (struct in6_ifreq *)VAR_4;
 switch (VAR_3) {
 case 128:
  return (FUNC_2(VAR_5,
      (struct scope6_id *)VAR_6->ifr_ifru.ifru_scope_id));
 case 130:
  return (FUNC_0(VAR_5,
      (struct scope6_id *)VAR_6->ifr_ifru.ifru_scope_id));
 case 129:
  return (FUNC_1(
      (struct scope6_id *)VAR_6->ifr_ifru.ifru_scope_id));
 default:
  return (VAR_1);
 }
}
