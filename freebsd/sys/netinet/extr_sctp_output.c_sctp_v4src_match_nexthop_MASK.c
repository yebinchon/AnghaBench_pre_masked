
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct TYPE_11__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {TYPE_6__ sa; struct sockaddr_in sin; } ;
struct sctp_ifa {TYPE_1__ address; scalar_t__ ifa; } ;
struct in_addr {int s_addr; } ;
struct ifaddr {scalar_t__ ifa_netmask; } ;
struct TYPE_10__ {TYPE_3__* ro_rt; } ;
typedef TYPE_4__ sctp_route_t ;
struct TYPE_9__ {TYPE_6__* rt_gateway; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_2(struct sctp_ifa *VAR_3, sctp_route_t *VAR_4)
{
 return (0);
}
