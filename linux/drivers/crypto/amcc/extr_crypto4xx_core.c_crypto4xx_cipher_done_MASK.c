
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct skcipher_request {scalar_t__ iv; int dst; int cryptlen; } ;
struct scatterlist {int length; int offset; } ;
struct pd_uinfo {int state; TYPE_5__* sr_va; TYPE_4__* sa_va; struct scatterlist* dest_va; int async_req; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto4xx_device {TYPE_1__* core_dev; } ;
struct ce_pd {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int save_iv; } ;
struct TYPE_7__ {scalar_t__ save_iv; scalar_t__ scatter; } ;
struct TYPE_8__ {TYPE_2__ bf; } ;
struct TYPE_9__ {TYPE_3__ sa_command_0; } ;
struct TYPE_6__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct crypto4xx_device*,struct ce_pd*,struct pd_uinfo*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct crypto4xx_device*,struct pd_uinfo*) ;
 int FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct scatterlist*) ;
 struct skcipher_request* FUNC_7 (int ) ;
 int FUNC_8 (struct skcipher_request*,int ) ;

__attribute__((used)) static void FUNC_9(struct crypto4xx_device *VAR_4,
         struct pd_uinfo *VAR_5,
         struct ce_pd *VAR_6)
{
 struct skcipher_request *VAR_7;
 struct scatterlist *VAR_8;
 dma_addr_t VAR_9;

 VAR_7 = FUNC_7(VAR_5->async_req);

 if (VAR_5->sa_va->sa_command_0.bf.scatter) {
  FUNC_0(VAR_4, VAR_6, VAR_5,
       VAR_7->cryptlen, VAR_7->dst);
 } else {
  VAR_8 = VAR_5->dest_va;
  VAR_9 = FUNC_5(VAR_4->core_dev->device, FUNC_6(VAR_8),
        VAR_8->offset, VAR_8->length, VAR_0);
 }

 if (VAR_5->sa_va->sa_command_0.bf.save_iv == VAR_3) {
  struct crypto_skcipher *VAR_10 = FUNC_4(VAR_7);

  FUNC_1((u32 *)VAR_7->iv,
   VAR_5->sr_va->save_iv,
   FUNC_3(VAR_10));
 }

 FUNC_2(VAR_4, VAR_5);

 if (VAR_5->state & VAR_2)
  FUNC_8(VAR_7, -VAR_1);
 FUNC_8(VAR_7, 0);
}
