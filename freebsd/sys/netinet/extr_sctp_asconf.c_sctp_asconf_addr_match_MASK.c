
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_4__ {int param_type; } ;
struct TYPE_5__ {int addr; TYPE_1__ ph; } ;
struct TYPE_6__ {TYPE_2__ addrp; } ;
struct sctp_asconf_addr {TYPE_3__ ap; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct sctp_asconf_addr *VAR_2, struct sockaddr *VAR_3)
{
 switch (VAR_3->sa_family) {
 default:
  break;
 }
 return (0);
}
