
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_3__ {struct in_addr addr4; } ;
struct llentry {int la_flags; int ln_state; int r_skip_req; TYPE_2__* lle_tbl; int lle_timer; int la_expire; int la_preempt; TYPE_1__ r_l3addr; } ;
struct ifnet {int if_vnet; } ;
struct epoch_tracker {int dummy; } ;
struct TYPE_4__ {struct ifnet* llt_ifp; } ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;




 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct llentry*,int) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct llentry*) ;
 int FUNC_8 (struct llentry*) ;
 int FUNC_9 (struct llentry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct llentry*) ;
 int FUNC_11 (struct llentry*) ;
 int FUNC_12 (struct epoch_tracker) ;
 int FUNC_13 (struct epoch_tracker) ;
 int VAR_6 ;
 int FUNC_14 (struct ifnet*,int *,struct in_addr*,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_18 (struct llentry*) ;
 int FUNC_19 (TYPE_2__*,struct llentry*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_20(void *VAR_12)
{
 struct llentry *VAR_13 = (struct llentry *)VAR_12;
 struct ifnet *VAR_14;
 int VAR_15;

 if (VAR_13->la_flags & VAR_4) {
  return;
 }
 FUNC_10(VAR_13);
 if (FUNC_15(&VAR_13->lle_timer)) {
  FUNC_11(VAR_13);
   return;
  }
 VAR_14 = VAR_13->lle_tbl->llt_ifp;
 FUNC_3(VAR_14->if_vnet);

 switch (VAR_13->ln_state) {
 case 129:
  FUNC_8(VAR_13);
  VAR_13->r_skip_req = 1;
  FUNC_9(VAR_13);
  VAR_13->ln_state = 128;
  FUNC_16(&VAR_13->lle_timer, VAR_8 * VAR_6);
  FUNC_11(VAR_13);
  FUNC_2();
  return;
 case 128:
  FUNC_8(VAR_13);
  VAR_15 = VAR_13->r_skip_req;
  FUNC_9(VAR_13);

  if (VAR_15 == 0 && VAR_13->la_preempt > 0) {

   struct epoch_tracker VAR_16;
   struct in_addr VAR_17;

   VAR_17 = VAR_13->r_l3addr.addr4;
   VAR_13->la_preempt--;
   FUNC_16(&VAR_13->lle_timer, VAR_8 * VAR_6);
   FUNC_11(VAR_13);
   FUNC_12(VAR_16);
   FUNC_14(VAR_14, ((void*)0), &VAR_17, ((void*)0));
   FUNC_13(VAR_16);
   FUNC_2();
   return;
  }

  if (VAR_13->la_expire > VAR_10) {
   FUNC_16(&VAR_13->lle_timer, VAR_8 * VAR_6);
   FUNC_11(VAR_13);
   FUNC_2();
   return;
  }
  break;
 case 130:
 case 131:
  break;
 }

 if ((VAR_13->la_flags & VAR_2) == 0) {
  int VAR_18;

  if (VAR_13->la_flags & VAR_5)
   VAR_18 = VAR_0;
  else
   VAR_18 = VAR_1;
  FUNC_4(VAR_9, VAR_13, VAR_18);
 }

 FUNC_17(&VAR_13->lle_timer);


 FUNC_11(VAR_13);
 FUNC_5(VAR_14);
 FUNC_10(VAR_13);


 if (VAR_13->la_flags & VAR_3) {
  FUNC_7(VAR_13);
  FUNC_19(VAR_13->lle_tbl, VAR_13);
 }
 FUNC_6(VAR_14);

 size_t VAR_19 = FUNC_18(VAR_13);

 FUNC_0(VAR_7, VAR_19);
 FUNC_1(VAR_11);

 FUNC_2();
}
