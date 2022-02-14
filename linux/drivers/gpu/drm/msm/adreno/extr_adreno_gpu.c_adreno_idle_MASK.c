
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct msm_ringbuffer {int id; } ;
struct msm_gpu {int name; } ;
struct adreno_gpu {int dummy; } ;


 int FUNC_0 (char*,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct adreno_gpu*,struct msm_ringbuffer*) ;
 scalar_t__ FUNC_2 (struct msm_ringbuffer*) ;
 int FUNC_3 (int) ;
 struct adreno_gpu* FUNC_4 (struct msm_gpu*) ;

bool FUNC_5(struct msm_gpu *VAR_0, struct msm_ringbuffer *VAR_1)
{
 struct adreno_gpu *VAR_2 = FUNC_4(VAR_0);
 uint32_t VAR_3 = FUNC_2(VAR_1);


 if (!FUNC_3(FUNC_1(VAR_2, VAR_1) == VAR_3))
  return 1;


 FUNC_0("%s: timeout waiting to drain ringbuffer %d rptr/wptr = %X/%X\n",
  VAR_0->name, VAR_1->id, FUNC_1(VAR_2, VAR_1), VAR_3);

 return 0;
}
