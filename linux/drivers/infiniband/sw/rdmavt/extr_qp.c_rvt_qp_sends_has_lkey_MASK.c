
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rvt_swqe {int dummy; } ;
struct rvt_qp {scalar_t__ s_last; scalar_t__ s_head; scalar_t__ s_size; scalar_t__ s_rdma_mr; } ;


 struct rvt_swqe* FUNC_0 (struct rvt_qp*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct rvt_swqe*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct rvt_qp *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->s_last;

 while (VAR_2 != VAR_0->s_head) {
  struct rvt_swqe *VAR_3 = FUNC_0(VAR_0, VAR_2);

  if (FUNC_2(VAR_3, VAR_1))
   return 1;

  if (++VAR_2 >= VAR_0->s_size)
   VAR_2 = 0;
 }
 if (VAR_0->s_rdma_mr)
  if (FUNC_1(VAR_0->s_rdma_mr, VAR_1))
   return 1;
 return 0;
}
