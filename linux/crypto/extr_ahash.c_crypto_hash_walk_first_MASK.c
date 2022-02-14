
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_hash_walk {int flags; int sg; int alignmask; scalar_t__ entrylen; int total; } ;
struct TYPE_2__ {int flags; } ;
struct ahash_request {TYPE_1__ base; int src; int nbytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct crypto_hash_walk*) ;

int FUNC_3(struct ahash_request *VAR_1,
      struct crypto_hash_walk *VAR_2)
{
 VAR_2->total = VAR_1->nbytes;

 if (!VAR_2->total) {
  VAR_2->entrylen = 0;
  return 0;
 }

 VAR_2->alignmask = FUNC_0(FUNC_1(VAR_1));
 VAR_2->sg = VAR_1->src;
 VAR_2->flags = VAR_1->base.flags & VAR_0;

 return FUNC_2(VAR_2);
}
