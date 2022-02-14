
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_2__ sin_addr; } ;
struct in_ifaddr {TYPE_3__ ia_addr; struct ifnet* ia_ifp; int ia_subnetmask; } ;
struct ifnet {int dummy; } ;
typedef int mask ;
typedef int addr ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int ,int ,struct sockaddr*) ;
 int FUNC_3 (void*,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct in_ifaddr *VAR_2, int VAR_3, u_int VAR_4)
{
 struct sockaddr_in VAR_5, VAR_6;
 struct sockaddr *VAR_7, *VAR_8;
 struct ifnet *VAR_9;

 VAR_7 = (struct sockaddr *)&VAR_5;
 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.sin_len = sizeof(VAR_5);
 VAR_5.sin_family = VAR_0;
 VAR_8 = (struct sockaddr *)&VAR_6;
 FUNC_1(&VAR_6, sizeof(VAR_6));
 VAR_6.sin_len = sizeof(VAR_6);
 VAR_6.sin_family = VAR_0;
 VAR_6.sin_addr.s_addr = VAR_2->ia_subnetmask;
 VAR_9 = VAR_2->ia_ifp;

 if (VAR_3) {







  VAR_5.sin_addr.s_addr = FUNC_4(VAR_2->ia_addr.sin_addr.s_addr);
  FUNC_3(VAR_0, VAR_7, VAR_8, VAR_4);
 } else {

  VAR_5.sin_addr.s_addr = VAR_2->ia_addr.sin_addr.s_addr;
  FUNC_2(FUNC_0(VAR_9), VAR_1, VAR_7);
 }
}
