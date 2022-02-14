
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_swqe {int priv; } ;
struct rvt_qp {int dummy; } ;


 int FUNC_0 (struct rvt_qp*,struct rvt_swqe*) ;

__attribute__((used)) static inline void FUNC_1(struct rvt_qp *VAR_0, struct rvt_swqe *VAR_1)
{
 if (!VAR_1->priv)
  return;
 FUNC_0(VAR_0, VAR_1);
}
