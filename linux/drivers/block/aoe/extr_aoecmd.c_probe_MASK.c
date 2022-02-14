
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {size_t len; size_t data_len; size_t truesize; } ;
struct TYPE_2__ {size_t bi_size; } ;
struct frame {int sent; struct sk_buff* skb; TYPE_1__ iter; int flags; } ;
struct aoetgt {struct aoedev* d; int addr; } ;
struct aoedev {size_t maxbcnt; int aoeminor; scalar_t__ aoemajor; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct frame*) ;
 int VAR_4 ;
 int FUNC_4 (struct aoetgt*) ;
 int FUNC_5 () ;
 struct frame* FUNC_6 (struct aoedev*,struct aoetgt*) ;
 int FUNC_7 (char*,char*,int ,long,int ,char*) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,int,int ,int ,size_t) ;

__attribute__((used)) static void
FUNC_10(struct aoetgt *VAR_5)
{
 struct aoedev *VAR_6;
 struct frame *VAR_7;
 struct sk_buff *VAR_8;
 struct sk_buff_head VAR_9;
 size_t VAR_10, VAR_11;
 int VAR_12;

 VAR_6 = VAR_5->d;
 VAR_7 = FUNC_6(VAR_6, VAR_5);
 if (!VAR_7) {
  FUNC_7("%s %pm for e%ld.%d: %s\n",
   "aoe: cannot probe remote address",
   VAR_5->addr,
   (long) VAR_6->aoemajor, VAR_6->aoeminor,
   "no frame available");
  return;
 }
 VAR_7->flags |= VAR_1;
 FUNC_4(VAR_5);
 VAR_7->iter.bi_size = VAR_5->d->maxbcnt ? VAR_5->d->maxbcnt : VAR_0;
 FUNC_3(VAR_7);
 VAR_8 = VAR_7->skb;
 for (VAR_12 = 0, VAR_10 = VAR_7->iter.bi_size; VAR_10 > 0; ++VAR_12, VAR_10 -= VAR_11) {
  if (VAR_10 < VAR_3)
   VAR_11 = VAR_10;
  else
   VAR_11 = VAR_3;
  FUNC_9(VAR_8, VAR_12, VAR_4, 0, VAR_11);
 }
 VAR_8->len += VAR_7->iter.bi_size;
 VAR_8->data_len = VAR_7->iter.bi_size;
 VAR_8->truesize += VAR_7->iter.bi_size;

 VAR_8 = FUNC_8(VAR_7->skb, VAR_2);
 if (VAR_8) {
  VAR_7->sent = FUNC_5();
  FUNC_0(&VAR_9);
  FUNC_1(&VAR_9, VAR_8);
  FUNC_2(&VAR_9);
 }
}
