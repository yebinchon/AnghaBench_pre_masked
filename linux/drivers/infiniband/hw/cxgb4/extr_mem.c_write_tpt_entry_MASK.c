
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct fw_ri_tpte {void* len_hi; void* dca_mwbcnt_pstag; void* va_lo_fbo; void* va_hi; void* len_lo; void* nosnoop_pbladdr; void* locread_to_qpid; void* valid_to_pdid; } ;
struct c4iw_wr_wait {int dummy; } ;
struct TYPE_11__ {scalar_t__ cur; scalar_t__ max; int fail; } ;
struct TYPE_12__ {int lock; TYPE_5__ stag; } ;
struct TYPE_10__ {int tpt_table; } ;
struct TYPE_9__ {TYPE_2__* vr; } ;
struct c4iw_rdev {TYPE_6__ stats; TYPE_4__ resource; TYPE_3__ lldi; } ;
typedef enum fw_ri_stag_type { ____Placeholder_fw_ri_stag_type } fw_ri_stag_type ;
typedef enum fw_ri_mem_perms { ____Placeholder_fw_ri_mem_perms } fw_ri_mem_perms ;
typedef int atomic_t ;
struct TYPE_7__ {int start; } ;
struct TYPE_8__ {TYPE_1__ stag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct c4iw_rdev*,int) ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct c4iw_rdev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 void* FUNC_13 (int) ;
 int FUNC_14 (struct fw_ri_tpte*) ;
 struct fw_ri_tpte* FUNC_15 (int,int ) ;
 int FUNC_16 (struct fw_ri_tpte*,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,int,int,int,int) ;
 int FUNC_20 (struct c4iw_rdev*,int,int,struct fw_ri_tpte*,struct sk_buff*,struct c4iw_wr_wait*) ;

__attribute__((used)) static int FUNC_21(struct c4iw_rdev *VAR_9, u32 VAR_10,
      u32 *VAR_11, u8 VAR_12, u32 VAR_13,
      enum fw_ri_stag_type VAR_14, enum fw_ri_mem_perms VAR_15,
      int VAR_16, u32 VAR_17, u64 VAR_18,
      u64 VAR_19, u8 VAR_20, u32 VAR_21, u32 VAR_22,
      struct sk_buff *VAR_23, struct c4iw_wr_wait *VAR_24)
{
 int VAR_25;
 struct fw_ri_tpte *VAR_26;
 u32 VAR_27;
 static atomic_t VAR_28;

 if (FUNC_10(VAR_9))
  return -VAR_0;

 VAR_26 = FUNC_15(sizeof(*VAR_26), VAR_7);
 if (!VAR_26)
  return -VAR_1;

 VAR_12 = VAR_12 > 0;
 VAR_27 = (*VAR_11) >> 8;

 if ((!VAR_10) && (*VAR_11 == VAR_8)) {
  VAR_27 = FUNC_11(&VAR_9->resource.tpt_table);
  if (!VAR_27) {
   FUNC_17(&VAR_9->stats.lock);
   VAR_9->stats.stag.fail++;
   FUNC_18(&VAR_9->stats.lock);
   FUNC_14(VAR_26);
   return -VAR_1;
  }
  FUNC_17(&VAR_9->stats.lock);
  VAR_9->stats.stag.cur += 32;
  if (VAR_9->stats.stag.cur > VAR_9->stats.stag.max)
   VAR_9->stats.stag.max = VAR_9->stats.stag.cur;
  FUNC_18(&VAR_9->stats.lock);
  *VAR_11 = (VAR_27 << 8) | (FUNC_9(&VAR_28) & 0xff);
 }
 FUNC_19("stag_state 0x%0x type 0x%0x pdid 0x%0x, stag_idx 0x%x\n",
   VAR_12, VAR_14, VAR_13, VAR_27);


 if (VAR_10)
  FUNC_16(VAR_26, 0, sizeof(*VAR_26));
 else {
  VAR_26->valid_to_pdid = FUNC_13(VAR_4 |
   FUNC_5((*VAR_11 & VAR_3)) |
   FUNC_6(VAR_12) |
   FUNC_7(VAR_14) | FUNC_2(VAR_13));
  VAR_26->locread_to_qpid = FUNC_13(FUNC_3(VAR_15) |
   (VAR_16 ? VAR_2 : 0) |
   FUNC_0((VAR_17 ? VAR_6 :
            VAR_5))|
   FUNC_4(VAR_20));
  VAR_26->nosnoop_pbladdr = !VAR_21 ? 0 : FUNC_13(
   FUNC_1(FUNC_8(VAR_9, VAR_22)>>3));
  VAR_26->len_lo = FUNC_13((u32)(VAR_19 & 0xffffffffUL));
  VAR_26->va_hi = FUNC_13((u32)(VAR_18 >> 32));
  VAR_26->va_lo_fbo = FUNC_13((u32)(VAR_18 & 0xffffffffUL));
  VAR_26->dca_mwbcnt_pstag = FUNC_13(0);
  VAR_26->len_hi = FUNC_13((u32)(VAR_19 >> 32));
 }
 VAR_25 = FUNC_20(VAR_9, VAR_27 +
    (VAR_9->lldi.vr->stag.start >> 5),
    sizeof(*VAR_26), VAR_26, VAR_23, VAR_24);

 if (VAR_10) {
  FUNC_12(&VAR_9->resource.tpt_table, VAR_27);
  FUNC_17(&VAR_9->stats.lock);
  VAR_9->stats.stag.cur -= 32;
  FUNC_18(&VAR_9->stats.lock);
 }
 FUNC_14(VAR_26);
 return VAR_25;
}
