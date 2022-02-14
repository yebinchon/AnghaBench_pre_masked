
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvt_qp_iter {int specials; void (* cb ) (struct rvt_qp*,int ) ;int v; struct rvt_dev_info* rdi; } ;
struct TYPE_2__ {int phys_port_cnt; } ;
struct rvt_dev_info {TYPE_1__ ibdev; } ;


 int VAR_0 ;
 struct rvt_qp_iter* FUNC_0 (int,int ) ;

struct rvt_qp_iter *FUNC_1(struct rvt_dev_info *VAR_1,
         u64 VAR_2,
         void (*VAR_3)(struct rvt_qp *VAR_4, u64 VAR_5))
{
 struct rvt_qp_iter *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->rdi = VAR_1;

 VAR_6->specials = VAR_1->ibdev.phys_port_cnt * 2;
 VAR_6->v = VAR_2;
 VAR_6->cb = VAR_3;

 return VAR_6;
}
