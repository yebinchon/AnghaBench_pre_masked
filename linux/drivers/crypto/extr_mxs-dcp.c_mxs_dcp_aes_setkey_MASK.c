
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dcp_async_ctx {unsigned int key_len; int fallback; int key; } ;
struct TYPE_2__ {int crt_flags; } ;
struct crypto_ablkcipher {TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dcp_async_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 unsigned int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_ablkcipher *VAR_3, const u8 *VAR_4,
         unsigned int VAR_5)
{
 struct dcp_async_ctx *VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7;






 VAR_6->key_len = VAR_5;
 if (VAR_5 == VAR_0) {
  FUNC_5(VAR_6->key, VAR_4, VAR_5);
  return 0;
 }






 FUNC_1(VAR_6->fallback, VAR_1);
 FUNC_3(VAR_6->fallback,
      VAR_3->base.crt_flags & VAR_1);

 VAR_7 = FUNC_4(VAR_6->fallback, VAR_4, VAR_5);
 if (!VAR_7)
  return 0;

 VAR_3->base.crt_flags &= ~VAR_2;
 VAR_3->base.crt_flags |= FUNC_2(VAR_6->fallback) &
          VAR_2;

 return VAR_7;
}
