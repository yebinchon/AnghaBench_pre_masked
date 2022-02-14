
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct poly1305_simd_desc_ctx {int uset; int wset; } ;


 int FUNC_0 (struct shash_desc*) ;
 struct poly1305_simd_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0)
{
 struct poly1305_simd_desc_ctx *VAR_1 = FUNC_1(VAR_0);

 VAR_1->uset = 0;




 return FUNC_0(VAR_0);
}
