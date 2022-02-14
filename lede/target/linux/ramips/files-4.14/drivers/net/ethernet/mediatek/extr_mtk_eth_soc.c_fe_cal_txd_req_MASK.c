
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_frag_struct {int size; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_1)
{
 struct sk_buff *VAR_2 = VAR_1;
 int VAR_3, VAR_4 = 0;
 struct skb_frag_struct *VAR_5;

next_frag:
 VAR_4++;
 if (FUNC_2(VAR_1)) {
  for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_1)->nr_frags; VAR_3++) {
   VAR_5 = &FUNC_3(VAR_1)->frags[VAR_3];
   VAR_4 += FUNC_0(VAR_5->size, VAR_0);
  }
 } else {
  VAR_4 += FUNC_3(VAR_1)->nr_frags;
 }

 VAR_1 = FUNC_1(VAR_2, VAR_1);
 if (VAR_1)
  goto next_frag;

 return FUNC_0(VAR_4, 2);
}
