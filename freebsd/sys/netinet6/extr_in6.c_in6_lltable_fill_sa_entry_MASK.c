
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int addr6; } ;
struct llentry {TYPE_1__ r_l3addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_in6*,int) ;

__attribute__((used)) static void
FUNC_1(const struct llentry *VAR_1, struct sockaddr *VAR_2)
{
 struct sockaddr_in6 *VAR_3;

 VAR_3 = (struct sockaddr_in6 *)VAR_2;
 FUNC_0(VAR_3, sizeof(*VAR_3));
 VAR_3->sin6_family = VAR_0;
 VAR_3->sin6_len = sizeof(*VAR_3);
 VAR_3->sin6_addr = VAR_1->r_l3addr.addr6;
}
