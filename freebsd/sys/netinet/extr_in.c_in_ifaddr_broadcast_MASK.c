
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;
struct in_ifaddr {scalar_t__ ia_subnetmask; scalar_t__ ia_subnet; TYPE_2__ ia_broadaddr; } ;
struct in_addr {scalar_t__ s_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

int
FUNC_1(struct in_addr VAR_1, struct in_ifaddr *VAR_2)
{

 return ((VAR_1.s_addr == VAR_2->ia_broadaddr.sin_addr.s_addr ||




     (VAR_2->ia_subnetmask != VAR_0 &&
     FUNC_0(VAR_1.s_addr) == VAR_2->ia_subnet)) &&





     VAR_2->ia_subnetmask != (u_long)0xffffffff);
}
