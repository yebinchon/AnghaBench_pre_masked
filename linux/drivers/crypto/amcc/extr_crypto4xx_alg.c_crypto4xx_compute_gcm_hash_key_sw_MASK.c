
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct crypto_aes_ctx {int dummy; } ;
typedef int ctx ;
typedef int __le32 ;


 int FUNC_0 (struct crypto_aes_ctx*,int *,int *) ;
 int FUNC_1 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct crypto_aes_ctx*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(__le32 *VAR_0, const u8 *VAR_1,
          unsigned int VAR_2)
{
 struct crypto_aes_ctx VAR_3;
 uint8_t VAR_4[16] = { 0 };
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_3, VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_4("aes_expandkey() failed: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_0(&VAR_3, VAR_4, VAR_4);
 FUNC_2(VAR_0, VAR_4, 16);
 FUNC_3(&VAR_3, sizeof(VAR_3));
 return 0;
}
