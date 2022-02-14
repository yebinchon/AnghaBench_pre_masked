
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
struct pfr_kentry {int pfrke_node; int pfrke_sa; int pfrke_net; int pfrke_af; } ;
struct TYPE_4__ {struct radix_head rh; } ;
struct TYPE_3__ {struct radix_head rh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pfr_kentry*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (union sockaddr_union*,int ,int ) ;
 struct radix_node* FUNC_4 (int *,union sockaddr_union*,struct radix_head*,int ) ;

__attribute__((used)) static int
FUNC_5(struct pfr_ktable *VAR_2, struct pfr_kentry *VAR_3)
{
 union sockaddr_union VAR_4;
 struct radix_node *VAR_5;
 struct radix_head *VAR_6 = ((void*)0);

 FUNC_1();

 FUNC_2(VAR_3->pfrke_node, sizeof(VAR_3->pfrke_node));
 if (VAR_3->pfrke_af == VAR_0)
  VAR_6 = &VAR_2->pfrkt_ip4->rh;
 else if (VAR_3->pfrke_af == VAR_1)
  VAR_6 = &VAR_2->pfrkt_ip6->rh;

 if (FUNC_0(VAR_3)) {
  FUNC_3(&VAR_4, VAR_3->pfrke_af, VAR_3->pfrke_net);
  VAR_5 = FUNC_4(&VAR_3->pfrke_sa, &VAR_4, VAR_6, VAR_3->pfrke_node);
 } else
  VAR_5 = FUNC_4(&VAR_3->pfrke_sa, ((void*)0), VAR_6, VAR_3->pfrke_node);

 return (VAR_5 == ((void*)0) ? -1 : 0);
}
