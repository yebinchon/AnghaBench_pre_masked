
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_ringbuffer {int lock; } ;
struct msm_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_ringbuffer*) ;
 int FUNC_1 (struct msm_gpu*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct msm_gpu *VAR_1, struct msm_ringbuffer *VAR_2)
{
 unsigned long VAR_3;
 uint32_t VAR_4;

 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_3(&VAR_2->lock, VAR_3);

 FUNC_1(VAR_1, VAR_0, VAR_4);
}
