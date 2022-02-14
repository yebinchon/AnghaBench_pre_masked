
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int num_sge; } ;
struct rvt_swqe {scalar_t__ length; TYPE_1__ wr; int * sg_list; } ;
struct rvt_sge_state {scalar_t__ total_len; int num_sge; int * sg_list; int sge; } ;


 int FUNC_0 (struct rvt_sge_state*,scalar_t__,int) ;

u32 FUNC_1(struct rvt_sge_state *VAR_0, struct rvt_swqe *VAR_1, u32 VAR_2)
{
 VAR_0->sge = VAR_1->sg_list[0];
 VAR_0->sg_list = VAR_1->sg_list + 1;
 VAR_0->num_sge = VAR_1->wr.num_sge;
 VAR_0->total_len = VAR_1->length;
 FUNC_0(VAR_0, VAR_2, 0);
 return VAR_1->length - VAR_2;
}
