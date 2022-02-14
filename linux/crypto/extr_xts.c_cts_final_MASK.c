
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct skcipher_request {int cryptlen; TYPE_1__ base; int src; int dst; } ;
struct rctx {int tail; int t; int sg; struct skcipher_request subreq; } ;
struct priv {int child; } ;
typedef int le128 ;


 int VAR_0 ;
 struct priv* FUNC_0 (int ) ;
 int FUNC_1 (struct skcipher_request*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ,int,int,int) ;
 struct rctx* FUNC_6 (struct skcipher_request*) ;
 int FUNC_7 (struct skcipher_request*,int ,int ,struct skcipher_request*) ;
 int FUNC_8 (struct skcipher_request*,int ,int ,int,int *) ;
 int FUNC_9 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_10(struct skcipher_request *VAR_2,
       int (*VAR_3)(struct skcipher_request *VAR_4))
{
 struct priv *VAR_5 = FUNC_0(FUNC_1(VAR_2));
 int VAR_6 = VAR_2->cryptlen & ~(VAR_0 - 1);
 struct rctx *VAR_7 = FUNC_6(VAR_2);
 struct skcipher_request *VAR_8 = &VAR_7->subreq;
 int VAR_9 = VAR_2->cryptlen % VAR_0;
 le128 VAR_10[2];
 int VAR_11;

 VAR_7->tail = FUNC_4(VAR_7->sg, VAR_2->dst,
          VAR_6 - VAR_0);

 FUNC_5(VAR_10, VAR_7->tail, 0, VAR_0, 0);
 FUNC_3(VAR_10 + 1, VAR_10, VAR_9);
 FUNC_5(VAR_10, VAR_2->src, VAR_6, VAR_9, 0);

 FUNC_2(VAR_10, &VAR_7->t, VAR_10);

 FUNC_5(VAR_10, VAR_7->tail, 0, VAR_0 + VAR_9, 1);

 FUNC_9(VAR_8, VAR_5->child);
 FUNC_7(VAR_8, VAR_2->base.flags, VAR_1, VAR_2);
 FUNC_8(VAR_8, VAR_7->tail, VAR_7->tail,
       VAR_0, ((void*)0));

 VAR_11 = VAR_3(VAR_8);
 if (VAR_11)
  return VAR_11;

 FUNC_5(VAR_10, VAR_7->tail, 0, VAR_0, 0);
 FUNC_2(VAR_10, &VAR_7->t, VAR_10);
 FUNC_5(VAR_10, VAR_7->tail, 0, VAR_0, 1);

 return 0;
}
