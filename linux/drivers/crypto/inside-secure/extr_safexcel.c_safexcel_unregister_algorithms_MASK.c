
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int algo_flags; } ;
struct safexcel_crypto_priv {TYPE_1__ hwconfig; } ;
struct TYPE_6__ {int ahash; int aead; int skcipher; } ;
struct TYPE_7__ {int algo_mask; scalar_t__ type; TYPE_2__ alg; } ;


 int FUNC_0 (TYPE_3__**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__** VAR_2 ;

__attribute__((used)) static void FUNC_4(struct safexcel_crypto_priv *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {

  if ((VAR_2[VAR_4]->algo_mask & VAR_3->hwconfig.algo_flags) !=
      VAR_2[VAR_4]->algo_mask)

   continue;

  if (VAR_2[VAR_4]->type == VAR_1)
   FUNC_3(&VAR_2[VAR_4]->alg.skcipher);
  else if (VAR_2[VAR_4]->type == VAR_0)
   FUNC_1(&VAR_2[VAR_4]->alg.aead);
  else
   FUNC_2(&VAR_2[VAR_4]->alg.ahash);
 }
}
