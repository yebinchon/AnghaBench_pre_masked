
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_sge; } ;
struct rvt_swqe {struct rvt_sge* sg_list; TYPE_1__ wr; } ;
struct rvt_sge {int mr; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct rvt_swqe *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->wr.num_sge; VAR_2++) {
  struct rvt_sge *VAR_3 = &VAR_0->sg_list[VAR_2];

  if (FUNC_0(VAR_3->mr, VAR_1))
   return 1;
 }
 return 0;
}
