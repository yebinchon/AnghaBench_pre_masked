
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csum_total {void* cs_nffree; void* cs_nifree; void* cs_nbfree; void* cs_ndir; } ;


 void* FUNC_0 (void*) ;

void
FUNC_1(struct csum_total *VAR_0, struct csum_total *VAR_1)
{
 VAR_1->cs_ndir = FUNC_0(VAR_0->cs_ndir);
 VAR_1->cs_nbfree = FUNC_0(VAR_0->cs_nbfree);
 VAR_1->cs_nifree = FUNC_0(VAR_0->cs_nifree);
 VAR_1->cs_nffree = FUNC_0(VAR_0->cs_nffree);
}
