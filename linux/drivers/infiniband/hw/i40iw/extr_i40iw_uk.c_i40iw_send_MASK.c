
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct i40iw_qp_uk {size_t max_sq_frag_cnt; int swqe_polarity; } ;
struct i40iw_post_send {size_t num_sges; TYPE_2__* sg_list; } ;
struct TYPE_3__ {struct i40iw_post_send send; } ;
struct i40iw_post_sq_info {int read_fence; int op_type; int local_fence; int signaled; int wr_id; TYPE_1__ op; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (size_t,int *) ;
 int* FUNC_2 (struct i40iw_qp_uk*,size_t*,int ,size_t,int ) ;
 int FUNC_3 (struct i40iw_qp_uk*) ;
 int FUNC_4 (int*,size_t,TYPE_2__*) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(struct i40iw_qp_uk *VAR_9,
      struct i40iw_post_sq_info *VAR_10,
      u32 VAR_11,
      bool VAR_12)
{
 u64 *VAR_13;
 struct i40iw_post_send *VAR_14;
 u64 VAR_15;
 u32 VAR_16, VAR_17, VAR_18 = 0, VAR_19;
 enum i40iw_status_code VAR_20;
 bool VAR_21 = 0;
 u8 VAR_22;

 VAR_14 = &VAR_10->op.send;
 if (VAR_9->max_sq_frag_cnt < VAR_14->num_sges)
  return VAR_7;

 for (VAR_16 = 0; VAR_16 < VAR_14->num_sges; VAR_16++)
  VAR_18 += VAR_14->sg_list[VAR_16].len;
 VAR_20 = FUNC_1(VAR_14->num_sges, &VAR_22);
 if (VAR_20)
  return VAR_20;

 VAR_13 = FUNC_2(VAR_9, &VAR_17, VAR_22, VAR_18, VAR_10->wr_id);
 if (!VAR_13)
  return VAR_8;

 VAR_21 |= VAR_10->read_fence;
 FUNC_5(VAR_13, 16, 0);
 VAR_15 = FUNC_0(VAR_11, VAR_4) |
   FUNC_0(VAR_10->op_type, VAR_2) |
   FUNC_0((VAR_14->num_sges > 1 ? (VAR_14->num_sges - 1) : 0),
         VAR_0) |
   FUNC_0(VAR_21, VAR_3) |
   FUNC_0(VAR_10->local_fence, VAR_1) |
   FUNC_0(VAR_10->signaled, VAR_5) |
   FUNC_0(VAR_9->swqe_polarity, VAR_6);

 FUNC_4(VAR_13, 0, VAR_14->sg_list);

 for (VAR_16 = 1, VAR_19 = 32; VAR_16 < VAR_14->num_sges; VAR_16++) {
  FUNC_4(VAR_13, VAR_19, &VAR_14->sg_list[VAR_16]);
  VAR_19 += 16;
 }

 FUNC_6();

 FUNC_5(VAR_13, 24, VAR_15);
 if (VAR_12)
  FUNC_3(VAR_9);

 return 0;
}
