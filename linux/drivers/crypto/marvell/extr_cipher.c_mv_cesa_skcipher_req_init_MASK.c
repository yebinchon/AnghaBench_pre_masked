
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_request {int cryptlen; int dst; int src; } ;
struct mv_cesa_skcipher_req {scalar_t__ src_nents; scalar_t__ dst_nents; } ;
struct mv_cesa_op_ctx {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_4__ {TYPE_1__* caps; int dev; } ;
struct TYPE_3__ {scalar_t__ has_tdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 TYPE_2__* VAR_3 ;
 unsigned int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct skcipher_request*,struct mv_cesa_op_ctx*) ;
 int FUNC_5 (struct skcipher_request*,struct mv_cesa_op_ctx*) ;
 int FUNC_6 (struct mv_cesa_op_ctx*,int ,int ) ;
 void* FUNC_7 (int ,int ) ;
 struct mv_cesa_skcipher_req* FUNC_8 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_9(struct skcipher_request *VAR_4,
         struct mv_cesa_op_ctx *VAR_5)
{
 struct mv_cesa_skcipher_req *VAR_6 = FUNC_8(VAR_4);
 struct crypto_skcipher *VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 if (!FUNC_0(VAR_4->cryptlen, VAR_8))
  return -VAR_2;

 VAR_6->src_nents = FUNC_7(VAR_4->src, VAR_4->cryptlen);
 if (VAR_6->src_nents < 0) {
  FUNC_3(VAR_3->dev, "Invalid number of src SG");
  return VAR_6->src_nents;
 }
 VAR_6->dst_nents = FUNC_7(VAR_4->dst, VAR_4->cryptlen);
 if (VAR_6->dst_nents < 0) {
  FUNC_3(VAR_3->dev, "Invalid number of dst SG");
  return VAR_6->dst_nents;
 }

 FUNC_6(VAR_5, VAR_0,
         VAR_1);

 if (VAR_3->caps->has_tdma)
  VAR_9 = FUNC_4(VAR_4, VAR_5);
 else
  VAR_9 = FUNC_5(VAR_4, VAR_5);

 return VAR_9;
}
