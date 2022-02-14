
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct safexcel_crypto_priv {int flags; } ;
struct safexcel_ahash_export_state {int state; } ;
struct TYPE_2__ {int needs_inv; scalar_t__ ctxr; } ;
struct safexcel_ahash_ctx {int opad; int ipad; TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_ahash*) ;
 struct safexcel_ahash_ctx* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int *,unsigned int) ;
 int FUNC_4 (char const*,int const*,unsigned int,struct safexcel_ahash_export_state*,struct safexcel_ahash_export_state*) ;

__attribute__((used)) static int FUNC_5(struct crypto_ahash *VAR_1, const u8 *VAR_2,
        unsigned int VAR_3, const char *VAR_4,
        unsigned int VAR_5)
{
 struct safexcel_ahash_ctx *VAR_6 = FUNC_1(FUNC_0(VAR_1));
 struct safexcel_crypto_priv *VAR_7 = VAR_6->priv;
 struct safexcel_ahash_export_state VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_4, VAR_2, VAR_3, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_7->flags & VAR_0 && VAR_6->base.ctxr &&
     (FUNC_2(VAR_6->ipad, VAR_8.state, VAR_5) ||
      FUNC_2(VAR_6->opad, VAR_9.state, VAR_5)))
  VAR_6->base.needs_inv = 1;

 FUNC_3(VAR_6->ipad, &VAR_8.state, VAR_5);
 FUNC_3(VAR_6->opad, &VAR_9.state, VAR_5);

 return 0;
}
