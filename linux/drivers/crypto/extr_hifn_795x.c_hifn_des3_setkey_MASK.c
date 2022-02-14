
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hifn_device {int flags; } ;
struct hifn_context {unsigned int keysize; int key; struct hifn_device* dev; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 struct hifn_context* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_ablkcipher*,int const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_ablkcipher *VAR_1, const u8 *VAR_2,
       unsigned int VAR_3)
{
 struct hifn_context *VAR_4 = FUNC_0(VAR_1);
 struct hifn_device *VAR_5 = VAR_4->dev;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_5->flags &= ~VAR_0;

 FUNC_1(VAR_4->key, VAR_2, VAR_3);
 VAR_4->keysize = VAR_3;

 return 0;
}
