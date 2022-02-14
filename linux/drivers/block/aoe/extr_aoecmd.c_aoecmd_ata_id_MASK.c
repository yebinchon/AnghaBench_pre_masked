
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; int len; } ;
struct frame {int sent; scalar_t__ waited_total; scalar_t__ waited; int tag; struct sk_buff* skb; } ;
struct aoetgt {TYPE_1__* ifp; int nout; } ;
struct TYPE_4__ {int function; } ;
struct aoedev {TYPE_2__ timer; int rttdev; int rttavg; struct aoetgt** tgt; } ;
struct aoe_hdr {int dummy; } ;
struct aoe_atahdr {int scnt; int lba3; int cmdstat; } ;
struct TYPE_3__ {int nd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aoedev*,struct aoetgt*,struct aoe_hdr*) ;
 int FUNC_1 (struct frame*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct aoe_hdr*,int ,int ) ;
 struct frame* FUNC_4 (struct aoedev*) ;
 int VAR_4 ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

struct sk_buff *
FUNC_8(struct aoedev *VAR_5)
{
 struct aoe_hdr *VAR_6;
 struct aoe_atahdr *VAR_7;
 struct frame *VAR_8;
 struct sk_buff *VAR_9;
 struct aoetgt *VAR_10;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_10 = *VAR_5->tgt;


 VAR_9 = VAR_8->skb;
 VAR_6 = (struct aoe_hdr *) FUNC_6(VAR_9);
 VAR_7 = (struct aoe_atahdr *) (VAR_6+1);
 FUNC_7(VAR_9, sizeof *VAR_6 + sizeof *VAR_7);
 FUNC_3(VAR_6, 0, VAR_9->len);
 VAR_8->tag = FUNC_0(VAR_5, VAR_10, VAR_6);
 FUNC_1(VAR_8);
 VAR_10->nout++;
 VAR_8->waited = 0;
 VAR_8->waited_total = 0;


 VAR_7->scnt = 1;
 VAR_7->cmdstat = VAR_0;
 VAR_7->lba3 = 0xa0;

 VAR_9->dev = VAR_10->ifp->nd;

 VAR_5->rttavg = VAR_2;
 VAR_5->rttdev = VAR_3;
 VAR_5->timer.function = VAR_4;

 VAR_9 = FUNC_5(VAR_9, VAR_1);
 if (VAR_9)
  VAR_8->sent = FUNC_2();

 return VAR_9;
}
