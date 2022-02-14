
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockif_ctxt {scalar_t__ bc_magic; int bc_psectsz; int bc_psectoff; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct blockif_ctxt *VAR_1, int *VAR_2, int *VAR_3)
{

 FUNC_0(VAR_1->bc_magic == VAR_0);
 *VAR_2 = VAR_1->bc_psectsz;
 *VAR_3 = VAR_1->bc_psectoff;
}
