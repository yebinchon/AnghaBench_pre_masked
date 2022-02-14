
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct crypto_ccm_req_priv_ctx {struct scatterlist* dst; struct scatterlist* src; int flags; } ;
struct aead_request {int* iv; int assoclen; int dst; int src; } ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int*) ;
 struct crypto_ccm_req_priv_ctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int*,int ,int) ;
 struct scatterlist* FUNC_4 (struct scatterlist*,int ,int ) ;
 int FUNC_5 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*,int) ;
 int FUNC_7 (struct scatterlist*,int*,int) ;

__attribute__((used)) static int FUNC_8(struct aead_request *VAR_0, u8 *VAR_1)
{
 struct crypto_ccm_req_priv_ctx *VAR_2 = FUNC_2(VAR_0);
 struct scatterlist *VAR_3;
 u8 *VAR_4 = VAR_0->iv;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_2->flags = FUNC_0(VAR_0);




 FUNC_3(VAR_4 + 15 - VAR_4[0], 0, VAR_4[0] + 1);

 FUNC_6(VAR_2->src, 3);
 FUNC_7(VAR_2->src, VAR_1, 16);
 VAR_3 = FUNC_4(VAR_2->src + 1, VAR_0->src, VAR_0->assoclen);
 if (VAR_3 != VAR_2->src + 1)
  FUNC_5(VAR_2->src, 2, VAR_3);

 if (VAR_0->src != VAR_0->dst) {
  FUNC_6(VAR_2->dst, 3);
  FUNC_7(VAR_2->dst, VAR_1, 16);
  VAR_3 = FUNC_4(VAR_2->dst + 1, VAR_0->dst, VAR_0->assoclen);
  if (VAR_3 != VAR_2->dst + 1)
   FUNC_5(VAR_2->dst, 2, VAR_3);
 }

 return 0;
}
