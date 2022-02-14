
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct omap_aes_ctx {unsigned int keylen; int fallback; int key; } ;
struct TYPE_2__ {int crt_flags; } ;
struct crypto_ablkcipher {TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct omap_aes_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int const*,unsigned int) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_ablkcipher *VAR_5, const u8 *VAR_6,
      unsigned int VAR_7)
{
 struct omap_aes_ctx *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;

 if (VAR_7 != VAR_0 && VAR_7 != VAR_1 &&
     VAR_7 != VAR_2)
  return -VAR_4;

 FUNC_5("enter, keylen: %d\n", VAR_7);

 FUNC_4(VAR_8->key, VAR_6, VAR_7);
 VAR_8->keylen = VAR_7;

 FUNC_1(VAR_8->fallback, VAR_3);
 FUNC_2(VAR_8->fallback, VAR_5->base.crt_flags &
       VAR_3);

 VAR_9 = FUNC_3(VAR_8->fallback, VAR_6, VAR_7);
 if (!VAR_9)
  return 0;

 return 0;
}
