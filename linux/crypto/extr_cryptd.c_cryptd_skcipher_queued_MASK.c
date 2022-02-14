
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptd_skcipher_ctx {int refcnt; } ;
struct cryptd_skcipher {int base; } ;


 struct cryptd_skcipher_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct cryptd_skcipher *VAR_0)
{
 struct cryptd_skcipher_ctx *VAR_1 = FUNC_0(&VAR_0->base);

 return FUNC_1(&VAR_1->refcnt) - 1;
}
