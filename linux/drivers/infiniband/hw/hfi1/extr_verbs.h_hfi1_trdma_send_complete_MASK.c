
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_swqe {int dummy; } ;
struct rvt_qp {int dummy; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 int FUNC_0 (struct rvt_qp*,struct rvt_swqe*,int) ;
 int FUNC_1 (struct rvt_qp*,struct rvt_swqe*) ;

__attribute__((used)) static inline void FUNC_2(struct rvt_qp *VAR_0,
         struct rvt_swqe *VAR_1,
         enum ib_wc_status VAR_2)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
