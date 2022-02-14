
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_mem_reg {int dummy; } ;
struct iscsi_iser_task {int * rdma_reg; TYPE_2__* prot; TYPE_1__* data; scalar_t__* dir; int status; } ;
struct TYPE_4__ {scalar_t__ dma_nents; scalar_t__ data_len; } ;
struct TYPE_3__ {scalar_t__ data_len; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct iscsi_iser_task *VAR_3)

{
 VAR_3->status = VAR_2;

 VAR_3->dir[VAR_0] = 0;
 VAR_3->dir[VAR_1] = 0;

 VAR_3->data[VAR_0].data_len = 0;
 VAR_3->data[VAR_1].data_len = 0;

 VAR_3->prot[VAR_0].data_len = 0;
 VAR_3->prot[VAR_1].data_len = 0;

 VAR_3->prot[VAR_0].dma_nents = 0;
 VAR_3->prot[VAR_1].dma_nents = 0;

 FUNC_0(&VAR_3->rdma_reg[VAR_0], 0,
        sizeof(struct iser_mem_reg));
 FUNC_0(&VAR_3->rdma_reg[VAR_1], 0,
        sizeof(struct iser_mem_reg));
}
