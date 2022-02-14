
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i40iw_qp_uk_init_info {scalar_t__ max_sq_frag_cnt; scalar_t__ max_rq_frag_cnt; int sq_size; int rq_size; int abi_ver; int push_wqe; int push_db; int qp_id; int wqe_alloc_reg; int rq_wrid_array; int sq_wrtrk_array; int shadow_area; int rq; int sq; int max_inline_data; } ;
struct i40iw_qp_uk {int sq_size; scalar_t__ max_sq_frag_cnt; int swqe_polarity; int first_sq_wq; int swqe_polarity_deferred; int rq_size; scalar_t__ max_rq_frag_cnt; int rq_wqe_size; int rq_wqe_size_multiplier; int ops; int rq_ring; int use_srq; scalar_t__ rwqe_polarity; int initial_ring; int sq_ring; int push_wqe; int push_db; int qp_id; int wqe_alloc_reg; int rq_wrid_array; int sq_wrtrk_array; int shadow_area; int rq_base; int sq_base; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int*) ;
 int VAR_3 ;

enum i40iw_status_code FUNC_4(struct i40iw_qp_uk *VAR_4,
     struct i40iw_qp_uk_init_info *VAR_5)
{
 enum i40iw_status_code VAR_6 = 0;
 u32 VAR_7;
 u8 VAR_8, VAR_9;

 if (VAR_5->max_sq_frag_cnt > VAR_2)
  return VAR_0;

 if (VAR_5->max_rq_frag_cnt > VAR_2)
  return VAR_0;
 FUNC_3(VAR_5->max_sq_frag_cnt, VAR_5->max_inline_data, &VAR_8);

 VAR_4->sq_base = VAR_5->sq;
 VAR_4->rq_base = VAR_5->rq;
 VAR_4->shadow_area = VAR_5->shadow_area;
 VAR_4->sq_wrtrk_array = VAR_5->sq_wrtrk_array;
 VAR_4->rq_wrid_array = VAR_5->rq_wrid_array;

 VAR_4->wqe_alloc_reg = VAR_5->wqe_alloc_reg;
 VAR_4->qp_id = VAR_5->qp_id;

 VAR_4->sq_size = VAR_5->sq_size;
 VAR_4->push_db = VAR_5->push_db;
 VAR_4->push_wqe = VAR_5->push_wqe;

 VAR_4->max_sq_frag_cnt = VAR_5->max_sq_frag_cnt;
 VAR_7 = VAR_4->sq_size << VAR_8;

 FUNC_0(VAR_4->sq_ring, VAR_7);
 FUNC_0(VAR_4->initial_ring, VAR_7);
 FUNC_1(VAR_4->sq_ring, VAR_6);
 FUNC_2(VAR_4->sq_ring);
 FUNC_1(VAR_4->initial_ring, VAR_6);
 VAR_4->swqe_polarity = 1;
 VAR_4->first_sq_wq = 1;
 VAR_4->swqe_polarity_deferred = 1;
 VAR_4->rwqe_polarity = 0;

 if (!VAR_4->use_srq) {
  VAR_4->rq_size = VAR_5->rq_size;
  VAR_4->max_rq_frag_cnt = VAR_5->max_rq_frag_cnt;
  FUNC_0(VAR_4->rq_ring, VAR_4->rq_size);
  switch (VAR_5->abi_ver) {
  case 4:
   FUNC_3(VAR_5->max_rq_frag_cnt, 0, &VAR_9);
   break;
  case 5:
  default:
   VAR_9 = VAR_1;
   break;
  }
  VAR_4->rq_wqe_size = VAR_9;
  VAR_4->rq_wqe_size_multiplier = 4 << VAR_9;
 }
 VAR_4->ops = VAR_3;

 return VAR_6;
}
