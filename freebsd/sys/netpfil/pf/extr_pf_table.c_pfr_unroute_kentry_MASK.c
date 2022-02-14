
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sockaddr_union {int dummy; } sockaddr_union ;
struct radix_node {int dummy; } ;
struct radix_head {int dummy; } ;
struct pfr_ktable {TYPE_2__* pfrkt_ip6; TYPE_1__* pfrkt_ip4; } ;
struct pfr_kentry {int pfrke_sa; int pfrke_net; int pfrke_af; } ;
struct TYPE_4__ {struct radix_head rh; } ;
struct TYPE_3__ {struct radix_head rh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pfr_kentry*) ;
 int FUNC_1 (union sockaddr_union*,int ,int ) ;
 int FUNC_2 (char*) ;
 struct radix_node* FUNC_3 (int *,union sockaddr_union*,struct radix_head*) ;

__attribute__((used)) static int
FUNC_4(struct pfr_ktable *VAR_2, struct pfr_kentry *VAR_3)
{
 union sockaddr_union VAR_4;
 struct radix_node *VAR_5;
 struct radix_head *VAR_6 = ((void*)0);

 if (VAR_3->pfrke_af == VAR_0)
  VAR_6 = &VAR_2->pfrkt_ip4->rh;
 else if (VAR_3->pfrke_af == VAR_1)
  VAR_6 = &VAR_2->pfrkt_ip6->rh;

 if (FUNC_0(VAR_3)) {
  FUNC_1(&VAR_4, VAR_3->pfrke_af, VAR_3->pfrke_net);
  VAR_5 = FUNC_3(&VAR_3->pfrke_sa, &VAR_4, VAR_6);
 } else
  VAR_5 = FUNC_3(&VAR_3->pfrke_sa, ((void*)0), VAR_6);

 if (VAR_5 == ((void*)0)) {
  FUNC_2("pfr_unroute_kentry: delete failed.\n");
  return (-1);
 }
 return (0);
}
