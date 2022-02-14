
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_dev {TYPE_1__* caps; } ;
struct TYPE_2__ {int ncipher_algs; int nahash_algs; int * cipher_algs; int * ahash_algs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mv_cesa_dev *VAR_0)
{
 int VAR_1;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->caps->ncipher_algs; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0->caps->cipher_algs[VAR_2]);
  if (VAR_1)
   goto err_unregister_crypto;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->caps->nahash_algs; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0->caps->ahash_algs[VAR_2]);
  if (VAR_1)
   goto err_unregister_ahash;
 }

 return 0;

err_unregister_ahash:
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_2(VAR_0->caps->ahash_algs[VAR_3]);
 VAR_2 = VAR_0->caps->ncipher_algs;

err_unregister_crypto:
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_3(VAR_0->caps->cipher_algs[VAR_3]);

 return VAR_1;
}
