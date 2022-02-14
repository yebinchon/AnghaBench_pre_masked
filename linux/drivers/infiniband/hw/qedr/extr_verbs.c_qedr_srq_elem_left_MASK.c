
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qedr_srq_hwq_info {scalar_t__ max_wr; scalar_t__ wr_cons_cnt; scalar_t__ wr_prod_cnt; } ;



__attribute__((used)) static u32 FUNC_0(struct qedr_srq_hwq_info *VAR_0)
{
 u32 VAR_1;





 VAR_1 = VAR_0->wr_prod_cnt - VAR_0->wr_cons_cnt;

 return VAR_0->max_wr - VAR_1;
}
