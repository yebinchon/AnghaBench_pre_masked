
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct msm_gpu {int num_perfcntrs; scalar_t__* last_cntrs; TYPE_1__* perfcntrs; } ;
struct TYPE_2__ {int sample_reg; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct msm_gpu *VAR_0, uint32_t VAR_1, uint32_t *VAR_2)
{
 uint32_t VAR_3[FUNC_0(VAR_0->last_cntrs)];
 int VAR_4, VAR_5 = FUNC_2(VAR_1, VAR_0->num_perfcntrs);


 for (VAR_4 = 0; VAR_4 < VAR_0->num_perfcntrs; VAR_4++)
  VAR_3[VAR_4] = FUNC_1(VAR_0, VAR_0->perfcntrs[VAR_4].sample_reg);


 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_2[VAR_4] = VAR_3[VAR_4] - VAR_0->last_cntrs[VAR_4];


 for (VAR_4 = 0; VAR_4 < VAR_0->num_perfcntrs; VAR_4++)
  VAR_0->last_cntrs[VAR_4] = VAR_3[VAR_4];

 return VAR_5;
}
