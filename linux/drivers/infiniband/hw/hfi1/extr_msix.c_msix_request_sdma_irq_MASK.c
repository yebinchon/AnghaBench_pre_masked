
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int msix_intr; int this_idx; int dd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sdma_engine*,int ,int *,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

int FUNC_2(struct sdma_engine *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->dd, VAR_2, VAR_1, ((void*)0),
         VAR_2->this_idx, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_2->msix_intr = VAR_3;
 FUNC_1(VAR_2->dd, VAR_2->this_idx, VAR_3);

 return 0;
}
