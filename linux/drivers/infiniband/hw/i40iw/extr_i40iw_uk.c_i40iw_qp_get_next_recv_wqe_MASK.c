
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct i40iw_qp_uk {int rwqe_polarity; int rq_wqe_size_multiplier; TYPE_1__* rq_base; int rq_ring; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int * elem; } ;


 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int ) ;

u64 *FUNC_2(struct i40iw_qp_uk *VAR_0, u32 *VAR_1)
{
 u64 *VAR_2 = ((void*)0);
 enum i40iw_status_code VAR_3;

 if (FUNC_1(VAR_0->rq_ring))
  return ((void*)0);

 FUNC_0(VAR_0->rq_ring, *VAR_1, VAR_3);
 if (VAR_3)
  return ((void*)0);
 if (!*VAR_1)
  VAR_0->rwqe_polarity = !VAR_0->rwqe_polarity;

 VAR_2 = VAR_0->rq_base[*VAR_1 * (VAR_0->rq_wqe_size_multiplier >> 2)].elem;

 return VAR_2;
}
