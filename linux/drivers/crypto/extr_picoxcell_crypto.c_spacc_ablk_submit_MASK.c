
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct spacc_req {int ctx_id; int src_addr; int dst_addr; scalar_t__ is_encrypt; TYPE_3__* req; } ;
struct spacc_engine {scalar_t__ regs; int packet_timeout; } ;
struct spacc_alg {int ctrl_default; } ;
struct TYPE_5__ {struct spacc_engine* engine; } ;
struct spacc_ablk_ctx {int key_len; int key; TYPE_2__ generic; } ;
struct crypto_tfm {struct crypto_alg* __crt_alg; } ;
struct TYPE_4__ {int ivsize; } ;
struct crypto_alg {TYPE_1__ cra_ablkcipher; } ;
struct ablkcipher_request {int nbytes; int info; } ;
struct TYPE_6__ {struct crypto_tfm* tfm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct ablkcipher_request* FUNC_0 (TYPE_3__*) ;
 struct spacc_ablk_ctx* FUNC_1 (struct crypto_tfm*) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,int ,int *,int ) ;
 struct spacc_alg* FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct spacc_req *VAR_14)
{
 struct crypto_tfm *VAR_15 = VAR_14->req->tfm;
 struct spacc_ablk_ctx *VAR_16 = FUNC_1(VAR_15);
 struct ablkcipher_request *VAR_17 = FUNC_0(VAR_14->req);
 struct crypto_alg *VAR_18 = VAR_14->req->tfm->__crt_alg;
 struct spacc_alg *VAR_19 = FUNC_4(VAR_18);
 struct spacc_engine *VAR_20 = VAR_16->generic.engine;
 u32 VAR_21;

 VAR_14->ctx_id = FUNC_3(&VAR_16->generic, VAR_16->key,
  VAR_16->key_len, VAR_17->info, VAR_18->cra_ablkcipher.ivsize,
  ((void*)0), 0);

 FUNC_5(VAR_14->src_addr, VAR_20->regs + VAR_12);
 FUNC_5(VAR_14->dst_addr, VAR_20->regs + VAR_8);
 FUNC_5(0, VAR_20->regs + VAR_10);

 FUNC_5(VAR_17->nbytes, VAR_20->regs + VAR_11);
 FUNC_5(0, VAR_20->regs + VAR_9);
 FUNC_5(0, VAR_20->regs + VAR_3);
 FUNC_5(0, VAR_20->regs + VAR_2);

 VAR_21 = VAR_19->ctrl_default | (VAR_14->ctx_id << VAR_4) |
  (VAR_14->is_encrypt ? (1 << VAR_5) :
   (1 << VAR_6));

 FUNC_2(&VAR_20->packet_timeout, VAR_13 + VAR_1);

 FUNC_5(VAR_21, VAR_20->regs + VAR_7);

 return -VAR_0;
}
