
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct aead_request {unsigned int cryptlen; int* iv; int assoclen; int dst; TYPE_1__ base; int src; } ;
struct aead_geniv_ctx {int* salt; int sknull; int child; } ;
typedef int __be64 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct aead_request* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int ) ;
 int FUNC_3 (struct aead_request*,int ,int ,int ) ;
 int FUNC_4 (struct aead_request*,int ,int ,unsigned int,int*) ;
 int FUNC_5 (struct aead_request*,int ) ;
 int FUNC_6 (int) ;
 struct aead_geniv_ctx* FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct aead_request*) ;
 unsigned int FUNC_9 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_10 (struct aead_request*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int*,int*,int) ;
 int FUNC_13 (int*,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_14 (int*,int ,int ,unsigned int,int) ;
 int FUNC_15 (int ,int ,int *,int *) ;
 int FUNC_16 (int ,int ,int ,int ,int *) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static int FUNC_18(struct aead_request *VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_10(VAR_2);
 struct aead_geniv_ctx *VAR_4 = FUNC_7(VAR_3);
 struct aead_request *VAR_5 = FUNC_1(VAR_2);
 __be64 VAR_6;
 u64 VAR_7;
 u8 *VAR_8;
 unsigned int VAR_9 = FUNC_9(VAR_3);
 int VAR_10;

 if (VAR_2->cryptlen < VAR_9)
  return -VAR_0;

 FUNC_5(VAR_5, VAR_4->child);

 VAR_8 = VAR_2->iv;

 if (VAR_2->src != VAR_2->dst) {
  FUNC_0(VAR_1, VAR_4->sknull);

  FUNC_17(VAR_1, VAR_4->sknull);
  FUNC_15(VAR_1, VAR_2->base.flags,
           ((void*)0), ((void*)0));
  FUNC_16(VAR_1, VAR_2->src, VAR_2->dst,
        VAR_2->assoclen + VAR_2->cryptlen,
        ((void*)0));

  VAR_10 = FUNC_11(VAR_1);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_3(VAR_5, VAR_2->base.flags,
      VAR_2->base.complete, VAR_2->base.data);
 FUNC_4(VAR_5, VAR_2->dst, VAR_2->dst,
          VAR_2->cryptlen, VAR_8);
 FUNC_2(VAR_5, VAR_2->assoclen);

 FUNC_12(&VAR_6, VAR_8 + VAR_9 - 8, 8);
 VAR_7 = FUNC_6(VAR_6);
 FUNC_13(VAR_8, 0, VAR_9);

 FUNC_14(VAR_8, VAR_2->dst, VAR_2->assoclen, VAR_9, 1);

 do {
  u64 VAR_11;

  FUNC_12(&VAR_11, VAR_4->salt + VAR_9 - 8, 8);

  VAR_11 |= 1;
  VAR_11 *= VAR_7;

  FUNC_12(VAR_8 + VAR_9 - 8, &VAR_11, 8);
 } while ((VAR_9 -= 8));

 return FUNC_8(VAR_5);
}
