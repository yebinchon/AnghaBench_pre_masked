
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sctp_scoping {scalar_t__ loopback_scope; int site_scope; int ipv6_addr_legal; int ipv4_local_scope; int ipv4_addr_legal; } ;
struct TYPE_4__ {int sa_family; } ;
struct TYPE_5__ {struct sockaddr_in6 sin6; struct sockaddr_in sin; TYPE_1__ sa; } ;
struct sctp_ifa {int localifa_flags; TYPE_2__ address; scalar_t__ ifn_p; } ;




 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sctp_ifa*) ;

int
FUNC_6(struct sctp_ifa *VAR_1,
    struct sctp_scoping *VAR_2,
    int VAR_3)
{
 if ((VAR_2->loopback_scope == 0) &&
     (VAR_1->ifn_p) && FUNC_4(VAR_1->ifn_p)) {



  return (0);
 }
 switch (VAR_1->address.sa.sa_family) {
 default:
  return (0);
 }
 return (1);
}
