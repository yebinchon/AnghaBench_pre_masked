
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dst; int src; } ;
struct skcipher_edesc {int qm_sg_bytes; int qm_sg_dma; int iv_dma; int dst_nents; int src_nents; } ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, struct skcipher_edesc *VAR_2,
      struct skcipher_request *VAR_3)
{
 struct crypto_skcipher *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_1, VAR_3->src, VAR_3->dst, VAR_2->src_nents, VAR_2->dst_nents,
     VAR_2->iv_dma, VAR_5, VAR_0, VAR_2->qm_sg_dma,
     VAR_2->qm_sg_bytes);
}
