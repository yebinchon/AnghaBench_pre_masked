
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_dev {TYPE_1__* caps; } ;
struct TYPE_2__ {int nahash_algs; int ncipher_algs; int * cipher_algs; int * ahash_algs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mv_cesa_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->caps->nahash_algs; VAR_1++)
  FUNC_0(VAR_0->caps->ahash_algs[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_0->caps->ncipher_algs; VAR_1++)
  FUNC_1(VAR_0->caps->cipher_algs[VAR_1]);
}
