
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct ahash_request {int dummy; } ;
struct crypto_ccm_req_priv_ctx {int * odata; int flags; int * idata; struct ahash_request ahreq; } ;
struct crypto_ccm_ctx {int mac; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int assoclen; struct scatterlist* src; } ;


 int FUNC_0 (struct ahash_request*,int ,int *,int *) ;
 int FUNC_1 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_2 (struct ahash_request*,int ) ;
 struct crypto_ccm_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct ahash_request*) ;
 int FUNC_7 (struct ahash_request*) ;
 struct crypto_ccm_req_priv_ctx* FUNC_8 (struct aead_request*) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int *,struct aead_request*,unsigned int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_13 (struct scatterlist*,int) ;
 int FUNC_14 (struct scatterlist*,int *,int) ;

__attribute__((used)) static int FUNC_15(struct aead_request *VAR_0, struct scatterlist *VAR_1,
      unsigned int VAR_2)
{
 struct crypto_ccm_req_priv_ctx *VAR_3 = FUNC_8(VAR_0);
 struct crypto_aead *VAR_4 = FUNC_4(VAR_0);
 struct crypto_ccm_ctx *VAR_5 = FUNC_3(VAR_4);
 struct ahash_request *VAR_6 = &VAR_3->ahreq;
 unsigned int VAR_7 = VAR_0->assoclen;
 struct scatterlist VAR_8[3];
 u8 *VAR_9 = VAR_3->odata;
 u8 *VAR_10 = VAR_3->idata;
 int VAR_11, VAR_12;


 VAR_12 = FUNC_10(VAR_9, VAR_0, VAR_2);
 if (VAR_12)
  goto out;

 FUNC_13(VAR_8, 3);
 FUNC_14(&VAR_8[0], VAR_9, 16);


 if (VAR_7) {
  VAR_11 = FUNC_9(VAR_10, VAR_7);
  FUNC_14(&VAR_8[1], VAR_10, VAR_11);
  FUNC_12(VAR_8, 3, VAR_0->src);
 } else {
  VAR_11 = 0;
  FUNC_12(VAR_8, 2, VAR_0->src);
 }

 FUNC_2(VAR_6, VAR_5->mac);
 FUNC_0(VAR_6, VAR_3->flags, ((void*)0), ((void*)0));
 FUNC_1(VAR_6, VAR_8, ((void*)0), VAR_7 + VAR_11 + 16);
 VAR_12 = FUNC_6(VAR_6);
 if (VAR_12)
  goto out;
 VAR_12 = FUNC_7(VAR_6);
 if (VAR_12)
  goto out;


 VAR_11 = 16 - (VAR_7 + VAR_11) % 16;
 if (VAR_11 < 16) {
  FUNC_11(VAR_10, 0, VAR_11);
  FUNC_13(VAR_8, 2);
  FUNC_14(&VAR_8[0], VAR_10, VAR_11);
  if (VAR_1)
   FUNC_12(VAR_8, 2, VAR_1);
  VAR_1 = VAR_8;
  VAR_2 += VAR_11;
 }

 FUNC_1(VAR_6, VAR_1, VAR_3->odata, VAR_2);
 VAR_12 = FUNC_5(VAR_6);
out:
 return VAR_12;
}
