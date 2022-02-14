
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifa_ifp; } ;
struct in_ifaddr {int ia_garp_count; TYPE_1__ ia_ifa; int ia_garp_timer; } ;
struct ifaddr {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int,int ,struct in_ifaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ifaddr*) ;

__attribute__((used)) static void
FUNC_4(struct ifaddr *VAR_2)
{
 struct in_ifaddr *VAR_3 = (struct in_ifaddr *) VAR_2;

 FUNC_0(VAR_3->ia_ifa.ifa_ifp);
 VAR_3->ia_garp_count = 0;
 if (FUNC_2(&VAR_3->ia_garp_timer, (1 << VAR_3->ia_garp_count) * VAR_1,
     VAR_0, VAR_3) == 0) {
  FUNC_3(VAR_2);
 }
 FUNC_1(VAR_3->ia_ifa.ifa_ifp);
}
