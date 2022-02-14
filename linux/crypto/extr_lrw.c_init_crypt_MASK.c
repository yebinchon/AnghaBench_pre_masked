
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct skcipher_request {int iv; int cryptlen; int dst; TYPE_1__ base; } ;
struct rctx {int t; struct skcipher_request subreq; } ;
struct priv {int table; int child; } ;


 int VAR_0 ;
 struct priv* FUNC_0 (int ) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct rctx* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_request*,int ,int ,struct skcipher_request*) ;
 int FUNC_6 (struct skcipher_request*,int ,int ,int ,int ) ;
 int FUNC_7 (struct skcipher_request*,int ) ;

__attribute__((used)) static void FUNC_8(struct skcipher_request *VAR_1)
{
 struct priv *VAR_2 = FUNC_0(FUNC_1(VAR_1));
 struct rctx *VAR_3 = FUNC_4(VAR_1);
 struct skcipher_request *VAR_4 = &VAR_3->subreq;

 FUNC_7(VAR_4, VAR_2->child);
 FUNC_5(VAR_4, VAR_1->base.flags, VAR_0, VAR_1);

 FUNC_6(VAR_4, VAR_1->dst, VAR_1->dst,
       VAR_1->cryptlen, VAR_1->iv);


 FUNC_3(&VAR_3->t, VAR_1->iv, sizeof(VAR_3->t));


 FUNC_2(&VAR_3->t, VAR_2->table);
}
