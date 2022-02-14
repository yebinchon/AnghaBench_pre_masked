
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_ringbuffer {int next; int start; int gpu; } ;
struct adreno_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adreno_gpu*,struct msm_ringbuffer*) ;
 struct adreno_gpu* FUNC_1 (int ) ;

__attribute__((used)) static uint32_t FUNC_2(struct msm_ringbuffer *VAR_1)
{
 struct adreno_gpu *VAR_2 = FUNC_1(VAR_1->gpu);
 uint32_t VAR_3 = VAR_0 >> 2;

 uint32_t VAR_4 = VAR_1->next - VAR_1->start;
 uint32_t VAR_5 = FUNC_0(VAR_2, VAR_1);
 return (VAR_5 + (VAR_3 - 1) - VAR_4) % VAR_3;
}
