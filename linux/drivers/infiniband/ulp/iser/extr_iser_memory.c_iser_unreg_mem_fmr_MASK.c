
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_mem_reg {int * mem_h; } ;
struct iscsi_iser_task {struct iser_mem_reg* rdma_reg; } ;
struct ib_pool_fmr {int dummy; } ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;


 int FUNC_0 (struct ib_pool_fmr*) ;
 int FUNC_1 (char*,int *) ;

void FUNC_2(struct iscsi_iser_task *VAR_0,
   enum iser_data_dir VAR_1)
{
 struct iser_mem_reg *VAR_2 = &VAR_0->rdma_reg[VAR_1];

 if (!VAR_2->mem_h)
  return;

 FUNC_1("PHYSICAL Mem.Unregister mem_h %p\n", VAR_2->mem_h);

 FUNC_0((struct ib_pool_fmr *)VAR_2->mem_h);

 VAR_2->mem_h = ((void*)0);
}
