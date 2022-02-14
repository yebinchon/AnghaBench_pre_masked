
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptd_aead_ctx {int refcnt; } ;
struct cryptd_aead {int base; } ;


 struct cryptd_aead_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct cryptd_aead *VAR_0)
{
 struct cryptd_aead_ctx *VAR_1 = FUNC_0(&VAR_0->base);

 return FUNC_1(&VAR_1->refcnt) - 1;
}
