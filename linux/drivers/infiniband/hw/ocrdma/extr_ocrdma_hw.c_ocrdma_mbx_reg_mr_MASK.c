
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_reg_nsmr_rsp {int lrkey; } ;
struct ocrdma_reg_nsmr {int num_pbl_pdid; int flags_hpage_pbe_sz; int totlen_low; int fbo_low; int fbo_high; int va_loaddr; int va_hiaddr; TYPE_1__* pbl; void* totlen_high; int fr_mr; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_hw_mr {int num_pbls; int remote_wr; int remote_rd; int local_wr; int remote_atomic; int mw_bind; int pbe_size; int pbl_size; int len; int fbo; int va; int lkey; TYPE_2__* pbl_table; int fr_mr; } ;
struct ocrdma_dev {int dummy; } ;
struct TYPE_4__ {int pa; } ;
struct TYPE_3__ {int lo; void* hi; } ;


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
 int FUNC_0 (struct ocrdma_reg_nsmr*) ;
 struct ocrdma_reg_nsmr* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_11, struct ocrdma_hw_mr *VAR_12,
        u32 VAR_13, u32 VAR_14, u32 VAR_15, u32 VAR_16)
{
 int VAR_17 = -VAR_0;
 int VAR_18;
 struct ocrdma_reg_nsmr *VAR_19;
 struct ocrdma_reg_nsmr_rsp *VAR_20;

 VAR_19 = FUNC_1(VAR_1, sizeof(*VAR_19));
 if (!VAR_19)
  return -VAR_0;
 VAR_19->num_pbl_pdid =
     VAR_13 | (VAR_12->num_pbls << VAR_7);
 VAR_19->fr_mr = VAR_12->fr_mr;

 VAR_19->flags_hpage_pbe_sz |= (VAR_12->remote_wr <<
        VAR_10);
 VAR_19->flags_hpage_pbe_sz |= (VAR_12->remote_rd <<
        VAR_9);
 VAR_19->flags_hpage_pbe_sz |= (VAR_12->local_wr <<
        VAR_6);
 VAR_19->flags_hpage_pbe_sz |= (VAR_12->remote_atomic <<
        VAR_8);
 VAR_19->flags_hpage_pbe_sz |= (VAR_12->mw_bind <<
        VAR_3);
 VAR_19->flags_hpage_pbe_sz |= (VAR_16 << VAR_5);

 VAR_19->flags_hpage_pbe_sz |= (VAR_12->pbe_size / VAR_2);
 VAR_19->flags_hpage_pbe_sz |= (VAR_12->pbl_size / VAR_2) <<
     VAR_4;
 VAR_19->totlen_low = VAR_12->len;
 VAR_19->totlen_high = FUNC_3(VAR_12->len);
 VAR_19->fbo_low = (u32) (VAR_12->fbo & 0xffffffff);
 VAR_19->fbo_high = (u32) FUNC_3(VAR_12->fbo);
 VAR_19->va_loaddr = (u32) VAR_12->va;
 VAR_19->va_hiaddr = (u32) FUNC_3(VAR_12->va);

 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  VAR_19->pbl[VAR_18].lo = (u32) (VAR_12->pbl_table[VAR_18].pa & 0xffffffff);
  VAR_19->pbl[VAR_18].hi = FUNC_3(VAR_12->pbl_table[VAR_18].pa);
 }
 VAR_17 = FUNC_2(VAR_11, (struct ocrdma_mqe *)VAR_19);
 if (VAR_17)
  goto mbx_err;
 VAR_20 = (struct ocrdma_reg_nsmr_rsp *)VAR_19;
 VAR_12->lkey = VAR_20->lrkey;
mbx_err:
 FUNC_0(VAR_19);
 return VAR_17;
}
