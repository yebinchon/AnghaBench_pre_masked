
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ family; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int ihl; } ;
struct TYPE_7__ {int nexthdr; } ;
struct TYPE_6__ {scalar_t__ gso_size; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_4(struct sk_buff *VAR_1, struct xfrm_state *VAR_2)
{
 if (VAR_2->props.family == VAR_0) {

  if (FUNC_0(VAR_1)->ihl > 5)
   return 0;
 } else {

  if (FUNC_1(FUNC_2(VAR_1)->nexthdr))
   return 0;
 }

 if (FUNC_3(VAR_1)->gso_size)
  return 0;
 return 1;
}
