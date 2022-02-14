
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_ringbuffer {int next; int cur; } ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adreno_gpu*,int ,int ) ;
 int FUNC_1 (struct msm_ringbuffer*) ;
 int FUNC_2 () ;
 struct adreno_gpu* FUNC_3 (struct msm_gpu*) ;

void FUNC_4(struct msm_gpu *VAR_1, struct msm_ringbuffer *VAR_2)
{
 struct adreno_gpu *VAR_3 = FUNC_3(VAR_1);
 uint32_t VAR_4;


 VAR_2->cur = VAR_2->next;






 VAR_4 = FUNC_1(VAR_2);


 FUNC_2();

 FUNC_0(VAR_3, VAR_0, VAR_4);
}
