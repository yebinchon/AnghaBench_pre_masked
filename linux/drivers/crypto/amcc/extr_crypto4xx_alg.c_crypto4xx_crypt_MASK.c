
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int cryptlen; int dst; int src; int base; int iv; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto4xx_ctx {int sa_len; int sa_out; int sa_in; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct crypto4xx_ctx*,int ,int ,int ,int *,unsigned int const,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ,unsigned int const) ;
 struct crypto4xx_ctx* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;

__attribute__((used)) static inline int FUNC_5(struct skcipher_request *VAR_3,
      const unsigned int VAR_4, bool VAR_5,
      bool VAR_6)
{
 struct crypto_skcipher *VAR_7 = FUNC_4(VAR_3);
 struct crypto4xx_ctx *VAR_8 = FUNC_3(VAR_7);
 __le32 VAR_9[VAR_1];

 if (VAR_6 && !FUNC_0(VAR_3->cryptlen, VAR_0))
  return -VAR_2;

 if (VAR_4)
  FUNC_2(VAR_9, VAR_3->iv, VAR_4);

 return FUNC_1(&VAR_3->base, VAR_8, VAR_3->src, VAR_3->dst,
  VAR_3->cryptlen, VAR_9, VAR_4, VAR_5 ? VAR_8->sa_in : VAR_8->sa_out,
  VAR_8->sa_len, 0, ((void*)0));
}
