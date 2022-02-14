
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {struct msm_ringbuffer** rb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_1 (struct msm_ringbuffer*,int) ;
 int FUNC_2 (struct msm_gpu*,struct msm_ringbuffer*) ;
 scalar_t__ FUNC_3 (struct msm_gpu*,struct msm_ringbuffer*) ;

__attribute__((used)) static int FUNC_4(struct msm_gpu *VAR_2)
{
 struct msm_ringbuffer *VAR_3 = VAR_2->rb[0];

 FUNC_0(VAR_3, VAR_0, 8);

 FUNC_1(VAR_3, 0x0000002f);


 FUNC_1(VAR_3, 0x00000003);


 FUNC_1(VAR_3, 0x20000000);


 FUNC_1(VAR_3, 0x00000000);
 FUNC_1(VAR_3, 0x00000000);


 FUNC_1(VAR_3, 0x00000000);


 FUNC_1(VAR_3, 0x00000000);
 FUNC_1(VAR_3, 0x00000000);

 FUNC_2(VAR_2, VAR_3);
 return FUNC_3(VAR_2, VAR_3) ? 0 : -VAR_1;
}
