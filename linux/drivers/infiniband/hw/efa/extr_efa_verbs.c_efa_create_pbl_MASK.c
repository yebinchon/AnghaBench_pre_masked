
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* chunks; } ;
struct TYPE_12__ {TYPE_3__ chunk_list; } ;
struct TYPE_9__ {int dma_addr; } ;
struct TYPE_13__ {TYPE_4__ indirect; TYPE_1__ continuous; } ;
struct pbl_context {TYPE_5__ phys; int pbl_buf_size_in_bytes; scalar_t__ physically_continuous; } ;
struct efa_mr {int umem; } ;
struct efa_dev {int ibdev; } ;
struct TYPE_14__ {int mem_addr_low; int mem_addr_high; } ;
struct TYPE_15__ {TYPE_6__ address; int length; } ;
struct TYPE_16__ {TYPE_7__ pbl; } ;
struct efa_com_reg_mr_params {int indirect; TYPE_8__ pbl; scalar_t__ inline_pbl; int page_shift; int page_num; } ;
struct TYPE_10__ {int dma_addr; int length; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct efa_dev*,struct pbl_context*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct efa_dev *VAR_0,
     struct pbl_context *VAR_1,
     struct efa_mr *VAR_2,
     struct efa_com_reg_mr_params *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2->umem, VAR_3->page_num,
    VAR_3->page_shift);
 if (VAR_4) {
  FUNC_1(&VAR_0->ibdev, "Failed to create pbl[%d]\n", VAR_4);
  return VAR_4;
 }

 VAR_3->inline_pbl = 0;
 VAR_3->indirect = !VAR_1->physically_continuous;
 if (VAR_1->physically_continuous) {
  VAR_3->pbl.pbl.length = VAR_1->pbl_buf_size_in_bytes;

  FUNC_0(VAR_1->phys.continuous.dma_addr,
         &VAR_3->pbl.pbl.address.mem_addr_high,
         &VAR_3->pbl.pbl.address.mem_addr_low);
 } else {
  VAR_3->pbl.pbl.length =
   VAR_1->phys.indirect.chunk_list.chunks[0].length;

  FUNC_0(VAR_1->phys.indirect.chunk_list.chunks[0].dma_addr,
         &VAR_3->pbl.pbl.address.mem_addr_high,
         &VAR_3->pbl.pbl.address.mem_addr_low);
 }

 return 0;
}
