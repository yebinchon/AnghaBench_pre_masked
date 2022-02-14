
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xxhash64_desc_ctx {int xxhstate; } ;
struct shash_desc {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 struct xxhash64_desc_ctx* FUNC_1 (struct shash_desc*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct xxhash64_desc_ctx *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(FUNC_2(&VAR_2->xxhstate), VAR_1);

 return 0;
}
