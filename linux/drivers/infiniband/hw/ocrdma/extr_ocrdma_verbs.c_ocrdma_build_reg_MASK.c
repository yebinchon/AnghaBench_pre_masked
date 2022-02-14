
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocrdma_qp {int dummy; } ;
struct ocrdma_pbl {struct ocrdma_pbe* va; } ;
struct ocrdma_pbe {void* pa_hi; void* pa_lo; } ;
struct TYPE_4__ {int pbl_size; struct ocrdma_pbl* pbl_table; } ;
struct TYPE_3__ {int iova; int page_size; int length; } ;
struct ocrdma_mr {int* pages; int npages; TYPE_2__ hwmr; TYPE_1__ ibmr; } ;
struct ocrdma_hdr_wqe {int cw; int total_len; int lkey; int rsvd_lkey_flags; } ;
struct ocrdma_ewqe_fr {int va_lo; int fbo_lo; int num_sges; int size_sge; void* fbo_hi; void* va_hi; } ;
struct ib_reg_wr {int access; int key; int mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct ocrdma_mr* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_qp *VAR_12,
       struct ocrdma_hdr_wqe *VAR_13,
       const struct ib_reg_wr *VAR_14)
{
 u64 VAR_15;
 struct ocrdma_ewqe_fr *VAR_16 = (struct ocrdma_ewqe_fr *)(VAR_13 + 1);
 struct ocrdma_mr *VAR_17 = FUNC_2(VAR_14->mr);
 struct ocrdma_pbl *VAR_18 = VAR_17->hwmr.pbl_table;
 struct ocrdma_pbe *VAR_19;
 u32 VAR_20 = sizeof(*VAR_16) + sizeof(*VAR_13);
 int VAR_21 = 0, VAR_22;

 VAR_20 = FUNC_3(VAR_20, VAR_7);

 VAR_13->cw |= (VAR_3 << VAR_8);
 VAR_13->cw |= ((VAR_20 / VAR_10) << VAR_9);

 if (VAR_14->access & VAR_0)
  VAR_13->rsvd_lkey_flags |= VAR_4;
 if (VAR_14->access & VAR_2)
  VAR_13->rsvd_lkey_flags |= VAR_6;
 if (VAR_14->access & VAR_1)
  VAR_13->rsvd_lkey_flags |= VAR_5;
 VAR_13->lkey = VAR_14->key;
 VAR_13->total_len = VAR_17->ibmr.length;

 VAR_15 = VAR_17->ibmr.iova - VAR_17->pages[0];

 VAR_16->va_hi = FUNC_4(VAR_17->ibmr.iova);
 VAR_16->va_lo = (u32) (VAR_17->ibmr.iova & 0xffffffff);
 VAR_16->fbo_hi = FUNC_4(VAR_15);
 VAR_16->fbo_lo = (u32) VAR_15 & 0xffffffff;
 VAR_16->num_sges = VAR_17->npages;
 VAR_16->size_sge = FUNC_1(VAR_17->ibmr.page_size);

 VAR_19 = VAR_18->va;
 for (VAR_22 = 0; VAR_22 < VAR_17->npages; VAR_22++) {
  u64 VAR_23 = VAR_17->pages[VAR_22];

  VAR_19->pa_lo = FUNC_0((u32) (VAR_23 & VAR_11));
  VAR_19->pa_hi = FUNC_0((u32) FUNC_4(VAR_23));
  VAR_21 += 1;
  VAR_19++;




  if (VAR_21 == (VAR_17->hwmr.pbl_size/sizeof(u64))) {
   VAR_18++;
   VAR_19 = (struct ocrdma_pbe *)VAR_18->va;
  }
 }

 return 0;
}
