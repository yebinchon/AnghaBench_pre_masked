
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ num_pbes; } ;
struct ocrdma_mr {scalar_t__ npages; int * pages; TYPE_1__ hwmr; } ;
struct ib_mr {int dummy; } ;


 int VAR_0 ;
 struct ocrdma_mr* FUNC_0 (struct ib_mr*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ib_mr *VAR_1, u64 VAR_2)
{
 struct ocrdma_mr *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_3->npages == VAR_3->hwmr.num_pbes))
  return -VAR_0;

 VAR_3->pages[VAR_3->npages++] = VAR_2;

 return 0;
}
