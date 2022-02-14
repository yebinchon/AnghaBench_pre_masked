
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgr192_ctx {int a; int b; int c; scalar_t__ count; scalar_t__ nblocks; } ;
struct shash_desc {int dummy; } ;


 struct tgr192_ctx* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_0)
{
 struct tgr192_ctx *VAR_1 = FUNC_0(VAR_0);

 VAR_1->a = 0x0123456789abcdefULL;
 VAR_1->b = 0xfedcba9876543210ULL;
 VAR_1->c = 0xf096a5b4c3b2e187ULL;
 VAR_1->nblocks = 0;
 VAR_1->count = 0;

 return 0;
}
