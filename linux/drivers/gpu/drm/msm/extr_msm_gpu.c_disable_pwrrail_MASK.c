
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {scalar_t__ gpu_reg; scalar_t__ gpu_cx; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct msm_gpu *VAR_0)
{
 if (VAR_0->gpu_cx)
  FUNC_0(VAR_0->gpu_cx);
 if (VAR_0->gpu_reg)
  FUNC_0(VAR_0->gpu_reg);
 return 0;
}
