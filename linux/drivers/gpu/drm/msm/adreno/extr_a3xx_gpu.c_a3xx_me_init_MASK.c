
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {TYPE_1__* funcs; struct msm_ringbuffer** rb; } ;
struct TYPE_2__ {int (* flush ) (struct msm_gpu*,struct msm_ringbuffer*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_1 (struct msm_ringbuffer*,int) ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*,struct msm_ringbuffer*) ;

__attribute__((used)) static bool FUNC_4(struct msm_gpu *VAR_1)
{
 struct msm_ringbuffer *VAR_2 = VAR_1->rb[0];

 FUNC_0(VAR_2, VAR_0, 17);
 FUNC_1(VAR_2, 0x000003f7);
 FUNC_1(VAR_2, 0x00000000);
 FUNC_1(VAR_2, 0x00000000);
 FUNC_1(VAR_2, 0x00000000);
 FUNC_1(VAR_2, 0x00000080);
 FUNC_1(VAR_2, 0x00000100);
 FUNC_1(VAR_2, 0x00000180);
 FUNC_1(VAR_2, 0x00006600);
 FUNC_1(VAR_2, 0x00000150);
 FUNC_1(VAR_2, 0x0000014e);
 FUNC_1(VAR_2, 0x00000154);
 FUNC_1(VAR_2, 0x00000001);
 FUNC_1(VAR_2, 0x00000000);
 FUNC_1(VAR_2, 0x00000000);
 FUNC_1(VAR_2, 0x00000000);
 FUNC_1(VAR_2, 0x00000000);
 FUNC_1(VAR_2, 0x00000000);

 VAR_1->funcs->flush(VAR_1, VAR_2);
 return FUNC_2(VAR_1);
}
