
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_qp_hwq_info {int gsi_cons; int max_wr; } ;



void FUNC_0(struct qedr_qp_hwq_info *VAR_0)
{
 VAR_0->gsi_cons = (VAR_0->gsi_cons + 1) % VAR_0->max_wr;
}
