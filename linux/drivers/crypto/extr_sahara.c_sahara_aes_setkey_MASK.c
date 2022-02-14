
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sahara_ctx {unsigned int keylen; int fallback; int flags; int key; } ;
struct TYPE_2__ {int crt_flags; } ;
struct crypto_ablkcipher {TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sahara_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_ablkcipher *VAR_7, const u8 *VAR_8,
        unsigned int VAR_9)
{
 struct sahara_ctx *VAR_10 = FUNC_0(VAR_7);
 int VAR_11;

 VAR_10->keylen = VAR_9;


 if (VAR_9 == VAR_0) {
  FUNC_5(VAR_10->key, VAR_8, VAR_9);
  VAR_10->flags |= VAR_6;
  return 0;
 }

 if (VAR_9 != VAR_1 && VAR_9 != VAR_2)
  return -VAR_5;




 FUNC_1(VAR_10->fallback, VAR_3);
 FUNC_3(VAR_10->fallback, VAR_7->base.crt_flags &
       VAR_3);

 VAR_11 = FUNC_4(VAR_10->fallback, VAR_8, VAR_9);

 VAR_7->base.crt_flags &= ~VAR_4;
 VAR_7->base.crt_flags |= FUNC_2(VAR_10->fallback) &
          VAR_4;
 return VAR_11;
}
