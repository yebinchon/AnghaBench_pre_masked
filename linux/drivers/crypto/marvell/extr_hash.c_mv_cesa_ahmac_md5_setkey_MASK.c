
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv_cesa_hmac_ctx {void** iv; } ;
struct md5_state {int * hash; } ;
struct crypto_ahash {int dummy; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_ahash*) ;
 struct mv_cesa_hmac_ctx* FUNC_3 (int ) ;
 int FUNC_4 (char*,int const*,unsigned int,struct md5_state*,struct md5_state*) ;

__attribute__((used)) static int FUNC_5(struct crypto_ahash *VAR_0, const u8 *VAR_1,
        unsigned int VAR_2)
{
 struct mv_cesa_hmac_ctx *VAR_3 = FUNC_3(FUNC_2(VAR_0));
 struct md5_state VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_4("mv-md5", VAR_1, VAR_2, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4.hash); VAR_7++)
  VAR_3->iv[VAR_7] = FUNC_1(VAR_4.hash[VAR_7]);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5.hash); VAR_7++)
  VAR_3->iv[VAR_7 + 8] = FUNC_1(VAR_5.hash[VAR_7]);

 return 0;
}
