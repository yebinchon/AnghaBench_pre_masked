
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct i40iw_hmc_pble {void* addr; scalar_t__ idx; } ;
struct i40iw_qp_mr {struct i40iw_hmc_pble rq_pbl; void* shadow; struct i40iw_hmc_pble sq_pbl; } ;
struct TYPE_2__ {scalar_t__ idx; scalar_t__ addr; } ;
struct i40iw_pble_alloc {scalar_t__ level; TYPE_1__ level1; } ;
struct i40iw_cq_mr {void* shadow; struct i40iw_hmc_pble cq_pbl; } ;
struct i40iw_pbl {int pbl_allocated; struct i40iw_cq_mr cq_mr; struct i40iw_qp_mr qp_mr; struct i40iw_mr* iwmr; struct i40iw_pble_alloc pble_alloc; } ;
struct i40iw_mr {void** pgaddrmem; scalar_t__ type; int page_size; } ;
struct i40iw_mem_reg_req {int sq_pages; int rq_pages; int cq_pages; } ;
struct i40iw_device {int pble_rsrc; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void**,int,int ) ;
 int FUNC_1 (int ,struct i40iw_pble_alloc*) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_mr*,int) ;

__attribute__((used)) static int FUNC_3(struct i40iw_device *VAR_3,
         struct i40iw_mem_reg_req *VAR_4,
         struct i40iw_pbl *VAR_5,
         bool VAR_6)
{
 struct i40iw_pble_alloc *VAR_7 = &VAR_5->pble_alloc;
 struct i40iw_mr *VAR_8 = VAR_5->iwmr;
 struct i40iw_qp_mr *VAR_9 = &VAR_5->qp_mr;
 struct i40iw_cq_mr *VAR_10 = &VAR_5->cq_mr;
 struct i40iw_hmc_pble *VAR_11;
 u64 *VAR_12 = VAR_8->pgaddrmem;
 u32 VAR_13;
 int VAR_14;
 int VAR_15;
 bool VAR_16 = 1;

 VAR_15 = VAR_4->sq_pages + VAR_4->rq_pages + VAR_4->cq_pages;
 VAR_13 = VAR_8->page_size;

 VAR_14 = FUNC_2(VAR_3, VAR_8, VAR_6);
 if (VAR_14)
  return VAR_14;

 if (VAR_6 && (VAR_7->level != VAR_1)) {
  FUNC_1(VAR_3->pble_rsrc, VAR_7);
  VAR_5->pbl_allocated = 0;
  return -VAR_0;
 }

 if (VAR_6)
  VAR_12 = (u64 *)VAR_7->level1.addr;

 if (VAR_8->type == VAR_2) {
  VAR_11 = &VAR_9->sq_pbl;
  VAR_9->shadow = (dma_addr_t)VAR_12[VAR_15];

  if (VAR_6) {
   VAR_16 = FUNC_0(VAR_12, VAR_4->sq_pages, VAR_13);
   if (VAR_16)
    VAR_16 = FUNC_0(&VAR_12[VAR_4->sq_pages], VAR_4->rq_pages, VAR_13);
  }

  if (!VAR_16) {
   VAR_11->idx = VAR_7->level1.idx;
   VAR_11 = &VAR_9->rq_pbl;
   VAR_11->idx = VAR_7->level1.idx + VAR_4->sq_pages;
  } else {
   VAR_11->addr = VAR_12[0];
   VAR_11 = &VAR_9->rq_pbl;
   VAR_11->addr = VAR_12[VAR_4->sq_pages];
  }
 } else {
  VAR_11 = &VAR_10->cq_pbl;
  VAR_10->shadow = (dma_addr_t)VAR_12[VAR_15];

  if (VAR_6)
   VAR_16 = FUNC_0(VAR_12, VAR_4->cq_pages, VAR_13);

  if (!VAR_16)
   VAR_11->idx = VAR_7->level1.idx;
  else
   VAR_11->addr = VAR_12[0];
 }

 if (VAR_6 && VAR_16) {
  FUNC_1(VAR_3->pble_rsrc, VAR_7);
  VAR_5->pbl_allocated = 0;
 }

 return VAR_14;
}
