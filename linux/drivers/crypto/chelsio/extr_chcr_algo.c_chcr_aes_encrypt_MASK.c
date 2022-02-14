
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
 int FUNC_3 (struct chcr_dev*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ablkcipher_request*,int ,struct sk_buff**,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct ablkcipher_request *VAR_7)
{
 struct crypto_ablkcipher *VAR_8 = FUNC_5(VAR_7);
 struct chcr_dev *VAR_9 = FUNC_1(VAR_8)->dev;
 struct sk_buff *VAR_10 = ((void*)0);
 int VAR_11, VAR_12 = 0;
 struct uld_ctx *VAR_13 = FUNC_0(FUNC_1(VAR_8));

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11)
  return -VAR_6;
 if (FUNC_9(FUNC_6(VAR_13->lldi.ports[0],
         FUNC_1(VAR_8)->tx_qidx))) {
  VAR_12 = 1;
  if (!(VAR_7->base.flags & VAR_2)) {
   VAR_11 = -VAR_5;
   goto error;
  }
 }

 VAR_11 = FUNC_7(VAR_7, VAR_13->lldi.rxq_ids[FUNC_1(VAR_8)->rx_qidx],
        &VAR_10, VAR_0);
 if (VAR_11 || !VAR_10)
  return VAR_11;
 VAR_10->dev = VAR_13->lldi.ports[0];
 FUNC_8(VAR_10, VAR_1, FUNC_1(VAR_8)->tx_qidx);
 FUNC_4(VAR_10);
 return VAR_12 ? -VAR_3 : -VAR_4;
error:
 FUNC_2(VAR_9);
 return VAR_11;
}
