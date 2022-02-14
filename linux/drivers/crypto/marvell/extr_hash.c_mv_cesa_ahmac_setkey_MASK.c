
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 struct ahash_request* FUNC_2 (struct crypto_ahash*,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct crypto_ahash*,int ) ;
 int FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (char const*,int ,int ) ;
 int FUNC_7 (struct crypto_ahash*) ;
 unsigned int FUNC_8 (int ) ;
 int * FUNC_9 (int,unsigned int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ahash_request*,int *,void*,unsigned int) ;
 int FUNC_12 (struct ahash_request*,int const*,unsigned int,int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_13(const char *VAR_2,
    const u8 *VAR_3, unsigned int VAR_4,
    void *VAR_5, void *VAR_6)
{
 struct ahash_request *VAR_7;
 struct crypto_ahash *VAR_8;
 unsigned int VAR_9;
 u8 *VAR_10 = ((void*)0);
 u8 *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_6(VAR_2, 0, 0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_7 = FUNC_2(VAR_8, VAR_1);
 if (!VAR_7) {
  VAR_12 = -VAR_0;
  goto free_ahash;
 }

 FUNC_4(VAR_8, ~0);

 VAR_9 = FUNC_8(FUNC_5(VAR_8));

 VAR_10 = FUNC_9(2, VAR_9, VAR_1);
 if (!VAR_10) {
  VAR_12 = -VAR_0;
  goto free_req;
 }

 VAR_11 = VAR_10 + VAR_9;

 VAR_12 = FUNC_12(VAR_7, VAR_3, VAR_4, VAR_10, VAR_11, VAR_9);
 if (VAR_12)
  goto free_ipad;

 VAR_12 = FUNC_11(VAR_7, VAR_10, VAR_5, VAR_9);
 if (VAR_12)
  goto free_ipad;

 VAR_12 = FUNC_11(VAR_7, VAR_11, VAR_6, VAR_9);

free_ipad:
 FUNC_10(VAR_10);
free_req:
 FUNC_3(VAR_7);
free_ahash:
 FUNC_7(VAR_8);

 return VAR_12;
}
