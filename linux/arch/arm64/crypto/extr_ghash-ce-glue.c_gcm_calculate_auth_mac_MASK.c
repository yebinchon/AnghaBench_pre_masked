
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct scatter_walk {int sg; } ;
struct gcm_aes_ctx {int ghash_key; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int src; scalar_t__ assoclen; } ;


 int VAR_0 ;
 struct gcm_aes_ctx* FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (int *,int *,scalar_t__,int *,int*,struct gcm_aes_ctx*) ;
 int FUNC_3 (int,int *,int *,int *,int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (struct scatter_walk*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct scatter_walk*,scalar_t__) ;
 int FUNC_7 (struct scatter_walk*,int ,scalar_t__) ;
 int * FUNC_8 (struct scatter_walk*) ;
 int FUNC_9 (struct scatter_walk*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct aead_request *VAR_2, u64 VAR_3[])
{
 struct crypto_aead *VAR_4 = FUNC_1(VAR_2);
 struct gcm_aes_ctx *VAR_5 = FUNC_0(VAR_4);
 u8 VAR_6[VAR_0];
 struct scatter_walk VAR_7;
 u32 VAR_8 = VAR_2->assoclen;
 int VAR_9 = 0;

 FUNC_9(&VAR_7, VAR_2->src);

 do {
  u32 VAR_10 = FUNC_6(&VAR_7, VAR_8);
  u8 *VAR_11;

  if (!VAR_10) {
   FUNC_9(&VAR_7, FUNC_11(VAR_7.sg));
   VAR_10 = FUNC_6(&VAR_7, VAR_8);
  }
  VAR_11 = FUNC_8(&VAR_7);

  FUNC_2(VAR_3, VAR_11, VAR_10, VAR_6, &VAR_9, VAR_5);
  VAR_8 -= VAR_10;

  FUNC_10(VAR_11);
  FUNC_5(&VAR_7, VAR_10);
  FUNC_7(&VAR_7, 0, VAR_8);
 } while (VAR_8);

 if (VAR_9) {
  FUNC_4(&VAR_6[VAR_9], 0, VAR_0 - VAR_9);
  FUNC_3(1, VAR_3, VAR_6, &VAR_5->ghash_key, ((void*)0),
    VAR_1);
 }
}
