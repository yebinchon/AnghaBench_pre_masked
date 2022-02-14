
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_len; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int addr4; } ;
struct llentry {TYPE_1__ r_l3addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_in*,int) ;

__attribute__((used)) static void
FUNC_1(const struct llentry *VAR_1, struct sockaddr *VAR_2)
{
 struct sockaddr_in *VAR_3;

 VAR_3 = (struct sockaddr_in *)VAR_2;
 FUNC_0(VAR_3, sizeof(*VAR_3));
 VAR_3->sin_family = VAR_0;
 VAR_3->sin_len = sizeof(*VAR_3);
 VAR_3->sin_addr = VAR_1->r_l3addr.addr4;
}
