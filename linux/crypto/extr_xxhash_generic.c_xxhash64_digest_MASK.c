
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xxhash64_tfm_ctx {int seed; } ;
struct shash_desc {int tfm; } ;


 struct xxhash64_tfm_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int const*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, const u8 *VAR_1,
    unsigned int VAR_2, u8 *VAR_3)
{
 struct xxhash64_tfm_ctx *VAR_4 = FUNC_0(VAR_0->tfm);

 FUNC_1(FUNC_2(VAR_1, VAR_2, VAR_4->seed), VAR_3);

 return 0;
}
