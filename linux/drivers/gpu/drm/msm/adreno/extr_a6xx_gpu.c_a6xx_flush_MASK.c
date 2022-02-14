
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_ringbuffer {int lock; int next; int cur; } ;
struct msm_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_ringbuffer*) ;
 int FUNC_1 (struct msm_gpu*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct msm_gpu *VAR_1, struct msm_ringbuffer *VAR_2)
{
 uint32_t VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);


 VAR_2->cur = VAR_2->next;


 VAR_3 = FUNC_0(VAR_2);

 FUNC_4(&VAR_2->lock, VAR_4);


 FUNC_2();

 FUNC_1(VAR_1, VAR_0, VAR_3);
}
