
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_alg {int cra_flags; int * cra_type; } ;
struct TYPE_2__ {scalar_t__ digestsize; scalar_t__ statesize; struct crypto_alg base; } ;
struct ahash_alg {TYPE_1__ halg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct ahash_alg *VAR_6)
{
 struct crypto_alg *VAR_7 = &VAR_6->halg.base;

 if (VAR_6->halg.digestsize > VAR_3 ||
     VAR_6->halg.statesize > VAR_4 ||
     VAR_6->halg.statesize == 0)
  return -VAR_2;

 VAR_7->cra_type = &VAR_5;
 VAR_7->cra_flags &= ~VAR_1;
 VAR_7->cra_flags |= VAR_0;

 return 0;
}
