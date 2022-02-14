
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct scatter_walk {int sg; } ;
struct crypto_aes_ctx {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int assoclen; int src; } ;
typedef int __be32 ;
typedef void* __be16 ;


 int FUNC_0 (struct crypto_aes_ctx*,int *,int *,int,int*) ;
 void* FUNC_1 (int) ;
 struct crypto_aes_ctx* FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct scatter_walk*,int) ;
 int FUNC_6 (struct scatter_walk*,int) ;
 int FUNC_7 (struct scatter_walk*,int ,int) ;
 int * FUNC_8 (struct scatter_walk*) ;
 int FUNC_9 (struct scatter_walk*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct aead_request *VAR_0, u8 VAR_1[])
{
 struct crypto_aead *VAR_2 = FUNC_3(VAR_0);
 struct crypto_aes_ctx *VAR_3 = FUNC_2(VAR_2);
 struct __packed { __be16 l; __be32 h; u16 len; } VAR_4;
 struct scatter_walk VAR_5;
 u32 VAR_6 = VAR_0->assoclen;
 u32 VAR_7 = 0;


 if (VAR_6 < 0xff00) {
  VAR_4.l = FUNC_1(VAR_6);
  VAR_4.len = 2;
 } else {
  VAR_4.l = FUNC_1(0xfffe);
  FUNC_4(VAR_6, &VAR_4.h);
  VAR_4.len = 6;
 }

 FUNC_0(VAR_3, VAR_1, (u8 *)&VAR_4, VAR_4.len, &VAR_7);
 FUNC_9(&VAR_5, VAR_0->src);

 do {
  u32 VAR_8 = FUNC_6(&VAR_5, VAR_6);
  u8 *VAR_9;

  if (!VAR_8) {
   FUNC_9(&VAR_5, FUNC_11(VAR_5.sg));
   VAR_8 = FUNC_6(&VAR_5, VAR_6);
  }
  VAR_9 = FUNC_8(&VAR_5);
  FUNC_0(VAR_3, VAR_1, VAR_9, VAR_8, &VAR_7);
  VAR_6 -= VAR_8;

  FUNC_10(VAR_9);
  FUNC_5(&VAR_5, VAR_8);
  FUNC_7(&VAR_5, 0, VAR_6);
 } while (VAR_6);
}
