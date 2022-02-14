
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_mem_reg {struct iser_fr_desc* mem_h; } ;
struct iser_fr_desc {int sig_protected; int rsc; } ;
struct iser_device {TYPE_2__* reg_ops; } ;
struct iser_data_buf {int dma_nents; } ;
struct iscsi_iser_task {int * prot; int sc; struct iser_mem_reg* rdma_reg; struct iser_data_buf* data; TYPE_1__* iser_conn; } ;
struct ib_conn {struct iser_device* device; } ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;
struct TYPE_4__ {int (* reg_desc_put ) (struct ib_conn*,struct iser_fr_desc*) ;struct iser_fr_desc* (* reg_desc_get ) (struct ib_conn*) ;} ;
struct TYPE_3__ {struct ib_conn ib_conn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_iser_task*,struct iser_data_buf*,struct iser_fr_desc*,int,struct iser_mem_reg*) ;
 int FUNC_1 (struct iscsi_iser_task*,struct iser_data_buf*,int *,int *,struct iser_mem_reg*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct iser_fr_desc* FUNC_3 (struct ib_conn*) ;
 int FUNC_4 (struct ib_conn*,struct iser_fr_desc*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct iscsi_iser_task *VAR_2,
        enum iser_data_dir VAR_3,
        bool VAR_4)
{
 struct ib_conn *VAR_5 = &VAR_2->iser_conn->ib_conn;
 struct iser_device *VAR_6 = VAR_5->device;
 struct iser_data_buf *VAR_7 = &VAR_2->data[VAR_3];
 struct iser_mem_reg *VAR_8 = &VAR_2->rdma_reg[VAR_3];
 struct iser_fr_desc *VAR_9 = ((void*)0);
 bool VAR_10;
 int VAR_11;

 VAR_10 = VAR_7->dma_nents == 1 && (VAR_4 || !VAR_1) &&
        FUNC_2(VAR_2->sc) == VAR_0;

 if (!VAR_10) {
  VAR_9 = VAR_6->reg_ops->reg_desc_get(VAR_5);
  VAR_8->mem_h = VAR_9;
 }

 if (FUNC_2(VAR_2->sc) == VAR_0) {
  VAR_11 = FUNC_0(VAR_2, VAR_7, VAR_9, VAR_10, VAR_8);
  if (FUNC_5(VAR_11))
   goto err_reg;
 } else {
  VAR_11 = FUNC_1(VAR_2, VAR_7, &VAR_2->prot[VAR_3],
          &VAR_9->rsc, VAR_8);
  if (FUNC_5(VAR_11))
   goto err_reg;

  VAR_9->sig_protected = 1;
 }

 return 0;

err_reg:
 if (VAR_9)
  VAR_6->reg_ops->reg_desc_put(VAR_5, VAR_9);

 return VAR_11;
}
