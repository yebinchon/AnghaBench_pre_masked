
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_hash_walk {int flags; int sg; int alignmask; scalar_t__ entrylen; int total; } ;
struct TYPE_2__ {int flags; } ;
struct ahash_request {TYPE_1__ base; int src; int nbytes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct crypto_hash_walk*) ;

int FUNC_4(struct ahash_request *VAR_2,
       struct crypto_hash_walk *VAR_3)
{
 VAR_3->total = VAR_2->nbytes;

 if (!VAR_3->total) {
  VAR_3->entrylen = 0;
  return 0;
 }

 VAR_3->alignmask = FUNC_1(FUNC_2(VAR_2));
 VAR_3->sg = VAR_2->src;
 VAR_3->flags = VAR_2->base.flags & VAR_1;
 VAR_3->flags |= VAR_0;

 FUNC_0(VAR_1 & VAR_0);

 return FUNC_3(VAR_3);
}
