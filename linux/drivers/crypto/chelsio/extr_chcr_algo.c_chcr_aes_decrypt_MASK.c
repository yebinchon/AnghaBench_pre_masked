
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ports; int * rxq_ids; } ;
struct uld_ctx {TYPE_2__ lldi; } ;
struct sk_buff {int dev; } ;
struct crypto_ablkcipher {int dummy; } ;
struct chcr_dev {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct ablkcipher_request {TYPE_1__ base; } ;
struct TYPE_7__ {size_t rx_qidx; int tx_qidx; struct chcr_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct uld_ctx* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct chcr_dev*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct crypto_ablkcipher* FUNC_4 (struct ablkcipher_request*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ablkcipher_request*,int ,struct sk_buff**,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ablkcipher_request *VAR_7)
{
 struct crypto_ablkcipher *VAR_8 = FUNC_4(VAR_7);
 struct uld_ctx *VAR_9 = FUNC_0(FUNC_1(VAR_8));
 struct chcr_dev *VAR_10 = FUNC_1(VAR_8)->dev;
 struct sk_buff *VAR_11 = ((void*)0);
 int VAR_12, VAR_13 = 0;

 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12)
  return -VAR_6;

 if (FUNC_8(FUNC_5(VAR_9->lldi.ports[0],
         FUNC_1(VAR_8)->tx_qidx))) {
  VAR_13 = 1;
  if (!(VAR_7->base.flags & VAR_2))
   return -VAR_5;
 }

 VAR_12 = FUNC_6(VAR_7, VAR_9->lldi.rxq_ids[FUNC_1(VAR_8)->rx_qidx],
        &VAR_11, VAR_0);
 if (VAR_12 || !VAR_11)
  return VAR_12;
 VAR_11->dev = VAR_9->lldi.ports[0];
 FUNC_7(VAR_11, VAR_1, FUNC_1(VAR_8)->tx_qidx);
 FUNC_3(VAR_11);
 return VAR_13 ? -VAR_3 : -VAR_4;
}
