
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {scalar_t__ digcnt; struct s5p_aes_dev* dd; } ;
struct s5p_aes_dev {int dev; } ;
struct ahash_request {int dummy; } ;


 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static void FUNC_3(struct ahash_request *VAR_0)
{
 struct s5p_hash_reqctx *VAR_1 = FUNC_0(VAR_0);
 struct s5p_aes_dev *VAR_2 = VAR_1->dd;

 if (VAR_1->digcnt)
  FUNC_2(VAR_0);

 FUNC_1(VAR_2->dev, "hash_finish digcnt: %lld\n", VAR_1->digcnt);
}
