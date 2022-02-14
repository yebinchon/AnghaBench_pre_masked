
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_ringbuffer {TYPE_1__* memptrs; } ;
struct adreno_gpu {int dummy; } ;
struct TYPE_2__ {int rptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct adreno_gpu*,int ) ;
 scalar_t__ FUNC_1 (struct adreno_gpu*) ;

__attribute__((used)) static uint32_t FUNC_2(struct adreno_gpu *VAR_1,
  struct msm_ringbuffer *VAR_2)
{
 if (FUNC_1(VAR_1))
  return VAR_2->memptrs->rptr = FUNC_0(
   VAR_1, VAR_0);
 else
  return VAR_2->memptrs->rptr;
}
