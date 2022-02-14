
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int nbytes; unsigned int total; TYPE_4__ dst; TYPE_2__ src; scalar_t__ iv; } ;
struct skcipher_request {int dummy; } ;
struct rctx {struct skcipher_request subreq; int t; } ;
struct priv {int * mulinc; } ;
struct crypto_skcipher {int dummy; } ;
typedef int be128 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct priv* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 size_t FUNC_5 (int *) ;
 struct rctx* FUNC_6 (struct skcipher_request*) ;
 int FUNC_7 (struct skcipher_request*,struct crypto_skcipher*) ;
 int FUNC_8 (struct skcipher_walk*,unsigned int) ;
 int FUNC_9 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_10(struct skcipher_request *VAR_1, bool VAR_2)
{
 const int VAR_3 = VAR_0;
 struct crypto_skcipher *VAR_4 = FUNC_4(VAR_1);
 struct priv *VAR_5 = FUNC_3(VAR_4);
 struct rctx *VAR_6 = FUNC_6(VAR_1);
 be128 VAR_7 = VAR_6->t;
 struct skcipher_walk VAR_8;
 __be32 *VAR_9;
 u32 VAR_10[4];
 int VAR_11;

 if (VAR_2) {
  VAR_1 = &VAR_6->subreq;

  FUNC_7(VAR_1, VAR_4);
 }

 VAR_11 = FUNC_9(&VAR_8, VAR_1, 0);
 if (VAR_11)
  return VAR_11;

 VAR_9 = (__be32 *)VAR_8.iv;
 VAR_10[0] = FUNC_1(VAR_9[3]);
 VAR_10[1] = FUNC_1(VAR_9[2]);
 VAR_10[2] = FUNC_1(VAR_9[1]);
 VAR_10[3] = FUNC_1(VAR_9[0]);

 while (VAR_8.nbytes) {
  unsigned int VAR_12 = VAR_8.nbytes;
  be128 *VAR_13;
  be128 *VAR_14;

  VAR_13 = VAR_8.src.virt.addr;
  VAR_14 = VAR_8.dst.virt.addr;

  do {
   FUNC_0(VAR_14++, &VAR_7, VAR_13++);



   FUNC_0(&VAR_7, &VAR_7, &VAR_5->mulinc[FUNC_5(VAR_10)]);
  } while ((VAR_12 -= VAR_3) >= VAR_3);

  if (VAR_2 && VAR_8.nbytes == VAR_8.total) {
   VAR_9[0] = FUNC_2(VAR_10[3]);
   VAR_9[1] = FUNC_2(VAR_10[2]);
   VAR_9[2] = FUNC_2(VAR_10[1]);
   VAR_9[3] = FUNC_2(VAR_10[0]);
  }

  VAR_11 = FUNC_8(&VAR_8, VAR_12);
 }

 return VAR_11;
}
