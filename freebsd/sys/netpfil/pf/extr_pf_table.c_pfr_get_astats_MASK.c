
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
struct pfr_walktree {int pfrw_free; int pfrw_flags; struct pfr_astats* pfrw_astats; int pfrw_op; } ;
struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_cnt; TYPE_2__* pfrkt_ip6; TYPE_1__* pfrkt_ip4; } ;
struct pfr_kentryworkq {int dummy; } ;
struct pfr_astats {int dummy; } ;
struct TYPE_4__ {int (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;int rh; } ;
struct TYPE_3__ {int (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;int rh; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pfr_walktree*,int) ;
 int FUNC_3 (struct pfr_kentryworkq*,long,int ) ;
 int FUNC_4 (struct pfr_ktable*,struct pfr_kentryworkq*,int *,int ) ;
 struct pfr_ktable* FUNC_5 (struct pfr_table*) ;
 scalar_t__ FUNC_6 (struct pfr_table*,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,int ,struct pfr_walktree*) ;
 int FUNC_9 (int *,int ,struct pfr_walktree*) ;
 long VAR_7 ;

int
FUNC_10(struct pfr_table *VAR_8, struct pfr_astats *VAR_9, int *VAR_10,
 int VAR_11)
{
 struct pfr_ktable *VAR_12;
 struct pfr_walktree VAR_13;
 struct pfr_kentryworkq VAR_14;
 int VAR_15;
 long VAR_16 = VAR_7;

 FUNC_1();


 FUNC_0(VAR_11, 0);
 if (FUNC_6(VAR_8, 0, 0))
  return (VAR_0);
 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12 == ((void*)0) || !(VAR_12->pfrkt_flags & VAR_5))
  return (VAR_2);
 if (VAR_12->pfrkt_cnt > *VAR_10) {
  *VAR_10 = VAR_12->pfrkt_cnt;
  return (0);
 }

 FUNC_2(&VAR_13, sizeof(VAR_13));
 VAR_13.pfrw_op = VAR_3;
 VAR_13.pfrw_astats = VAR_9;
 VAR_13.pfrw_free = VAR_12->pfrkt_cnt;






 VAR_13.pfrw_flags = VAR_12->pfrkt_flags;
 VAR_15 = VAR_12->pfrkt_ip4->rnh_walktree(&VAR_12->pfrkt_ip4->rh, VAR_6, &VAR_13);
 if (!VAR_15)
  VAR_15 = VAR_12->pfrkt_ip6->rnh_walktree(&VAR_12->pfrkt_ip6->rh,
      VAR_6, &VAR_13);
 if (!VAR_15 && (VAR_11 & VAR_4)) {
  FUNC_4(VAR_12, &VAR_14, ((void*)0), 0);
  FUNC_3(&VAR_14, VAR_16, 0);
 }
 if (VAR_15)
  return (VAR_15);

 if (VAR_13.pfrw_free) {
  FUNC_7("pfr_get_astats: corruption detected (%d).\n",
      VAR_13.pfrw_free);
  return (VAR_1);
 }
 *VAR_10 = VAR_12->pfrkt_cnt;
 return (0);
}
