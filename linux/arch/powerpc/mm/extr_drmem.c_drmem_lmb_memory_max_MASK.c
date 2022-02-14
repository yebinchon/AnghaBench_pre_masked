
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct drmem_lmb {scalar_t__ base_addr; } ;
struct TYPE_2__ {int n_lmbs; struct drmem_lmb* lmbs; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;

u64 FUNC_1(void)
{
 struct drmem_lmb *VAR_1;

 VAR_1 = &VAR_0->lmbs[VAR_0->n_lmbs - 1];
 return VAR_1->base_addr + FUNC_0();
}
