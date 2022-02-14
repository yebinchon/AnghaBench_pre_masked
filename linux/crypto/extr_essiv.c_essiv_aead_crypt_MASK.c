
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int offset; } ;
struct TYPE_2__ {int aead; } ;
struct essiv_tfm_ctx {int ivoffset; TYPE_1__ u; int essiv_cipher; } ;
struct aead_request {int assoclen; int * iv; int cryptlen; struct scatterlist* dst; struct scatterlist* src; } ;
struct essiv_aead_request_ctx {int * assoc; struct scatterlist* sg; struct aead_request aead_req; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct essiv_aead_request_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int) ;
 int FUNC_3 (struct aead_request*,int ,int ,struct aead_request*) ;
 int FUNC_4 (struct aead_request*,struct scatterlist*,struct scatterlist*,int ,int *) ;
 int FUNC_5 (struct aead_request*,int ) ;
 struct essiv_tfm_ctx* FUNC_6 (struct crypto_aead*) ;
 int FUNC_7 (struct aead_request*) ;
 int FUNC_8 (struct aead_request*) ;
 int FUNC_9 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_10 (struct aead_request*) ;
 int FUNC_11 (int ,int *,int *) ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *,int) ;
 struct scatterlist* FUNC_15 (struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_16 (int *,struct scatterlist*,int ,int,int) ;
 int FUNC_17 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_18 (struct scatterlist*,int) ;
 int FUNC_19 (struct scatterlist*,int) ;
 int FUNC_20 (struct scatterlist*) ;
 int FUNC_21 (struct scatterlist*,int *,int) ;
 int FUNC_22 (struct scatterlist*,int ,int,int ) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct aead_request *VAR_5, bool VAR_6)
{
 struct crypto_aead *VAR_7 = FUNC_10(VAR_5);
 const struct essiv_tfm_ctx *VAR_8 = FUNC_6(VAR_7);
 struct essiv_aead_request_ctx *VAR_9 = FUNC_0(VAR_5);
 struct aead_request *VAR_10 = &VAR_9->aead_req;
 struct scatterlist *VAR_11 = VAR_5->src;
 int VAR_12;

 FUNC_11(VAR_8->essiv_cipher, VAR_5->iv, VAR_5->iv);






 VAR_9->assoc = ((void*)0);
 if (VAR_5->src == VAR_5->dst || !VAR_6) {
  FUNC_16(VAR_5->iv, VAR_5->dst,
      VAR_5->assoclen - FUNC_9(VAR_7),
      FUNC_9(VAR_7), 1);
 } else {
  u8 *VAR_13 = (u8 *)FUNC_0(VAR_5) + VAR_8->ivoffset;
  int VAR_14 = FUNC_9(VAR_7);
  int VAR_15 = VAR_5->assoclen - VAR_14;
  struct scatterlist *VAR_16;
  int VAR_17;

  if (VAR_15 < 0)
   return -VAR_1;

  VAR_17 = FUNC_19(VAR_5->src, VAR_15);
  if (VAR_17 < 0)
   return -VAR_1;

  FUNC_14(VAR_13, VAR_5->iv, VAR_14);
  FUNC_18(VAR_9->sg, 4);

  if (FUNC_23(VAR_17 > 1)) {




   VAR_9->assoc = FUNC_13(VAR_15, VAR_3);
   if (!VAR_9->assoc)
    return -VAR_2;

   FUNC_16(VAR_9->assoc, VAR_5->src, 0,
       VAR_15, 0);
   FUNC_21(VAR_9->sg, VAR_9->assoc, VAR_15);
  } else {
   FUNC_22(VAR_9->sg, FUNC_20(VAR_5->src), VAR_15,
        VAR_5->src->offset);
  }

  FUNC_21(VAR_9->sg + 1, VAR_13, VAR_14);
  VAR_16 = FUNC_15(VAR_9->sg + 2, VAR_5->src, VAR_5->assoclen);
  if (VAR_16 != VAR_9->sg + 2)
   FUNC_17(VAR_9->sg, 3, VAR_16);

  VAR_11 = VAR_9->sg;
 }

 FUNC_5(VAR_10, VAR_8->u.aead);
 FUNC_2(VAR_10, VAR_5->assoclen);
 FUNC_3(VAR_10, FUNC_1(VAR_5),
      VAR_4, VAR_5);
 FUNC_4(VAR_10, VAR_11, VAR_5->dst, VAR_5->cryptlen, VAR_5->iv);

 VAR_12 = VAR_6 ? FUNC_8(VAR_10) :
      FUNC_7(VAR_10);

 if (VAR_9->assoc && VAR_12 != -VAR_0)
  FUNC_12(VAR_9->assoc);
 return VAR_12;
}
