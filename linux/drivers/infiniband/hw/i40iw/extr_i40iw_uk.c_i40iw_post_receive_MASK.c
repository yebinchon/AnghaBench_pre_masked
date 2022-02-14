
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40iw_qp_uk {size_t max_rq_frag_cnt; int rwqe_polarity; int * rq_wrid_array; } ;
struct i40iw_post_rq_info {size_t num_sges; TYPE_1__* sg_list; int wr_id; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int* FUNC_1 (struct i40iw_qp_uk*,size_t*) ;
 int FUNC_2 (int*,size_t,TYPE_1__*) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(struct i40iw_qp_uk *VAR_4,
       struct i40iw_post_rq_info *VAR_5)
{
 u64 *VAR_6;
 u64 VAR_7;
 u32 VAR_8 = 0, VAR_9, VAR_10, VAR_11;

 if (VAR_4->max_rq_frag_cnt < VAR_5->num_sges)
  return VAR_2;
 for (VAR_10 = 0; VAR_10 < VAR_5->num_sges; VAR_10++)
  VAR_8 += VAR_5->sg_list[VAR_10].len;
 VAR_6 = FUNC_1(VAR_4, &VAR_9);
 if (!VAR_6)
  return VAR_3;

 VAR_4->rq_wrid_array[VAR_9] = VAR_5->wr_id;
 FUNC_3(VAR_6, 16, 0);

 VAR_7 = FUNC_0((VAR_5->num_sges > 1 ? (VAR_5->num_sges - 1) : 0),
         VAR_0) |
     FUNC_0(VAR_4->rwqe_polarity, VAR_1);

 FUNC_2(VAR_6, 0, VAR_5->sg_list);

 for (VAR_10 = 1, VAR_11 = 32; VAR_10 < VAR_5->num_sges; VAR_10++) {
  FUNC_2(VAR_6, VAR_11, &VAR_5->sg_list[VAR_10]);
  VAR_11 += 16;
 }

 FUNC_4();

 FUNC_3(VAR_6, 24, VAR_7);

 return 0;
}
