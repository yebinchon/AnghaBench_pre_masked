
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_flags; } ;
struct hash_alg_common {TYPE_1__ base; } ;
struct crypto_ahash {scalar_t__ setkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct crypto_ahash*,int ) ;
 struct hash_alg_common* FUNC_1 (struct crypto_ahash*) ;

__attribute__((used)) static void FUNC_2(struct crypto_ahash *VAR_3)
{
 const struct hash_alg_common *VAR_4 = FUNC_1(VAR_3);

 if (VAR_3->setkey != VAR_2 &&
     !(VAR_4->base.cra_flags & VAR_0))
  FUNC_0(VAR_3, VAR_1);
}
