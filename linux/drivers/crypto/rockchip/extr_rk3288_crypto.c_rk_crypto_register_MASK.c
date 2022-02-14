
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rk_crypto_info {int dummy; } ;
struct TYPE_4__ {int hash; int crypto; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ alg; struct rk_crypto_info* dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int FUNC_5(struct rk_crypto_info *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_1[VAR_3]->dev = VAR_2;
  if (VAR_1[VAR_3]->type == VAR_0)
   VAR_5 = FUNC_2(
     &VAR_1[VAR_3]->alg.crypto);
  else
   VAR_5 = FUNC_1(
     &VAR_1[VAR_3]->alg.hash);
  if (VAR_5)
   goto err_cipher_algs;
 }
 return 0;

err_cipher_algs:
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_1[VAR_3]->type == VAR_0)
   FUNC_4(&VAR_1[VAR_4]->alg.crypto);
  else
   FUNC_3(&VAR_1[VAR_3]->alg.hash);
 }
 return VAR_5;
}
