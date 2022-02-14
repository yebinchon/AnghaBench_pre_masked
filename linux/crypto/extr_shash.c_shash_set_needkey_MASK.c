
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_flags; } ;
struct shash_alg {TYPE_1__ base; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct shash_alg*) ;
 int FUNC_1 (struct crypto_shash*,int ) ;

__attribute__((used)) static void FUNC_2(struct crypto_shash *VAR_2, struct shash_alg *VAR_3)
{
 if (FUNC_0(VAR_3) &&
     !(VAR_3->base.cra_flags & VAR_0))
  FUNC_1(VAR_2, VAR_1);
}
