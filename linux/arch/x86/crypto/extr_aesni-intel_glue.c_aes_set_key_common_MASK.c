
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct crypto_aes_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct crypto_aes_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_5, void *VAR_6,
         const u8 *VAR_7, unsigned int VAR_8)
{
 struct crypto_aes_ctx *VAR_9 = FUNC_0(VAR_6);
 u32 *VAR_10 = &VAR_5->crt_flags;
 int VAR_11;

 if (VAR_8 != VAR_0 && VAR_8 != VAR_1 &&
     VAR_8 != VAR_2) {
  *VAR_10 |= VAR_3;
  return -VAR_4;
 }

 if (!FUNC_3())
  VAR_11 = FUNC_1(VAR_9, VAR_7, VAR_8);
 else {
  FUNC_4();
  VAR_11 = FUNC_2(VAR_9, VAR_7, VAR_8);
  FUNC_5();
 }

 return VAR_11;
}
