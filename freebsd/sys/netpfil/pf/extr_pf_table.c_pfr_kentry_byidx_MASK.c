
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int w ;
struct pfr_walktree {int pfrw_cnt; struct pfr_kentry* pfrw_kentry; int pfrw_op; } ;
struct pfr_ktable {TYPE_1__* pfrkt_ip6; TYPE_2__* pfrkt_ip4; } ;
struct pfr_kentry {int dummy; } ;
struct TYPE_4__ {int rh; int (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;} ;
struct TYPE_3__ {int rh; int (* rnh_walktree ) (int *,int ,struct pfr_walktree*) ;} ;




 int VAR_0 ;
 int FUNC_0 (struct pfr_walktree*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,struct pfr_walktree*) ;
 int FUNC_2 (int *,int ,struct pfr_walktree*) ;

__attribute__((used)) static struct pfr_kentry *
FUNC_3(struct pfr_ktable *VAR_2, int VAR_3, int VAR_4)
{
 struct pfr_walktree VAR_5;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.pfrw_op = VAR_0;
 VAR_5.pfrw_cnt = VAR_3;

 switch (VAR_4) {
 default:
  return (((void*)0));
 }
}
