
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dst; int src; } ;
struct skcipher_edesc {int sec4_sg_bytes; int sec4_sg_dma; int iv_dma; int dst_nents; int src_nents; } ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct skcipher_edesc *VAR_1,
      struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_0, VAR_2->src, VAR_2->dst,
     VAR_1->src_nents, VAR_1->dst_nents,
     VAR_1->iv_dma, VAR_4,
     VAR_1->sec4_sg_dma, VAR_1->sec4_sg_bytes);
}
