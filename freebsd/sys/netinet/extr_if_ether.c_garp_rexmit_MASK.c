
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ifa_ifp; } ;
struct in_ifaddr {int ia_garp_count; TYPE_1__ ia_ifa; int ia_garp_timer; } ;
struct TYPE_9__ {int sin_addr; } ;
struct TYPE_8__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (struct in_ifaddr*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int,void (*) (void*),struct in_ifaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_2)
{
 struct in_ifaddr *VAR_3 = VAR_2;

 if (FUNC_8(&VAR_3->ia_garp_timer) ||
     !FUNC_7(&VAR_3->ia_garp_timer)) {
  FUNC_4(VAR_3->ia_ifa.ifa_ifp);
  FUNC_10(&VAR_3->ia_ifa);
  return;
 }

 FUNC_1(VAR_3->ia_ifa.ifa_ifp->if_vnet);




 FUNC_4(VAR_3->ia_ifa.ifa_ifp);

 FUNC_6(VAR_3->ia_ifa.ifa_ifp, &FUNC_2(VAR_3)->sin_addr,
     &FUNC_2(VAR_3)->sin_addr, FUNC_5(VAR_3->ia_ifa.ifa_ifp));






 ++VAR_3->ia_garp_count;
 if (VAR_3->ia_garp_count >= VAR_0) {
  FUNC_10(&VAR_3->ia_ifa);
 } else {
  int VAR_4;
  FUNC_3(VAR_3->ia_ifa.ifa_ifp);
  VAR_4 = FUNC_9(&VAR_3->ia_garp_timer,
      (1 << VAR_3->ia_garp_count) * VAR_1,
      FUNC_11, VAR_3);
  FUNC_4(VAR_3->ia_ifa.ifa_ifp);
  if (VAR_4) {
   FUNC_10(&VAR_3->ia_ifa);
  }
 }

 FUNC_0();
}
