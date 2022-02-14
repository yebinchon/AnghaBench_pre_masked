
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int nbytes; unsigned int total; TYPE_4__ dst; TYPE_2__ src; } ;
struct skcipher_request {int cryptlen; } ;
struct rctx {int t; struct skcipher_request subreq; } ;
struct crypto_skcipher {int dummy; } ;
typedef int le128 ;


 int VAR_0 ;
 struct crypto_skcipher* FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 struct rctx* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (struct skcipher_request*,struct crypto_skcipher*) ;
 int FUNC_5 (struct skcipher_walk*,unsigned int) ;
 int FUNC_6 (struct skcipher_walk*,struct skcipher_request*,int) ;
 scalar_t__ FUNC_7 (int const) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_1, bool VAR_2, bool VAR_3)
{
 struct rctx *VAR_4 = FUNC_3(VAR_1);
 struct crypto_skcipher *VAR_5 = FUNC_0(VAR_1);
 const bool VAR_6 = (VAR_1->cryptlen % VAR_0);
 const int VAR_7 = VAR_0;
 struct skcipher_walk VAR_8;
 le128 VAR_9 = VAR_4->t;
 int VAR_10;

 if (VAR_2) {
  VAR_1 = &VAR_4->subreq;

  FUNC_4(VAR_1, VAR_5);
 }
 VAR_10 = FUNC_6(&VAR_8, VAR_1, 0);

 while (VAR_8.nbytes) {
  unsigned int VAR_11 = VAR_8.nbytes;
  le128 *VAR_12;
  le128 *VAR_13;

  VAR_12 = VAR_8.src.virt.addr;
  VAR_13 = VAR_8.dst.virt.addr;

  do {
   if (FUNC_7(VAR_6) &&
       VAR_8.total - VAR_8.nbytes + VAR_11 < 2 * VAR_0) {
    if (!VAR_3) {
     if (VAR_2)
      VAR_4->t = VAR_9;
     FUNC_1(&VAR_9, &VAR_9);
    }
    FUNC_2(VAR_13, &VAR_9, VAR_12);
    if (VAR_3 && VAR_2)
     FUNC_1(&VAR_4->t, &VAR_9);
    FUNC_5(&VAR_8, VAR_11 - VAR_7);
    return 0;
   }

   FUNC_2(VAR_13++, &VAR_9, VAR_12++);
   FUNC_1(&VAR_9, &VAR_9);
  } while ((VAR_11 -= VAR_7) >= VAR_7);

  VAR_10 = FUNC_5(&VAR_8, VAR_11);
 }

 return VAR_10;
}
