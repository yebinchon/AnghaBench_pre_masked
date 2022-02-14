
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dst; int src; } ;
struct aead_edesc {int assoclen_dma; int qm_sg_bytes; int qm_sg_dma; int iv_dma; int dst_nents; int src_nents; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct device*,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, struct aead_edesc *VAR_2,
         struct aead_request *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_1, VAR_3->src, VAR_3->dst, VAR_2->src_nents, VAR_2->dst_nents,
     VAR_2->iv_dma, VAR_5, VAR_0, VAR_2->qm_sg_dma,
     VAR_2->qm_sg_bytes);
 FUNC_3(VAR_1, VAR_2->assoclen_dma, 4, VAR_0);
}
