
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct talitos_ctx {scalar_t__ keylen; } ;
struct scatterlist {int dummy; } ;
struct crypto_wait {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ahash_request* FUNC_0 (struct crypto_ahash*,int ) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*,int ,int ,struct crypto_wait*) ;
 int FUNC_3 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (struct crypto_wait*) ;
 int VAR_3 ;
 struct talitos_ctx* FUNC_7 (int ) ;
 int FUNC_8 (int ,struct crypto_wait*) ;
 int FUNC_9 (struct scatterlist*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct crypto_ahash *VAR_4, const u8 *VAR_5, unsigned int VAR_6,
     u8 *VAR_7)
{
 struct talitos_ctx *VAR_8 = FUNC_7(FUNC_5(VAR_4));

 struct scatterlist VAR_9[1];
 struct ahash_request *VAR_10;
 struct crypto_wait VAR_11;
 int VAR_12;

 FUNC_6(&VAR_11);

 VAR_10 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_10)
  return -VAR_1;


 VAR_8->keylen = 0;
 FUNC_2(VAR_10, VAR_0,
       VAR_3, &VAR_11);

 FUNC_9(&VAR_9[0], VAR_5, VAR_6);

 FUNC_3(VAR_10, VAR_9, VAR_7, VAR_6);
 VAR_12 = FUNC_8(FUNC_4(VAR_10), &VAR_11);

 FUNC_1(VAR_10);

 return VAR_12;
}
