
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sockaddr_union {int dummy; } sockaddr_union ;
struct radix_node {int dummy; } ;
struct pfr_walktree {int pfrw_op; TYPE_1__* pfrw_dyn; struct pfr_kentry* pfrw_kentry; int pfrw_cnt; int pfrw_astats; int pfrw_free; int pfrw_addr; int pfrw_workq; } ;
struct pfr_kentry {union sockaddr_union pfrke_sa; int pfrke_net; int pfrke_af; int pfrke_not; int pfrke_mark; } ;
struct pfr_astats {int dummy; } ;
typedef int as ;
struct TYPE_2__ {void* pfid_mask6; void* pfid_addr6; int pfid_acnt6; void* pfid_mask4; void* pfid_addr4; int pfid_acnt4; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,struct pfr_kentry*,int ) ;
 void** FUNC_1 (union sockaddr_union*,int ) ;
 int FUNC_2 (struct pfr_astats*,int ,int) ;
 int FUNC_3 (int ,struct pfr_kentry*) ;
 int FUNC_4 (struct pfr_astats*,struct pfr_kentry*,struct pfr_walktree*) ;
 int FUNC_5 (union sockaddr_union*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct radix_node *VAR_3, void *VAR_4)
{
 struct pfr_kentry *VAR_5 = (struct pfr_kentry *)VAR_3;
 struct pfr_walktree *VAR_6 = VAR_4;

 switch (VAR_6->pfrw_op) {
 case 130:
  VAR_5->pfrke_mark = 0;
  break;
 case 128:
  if (VAR_5->pfrke_mark)
   break;

 case 133:
  FUNC_0(VAR_6->pfrw_workq, VAR_5, VAR_2);
  VAR_6->pfrw_cnt++;
  break;
 case 132:
  if (VAR_6->pfrw_free-- > 0) {
   FUNC_3(VAR_6->pfrw_addr, VAR_5);
   VAR_6->pfrw_addr++;
  }
  break;
 case 131:
  if (VAR_6->pfrw_free-- > 0) {
   struct pfr_astats VAR_7;

   FUNC_4(&VAR_7, VAR_5, VAR_6);

   FUNC_2(&VAR_7, VAR_6->pfrw_astats, sizeof(VAR_7));
   VAR_6->pfrw_astats++;
  }
  break;
 case 129:
  if (VAR_5->pfrke_not)
   break;
  if (!VAR_6->pfrw_cnt--) {
   VAR_6->pfrw_kentry = VAR_5;
   return (1);
  }
  break;
 case 134:
     {
  union sockaddr_union VAR_8;

  if (VAR_5->pfrke_af == VAR_0) {
   if (VAR_6->pfrw_dyn->pfid_acnt4++ > 0)
    break;
   FUNC_5(&VAR_8, VAR_0, VAR_5->pfrke_net);
   VAR_6->pfrw_dyn->pfid_addr4 = *FUNC_1(&VAR_5->pfrke_sa,
       VAR_0);
   VAR_6->pfrw_dyn->pfid_mask4 = *FUNC_1(&VAR_8,
       VAR_0);
  } else if (VAR_5->pfrke_af == VAR_1){
   if (VAR_6->pfrw_dyn->pfid_acnt6++ > 0)
    break;
   FUNC_5(&VAR_8, VAR_1, VAR_5->pfrke_net);
   VAR_6->pfrw_dyn->pfid_addr6 = *FUNC_1(&VAR_5->pfrke_sa,
       VAR_1);
   VAR_6->pfrw_dyn->pfid_mask6 = *FUNC_1(&VAR_8,
       VAR_1);
  }
  break;
     }
 }
 return (0);
}
