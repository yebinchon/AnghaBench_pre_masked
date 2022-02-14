
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct msm_fence_context {scalar_t__ completed_fence; } ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static inline bool FUNC_0(struct msm_fence_context *VAR_0, uint32_t VAR_1)
{
 return (int32_t)(VAR_0->completed_fence - VAR_1) >= 0;
}
