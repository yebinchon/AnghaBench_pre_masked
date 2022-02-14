
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40iw_qp_uk {int swqe_polarity; TYPE_1__* sq_base; int sq_ring; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int * elem; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static u64 *FUNC_2(struct i40iw_qp_uk *VAR_0, u32 *VAR_1)
{
 u64 *VAR_2 = ((void*)0);
 enum i40iw_status_code VAR_3 = 0;

 *VAR_1 = FUNC_0(VAR_0->sq_ring);
 if (!*VAR_1)
  VAR_0->swqe_polarity = !VAR_0->swqe_polarity;
 FUNC_1(VAR_0->sq_ring, VAR_3);
 if (VAR_3)
  return VAR_2;
 VAR_2 = VAR_0->sq_base[*VAR_1].elem;

 return VAR_2;
}
