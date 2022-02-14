
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_qp_hwq_info {int prod; int max_wr; } ;



__attribute__((used)) static inline void FUNC_0(struct qedr_qp_hwq_info *VAR_0)
{
 VAR_0->prod = (VAR_0->prod + 1) % VAR_0->max_wr;
}
