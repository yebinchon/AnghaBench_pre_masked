
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mr; } ;
struct rvt_sge_state {int num_sge; TYPE_2__* sg_list; TYPE_1__ sge; } ;
struct TYPE_4__ {int mr; } ;


 int FUNC_0 (int ,int ) ;

bool FUNC_1(struct rvt_sge_state *VAR_0, u32 VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;

 if (!VAR_0->num_sge)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0->sge.mr, VAR_1);

 for (VAR_2 = 0; !VAR_3 && VAR_2 < VAR_0->num_sge - 1; VAR_2++)
  VAR_3 = FUNC_0(VAR_0->sg_list[VAR_2].mr, VAR_1);
 return VAR_3;
}
