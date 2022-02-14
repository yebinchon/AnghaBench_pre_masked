
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_mr {struct siw_mem* mem; } ;
struct siw_mem {int stag; TYPE_1__* sdev; scalar_t__ stag_valid; } ;
struct TYPE_2__ {int mem_xa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct siw_mem*) ;
 int FUNC_2 () ;
 struct siw_mem* FUNC_3 (int *,int) ;

void FUNC_4(struct siw_mr *VAR_0)
{
 struct siw_mem *VAR_1 = VAR_0->mem, *VAR_2;

 VAR_1->stag_valid = 0;


 FUNC_2();

 VAR_2 = FUNC_3(&VAR_1->sdev->mem_xa, VAR_1->stag >> 8);
 FUNC_0(VAR_2 != VAR_1);
 FUNC_1(VAR_1);
}
