
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct TYPE_3__ {void* ia6t_pltime; void* ia6t_vltime; } ;
struct TYPE_4__ {int sin6_len; int sin6_addr; int sin6_family; } ;
struct in6_aliasreq {TYPE_1__ ifra_lifetime; TYPE_2__ ifra_dstaddr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct in6_aliasreq*,int *,int *) ;
 int FUNC_2 (struct ifnet*,struct in6_aliasreq*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_5)
{
 struct in6_aliasreq VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, &VAR_3, &VAR_4);





 VAR_6.ifra_dstaddr.sin6_len = sizeof(struct sockaddr_in6);
 VAR_6.ifra_dstaddr.sin6_family = VAR_0;
 VAR_6.ifra_dstaddr.sin6_addr = VAR_3;


 VAR_6.ifra_lifetime.ia6t_vltime = VAR_2;
 VAR_6.ifra_lifetime.ia6t_pltime = VAR_2;





 if ((VAR_7 = FUNC_2(VAR_5, &VAR_6, ((void*)0), 0)) != 0) {
  FUNC_3((VAR_1, "in6_ifattach_loopback: failed to configure "
      "the loopback address on %s (errno=%d)\n",
      FUNC_0(VAR_5), VAR_7));
  return (-1);
 }

 return 0;
}
