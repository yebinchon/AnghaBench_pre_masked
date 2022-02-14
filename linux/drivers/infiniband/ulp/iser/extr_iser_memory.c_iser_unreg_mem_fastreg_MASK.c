
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iser_mem_reg {int * mem_h; } ;
struct iser_device {TYPE_2__* reg_ops; } ;
struct iscsi_iser_task {TYPE_1__* iser_conn; struct iser_mem_reg* rdma_reg; } ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;
struct TYPE_6__ {struct iser_device* device; } ;
struct TYPE_5__ {int (* reg_desc_put ) (TYPE_3__*,int *) ;} ;
struct TYPE_4__ {TYPE_3__ ib_conn; } ;


 int FUNC_0 (TYPE_3__*,int *) ;

void FUNC_1(struct iscsi_iser_task *VAR_0,
       enum iser_data_dir VAR_1)
{
 struct iser_device *VAR_2 = VAR_0->iser_conn->ib_conn.device;
 struct iser_mem_reg *VAR_3 = &VAR_0->rdma_reg[VAR_1];

 if (!VAR_3->mem_h)
  return;

 VAR_2->reg_ops->reg_desc_put(&VAR_0->iser_conn->ib_conn,
         VAR_3->mem_h);
 VAR_3->mem_h = ((void*)0);
}
