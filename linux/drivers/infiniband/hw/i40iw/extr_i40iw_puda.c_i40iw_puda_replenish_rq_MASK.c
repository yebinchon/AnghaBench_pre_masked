
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_puda_rsrc {scalar_t__ rxq_invalid_cnt; int rx_wqe_idx; int rq_size; } ;
struct i40iw_puda_buf {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 struct i40iw_puda_buf* FUNC_0 (struct i40iw_puda_rsrc*) ;
 int FUNC_1 (struct i40iw_puda_rsrc*,int,struct i40iw_puda_buf*,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_2(struct i40iw_puda_rsrc *VAR_1,
            bool VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_1->rxq_invalid_cnt;
 struct i40iw_puda_buf *VAR_5 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_0(VAR_1);
  if (!VAR_5)
   return VAR_0;
  FUNC_1(VAR_1, VAR_1->rx_wqe_idx, VAR_5,
     VAR_2);
  VAR_1->rx_wqe_idx =
      ((VAR_1->rx_wqe_idx + 1) % VAR_1->rq_size);
  VAR_1->rxq_invalid_cnt--;
 }
 return 0;
}
