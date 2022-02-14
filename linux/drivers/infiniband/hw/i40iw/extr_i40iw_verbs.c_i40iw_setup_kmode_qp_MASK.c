
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40iw_sq_uk_wr_trk_info {int dummy; } ;
struct i40iw_qp_uk_init_info {int sq_size; int rq_size; int qp_id; TYPE_3__* rq; int shadow_area; TYPE_3__* sq; struct i40iw_sq_uk_wr_trk_info* sq_wrtrk_array; int * rq_wrid_array; int max_inline_data; int max_sq_frag_cnt; } ;
struct i40iw_qp_init_info {scalar_t__ rq_pa; scalar_t__ shadow_area_pa; int sq_pa; struct i40iw_qp_uk_init_info qp_uk_init_info; } ;
struct TYPE_8__ {int qp_num; } ;
struct i40iw_dma_mem {int pa; TYPE_3__* va; } ;
struct TYPE_5__ {scalar_t__ wrid_mem; struct i40iw_dma_mem dma_mem; } ;
struct i40iw_qp {TYPE_4__ ibqp; TYPE_1__ kqp; } ;
struct TYPE_6__ {int hw; } ;
struct i40iw_device {TYPE_2__ sc_dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_7__ {int elem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct i40iw_dma_mem*,int,int) ;
 int FUNC_1 (int,int,int*) ;
 int FUNC_2 (int,int,int*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct i40iw_sq_uk_wr_trk_info*) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct i40iw_device *VAR_5,
    struct i40iw_qp *VAR_6,
    struct i40iw_qp_init_info *VAR_7)
{
 struct i40iw_dma_mem *VAR_8 = &VAR_6->kqp.dma_mem;
 u32 VAR_9, VAR_10;
 u8 VAR_11;
 u32 VAR_12;
 enum i40iw_status_code VAR_13;
 struct i40iw_qp_uk_init_info *VAR_14 = &VAR_7->qp_uk_init_info;

 FUNC_3(VAR_14->max_sq_frag_cnt, VAR_14->max_inline_data, &VAR_11);
 VAR_13 = FUNC_2(VAR_14->sq_size, VAR_11, &VAR_9);
 if (VAR_13)
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_14->rq_size, VAR_2, &VAR_10);
 if (VAR_13)
  return -VAR_0;

 VAR_12 = VAR_9 * sizeof(struct i40iw_sq_uk_wr_trk_info) + (VAR_10 << 3);
 VAR_6->kqp.wrid_mem = FUNC_5(VAR_12, VAR_1);

 VAR_14->sq_wrtrk_array = (struct i40iw_sq_uk_wr_trk_info *)VAR_6->kqp.wrid_mem;
 if (!VAR_14->sq_wrtrk_array)
  return -VAR_0;

 VAR_14->rq_wrid_array = (u64 *)&VAR_14->sq_wrtrk_array[VAR_9];

 VAR_12 = (VAR_9 + VAR_10) * VAR_3;
 VAR_12 += (VAR_4 << 3);

 VAR_13 = FUNC_0(VAR_5->sc_dev.hw, VAR_8, VAR_12, 256);
 if (VAR_13) {
  FUNC_4(VAR_14->sq_wrtrk_array);
  VAR_14->sq_wrtrk_array = ((void*)0);
  return -VAR_0;
 }

 VAR_14->sq = VAR_8->va;
 VAR_7->sq_pa = VAR_8->pa;

 VAR_14->rq = &VAR_14->sq[VAR_9];
 VAR_7->rq_pa = VAR_7->sq_pa + (VAR_9 * VAR_3);

 VAR_14->shadow_area = VAR_14->rq[VAR_10].elem;
 VAR_7->shadow_area_pa = VAR_7->rq_pa + (VAR_10 * VAR_3);

 VAR_14->sq_size = VAR_9 >> VAR_11;
 VAR_14->rq_size = VAR_10 >> VAR_2;
 VAR_14->qp_id = VAR_6->ibqp.qp_num;
 return 0;
}
