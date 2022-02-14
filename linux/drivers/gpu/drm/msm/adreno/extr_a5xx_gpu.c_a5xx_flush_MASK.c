
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_ringbuffer {int lock; int next; int cur; } ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {struct msm_ringbuffer* cur_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct a5xx_gpu*) ;
 int FUNC_1 (struct msm_ringbuffer*) ;
 int FUNC_2 (struct msm_gpu*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct a5xx_gpu* FUNC_6 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_7 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_8(struct msm_gpu *VAR_1, struct msm_ringbuffer *VAR_2)
{
 struct adreno_gpu *VAR_3 = FUNC_7(VAR_1);
 struct a5xx_gpu *VAR_4 = FUNC_6(VAR_3);
 uint32_t VAR_5;
 unsigned long VAR_6;

 FUNC_4(&VAR_2->lock, VAR_6);


 VAR_2->cur = VAR_2->next;


 VAR_5 = FUNC_1(VAR_2);

 FUNC_5(&VAR_2->lock, VAR_6);


 FUNC_3();


 if (VAR_4->cur_ring == VAR_2 && !FUNC_0(VAR_4))
  FUNC_2(VAR_1, VAR_0, VAR_5);
}
