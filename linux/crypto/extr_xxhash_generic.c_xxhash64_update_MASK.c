
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xxhash64_desc_ctx {int xxhstate; } ;
struct shash_desc {int dummy; } ;


 struct xxhash64_desc_ctx* FUNC_0 (struct shash_desc*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0, const u8 *VAR_1,
    unsigned int VAR_2)
{
 struct xxhash64_desc_ctx *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->xxhstate, VAR_1, VAR_2);

 return 0;
}
