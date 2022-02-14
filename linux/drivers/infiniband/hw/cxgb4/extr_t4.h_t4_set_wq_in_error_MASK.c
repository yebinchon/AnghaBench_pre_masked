
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct t4_wq {int* qp_errp; scalar_t__* srqidxp; } ;



__attribute__((used)) static inline void FUNC_0(struct t4_wq *VAR_0, u32 VAR_1)
{
 if (VAR_1)
  *VAR_0->srqidxp = VAR_1;
 *VAR_0->qp_errp = 1;
}
