
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {struct msm_ringbuffer** rb; } ;



struct msm_ringbuffer *FUNC_0(struct msm_gpu *VAR_0)
{
 return VAR_0->rb[0];
}
