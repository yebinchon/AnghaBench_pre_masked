
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_hw_mr {int fr_mr; int remote_wr; int remote_rd; int local_wr; int remote_atomic; int num_pbls; int lkey; } ;
struct ocrdma_dev {int dummy; } ;
struct ocrdma_alloc_lkey_rsp {int lrkey; } ;
struct ocrdma_alloc_lkey {int pbl_sz_flags; int pdid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ocrdma_alloc_lkey*) ;
 struct ocrdma_alloc_lkey* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_3(struct ocrdma_dev *VAR_8, struct ocrdma_hw_mr *VAR_9,
     u32 VAR_10, int VAR_11)
{
 int VAR_12 = -VAR_0;
 struct ocrdma_alloc_lkey *VAR_13;
 struct ocrdma_alloc_lkey_rsp *VAR_14;

 VAR_13 = FUNC_1(VAR_7, sizeof(*VAR_13));
 if (!VAR_13)
  return VAR_12;
 VAR_13->pdid = VAR_10;
 VAR_13->pbl_sz_flags |= VAR_11;
 VAR_13->pbl_sz_flags |= (VAR_9->fr_mr << VAR_1);
 VAR_13->pbl_sz_flags |=
     (VAR_9->remote_wr << VAR_6);
 VAR_13->pbl_sz_flags |=
     (VAR_9->remote_rd << VAR_5);
 VAR_13->pbl_sz_flags |=
     (VAR_9->local_wr << VAR_2);
 VAR_13->pbl_sz_flags |=
     (VAR_9->remote_atomic << VAR_4);
 VAR_13->pbl_sz_flags |=
     (VAR_9->num_pbls << VAR_3);

 VAR_12 = FUNC_2(VAR_8, (struct ocrdma_mqe *)VAR_13);
 if (VAR_12)
  goto mbx_err;
 VAR_14 = (struct ocrdma_alloc_lkey_rsp *)VAR_13;
 VAR_9->lkey = VAR_14->lrkey;
mbx_err:
 FUNC_0(VAR_13);
 return VAR_12;
}
