
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_5__ {int tag_off; int stag; } ;
struct i40iw_rdma_write {size_t num_lo_sges; TYPE_3__* lo_sg_list; TYPE_2__ rem_addr; } ;
struct i40iw_qp_uk {size_t max_sq_frag_cnt; int swqe_polarity; } ;
struct TYPE_4__ {struct i40iw_rdma_write rdma_write; } ;
struct i40iw_post_sq_info {int read_fence; int local_fence; int signaled; int wr_id; TYPE_1__ op; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_6__ {size_t len; } ;


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
 int VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (size_t,int *) ;
 int* FUNC_2 (struct i40iw_qp_uk*,size_t*,int ,size_t,int ) ;
 int FUNC_3 (struct i40iw_qp_uk*) ;
 int FUNC_4 (int*,size_t,TYPE_3__*) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(struct i40iw_qp_uk *VAR_14,
            struct i40iw_post_sq_info *VAR_15,
            bool VAR_16)
{
 u64 VAR_17;
 u64 *VAR_18;
 struct i40iw_rdma_write *VAR_19;
 u32 VAR_20, VAR_21;
 u32 VAR_22 = 0, VAR_23;
 enum i40iw_status_code VAR_24;
 bool VAR_25 = 0;
 u8 VAR_26;

 VAR_19 = &VAR_15->op.rdma_write;
 if (VAR_19->num_lo_sges > VAR_14->max_sq_frag_cnt)
  return VAR_10;

 for (VAR_20 = 0; VAR_20 < VAR_19->num_lo_sges; VAR_20++)
  VAR_22 += VAR_19->lo_sg_list[VAR_20].len;

 if (VAR_22 > VAR_13)
  return VAR_11;

 VAR_25 |= VAR_15->read_fence;

 VAR_24 = FUNC_1(VAR_19->num_lo_sges, &VAR_26);
 if (VAR_24)
  return VAR_24;

 VAR_18 = FUNC_2(VAR_14, &VAR_21, VAR_26, VAR_22, VAR_15->wr_id);
 if (!VAR_18)
  return VAR_12;
 FUNC_5(VAR_18, 16,
        FUNC_0(VAR_19->rem_addr.tag_off, VAR_1));
 if (!VAR_19->rem_addr.stag)
  return VAR_9;

 VAR_17 = FUNC_0(VAR_19->rem_addr.stag, VAR_5) |
   FUNC_0(VAR_8, VAR_3) |
   FUNC_0((VAR_19->num_lo_sges > 1 ? (VAR_19->num_lo_sges - 1) : 0), VAR_0) |
   FUNC_0(VAR_25, VAR_4) |
   FUNC_0(VAR_15->local_fence, VAR_2) |
   FUNC_0(VAR_15->signaled, VAR_6) |
   FUNC_0(VAR_14->swqe_polarity, VAR_7);

 FUNC_4(VAR_18, 0, VAR_19->lo_sg_list);

 for (VAR_20 = 1, VAR_23 = 32; VAR_20 < VAR_19->num_lo_sges; VAR_20++) {
  FUNC_4(VAR_18, VAR_23, &VAR_19->lo_sg_list[VAR_20]);
  VAR_23 += 16;
 }

 FUNC_6();

 FUNC_5(VAR_18, 24, VAR_17);

 if (VAR_16)
  FUNC_3(VAR_14);

 return 0;
}
