
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
struct pfr_walktree {struct pfi_dynaddr* pfrw_dyn; int pfrw_op; } ;
struct pfr_ktable {TYPE_2__* pfrkt_ip6; TYPE_1__* pfrkt_ip4; } ;
struct pfi_dynaddr {scalar_t__ pfid_af; scalar_t__ pfid_acnt6; scalar_t__ pfid_acnt4; } ;
struct TYPE_4__ {int rh; int (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;} ;
struct TYPE_3__ {int rh; int (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pfr_walktree*,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,struct pfr_walktree*) ;
 int FUNC_2 (int *,int ,struct pfr_walktree*) ;

void
FUNC_3(struct pfr_ktable *VAR_4, struct pfi_dynaddr *VAR_5)
{
 struct pfr_walktree VAR_6;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.pfrw_op = VAR_2;
 VAR_6.pfrw_dyn = VAR_5;

 VAR_5->pfid_acnt4 = 0;
 VAR_5->pfid_acnt6 = 0;
 if (!VAR_5->pfid_af || VAR_5->pfid_af == VAR_0)
  VAR_4->pfrkt_ip4->rnh_walktree(&VAR_4->pfrkt_ip4->rh, VAR_3, &VAR_6);
 if (!VAR_5->pfid_af || VAR_5->pfid_af == VAR_1)
  VAR_4->pfrkt_ip6->rnh_walktree(&VAR_4->pfrkt_ip6->rh, VAR_3, &VAR_6);
}
