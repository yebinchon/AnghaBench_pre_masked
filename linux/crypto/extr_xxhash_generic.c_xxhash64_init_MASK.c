
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xxhash64_tfm_ctx {int seed; } ;
struct xxhash64_desc_ctx {int xxhstate; } ;
struct shash_desc {int tfm; } ;


 struct xxhash64_tfm_ctx* FUNC_0 (int ) ;
 struct xxhash64_desc_ctx* FUNC_1 (struct shash_desc*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0)
{
 struct xxhash64_tfm_ctx *VAR_1 = FUNC_0(VAR_0->tfm);
 struct xxhash64_desc_ctx *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->xxhstate, VAR_1->seed);

 return 0;
}
