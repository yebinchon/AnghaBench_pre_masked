
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
struct pfr_walktree {int pfrw_cnt; struct pfr_kentryworkq* pfrw_workq; int pfrw_op; } ;
struct pfr_ktable {TYPE_2__* pfrkt_ip6; TYPE_1__* pfrkt_ip4; } ;
struct pfr_kentryworkq {int dummy; } ;
struct TYPE_4__ {int rh; scalar_t__ (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;} ;
struct TYPE_3__ {int rh; scalar_t__ (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfr_kentryworkq*) ;
 int FUNC_1 (struct pfr_walktree*,int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,struct pfr_walktree*) ;
 scalar_t__ FUNC_4 (int *,int ,struct pfr_walktree*) ;

__attribute__((used)) static void
FUNC_5(struct pfr_ktable *VAR_3, struct pfr_kentryworkq *VAR_4,
 int *VAR_5, int VAR_6)
{
 struct pfr_walktree VAR_7;

 FUNC_0(VAR_4);
 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_7.pfrw_op = VAR_6 ? VAR_1 : VAR_0;
 VAR_7.pfrw_workq = VAR_4;
 if (VAR_3->pfrkt_ip4 != ((void*)0))
  if (VAR_3->pfrkt_ip4->rnh_walktree(&VAR_3->pfrkt_ip4->rh,
      VAR_2, &VAR_7))
   FUNC_2("pfr_enqueue_addrs: IPv4 walktree failed.\n");
 if (VAR_3->pfrkt_ip6 != ((void*)0))
  if (VAR_3->pfrkt_ip6->rnh_walktree(&VAR_3->pfrkt_ip6->rh,
      VAR_2, &VAR_7))
   FUNC_2("pfr_enqueue_addrs: IPv6 walktree failed.\n");
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7.pfrw_cnt;
}
