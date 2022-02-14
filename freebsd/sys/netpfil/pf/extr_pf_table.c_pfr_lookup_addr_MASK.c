
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union sockaddr_union {int sin6; int sin; } ;
struct radix_head {int dummy; } ;
struct pfr_ktable {TYPE_2__* pfrkt_ip6; TYPE_1__* pfrkt_ip4; } ;
struct pfr_kentry {int dummy; } ;
struct pfr_addr {int pfra_net; int pfra_af; int pfra_ip6addr; int pfra_ip4addr; } ;
typedef int sa ;
struct TYPE_4__ {struct radix_head rh; } ;
struct TYPE_3__ {struct radix_head rh; } ;


 scalar_t__ FUNC_0 (struct pfr_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct pfr_kentry*) ;
 scalar_t__ FUNC_4 (struct pfr_kentry*) ;
 int FUNC_5 () ;
 int FUNC_6 (union sockaddr_union*,int) ;
 int FUNC_7 (union sockaddr_union*,int ,int ) ;
 scalar_t__ FUNC_8 (union sockaddr_union*,union sockaddr_union*,struct radix_head*) ;
 scalar_t__ FUNC_9 (union sockaddr_union*,struct radix_head*) ;

__attribute__((used)) static struct pfr_kentry *
FUNC_10(struct pfr_ktable *VAR_2, struct pfr_addr *VAR_3, int VAR_4)
{
 union sockaddr_union VAR_5, VAR_6;
 struct radix_head *VAR_7 = ((void*)0);
 struct pfr_kentry *VAR_8;

 FUNC_5();

 FUNC_6(&VAR_5, sizeof(VAR_5));
 if (VAR_3->pfra_af == VAR_0) {
  FUNC_1(VAR_5.sin, VAR_3->pfra_ip4addr);
  VAR_7 = &VAR_2->pfrkt_ip4->rh;
 } else if ( VAR_3->pfra_af == VAR_1 ) {
  FUNC_2(VAR_5.sin6, VAR_3->pfra_ip6addr);
  VAR_7 = &VAR_2->pfrkt_ip6->rh;
 }
 if (FUNC_0(VAR_3)) {
  FUNC_7(&VAR_6, VAR_3->pfra_af, VAR_3->pfra_net);
  VAR_8 = (struct pfr_kentry *)FUNC_8(&VAR_5, &VAR_6, VAR_7);
  if (VAR_8 && FUNC_4(VAR_8))
   VAR_8 = ((void*)0);
 } else {
  VAR_8 = (struct pfr_kentry *)FUNC_9(&VAR_5, VAR_7);
  if (VAR_8 && FUNC_4(VAR_8))
   VAR_8 = ((void*)0);
  if (VAR_4 && VAR_8 && FUNC_3(VAR_8))
   VAR_8 = ((void*)0);
 }
 return (VAR_8);
}
