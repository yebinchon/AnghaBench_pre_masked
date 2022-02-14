
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypto_gcm_req_priv_ctx {int iv; struct scatterlist* dst; int auth_tag; struct scatterlist* src; } ;
struct aead_request {int assoclen; int dst; int src; int * iv; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct crypto_gcm_req_priv_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (int,int *,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct scatterlist* FUNC_4 (struct scatterlist*,int ,int ) ;
 int FUNC_5 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*,int) ;
 int FUNC_7 (struct scatterlist*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct aead_request *VAR_1)
{
 struct crypto_gcm_req_priv_ctx *VAR_2 = FUNC_1(VAR_1);
 __be32 VAR_3 = FUNC_0(1);
 struct scatterlist *VAR_4;

 FUNC_3(VAR_2->auth_tag, 0, sizeof(VAR_2->auth_tag));
 FUNC_2(VAR_2->iv, VAR_1->iv, VAR_0);
 FUNC_2(VAR_2->iv + VAR_0, &VAR_3, 4);

 FUNC_6(VAR_2->src, 3);
 FUNC_7(VAR_2->src, VAR_2->auth_tag, sizeof(VAR_2->auth_tag));
 VAR_4 = FUNC_4(VAR_2->src + 1, VAR_1->src, VAR_1->assoclen);
 if (VAR_4 != VAR_2->src + 1)
  FUNC_5(VAR_2->src, 2, VAR_4);

 if (VAR_1->src != VAR_1->dst) {
  FUNC_6(VAR_2->dst, 3);
  FUNC_7(VAR_2->dst, VAR_2->auth_tag, sizeof(VAR_2->auth_tag));
  VAR_4 = FUNC_4(VAR_2->dst + 1, VAR_1->dst, VAR_1->assoclen);
  if (VAR_4 != VAR_2->dst + 1)
   FUNC_5(VAR_2->dst, 2, VAR_4);
 }
}
