
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {int dummy; } ;
struct msm_gpu {TYPE_1__* funcs; struct msm_ringbuffer** rb; } ;
struct TYPE_2__ {int (* flush ) (struct msm_gpu*,struct msm_ringbuffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msm_ringbuffer*,int ,int) ;
 int FUNC_1 (struct msm_ringbuffer*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*,struct msm_ringbuffer*) ;

__attribute__((used)) static bool FUNC_4(struct msm_gpu *VAR_10)
{
 struct msm_ringbuffer *VAR_11 = VAR_10->rb[0];

 FUNC_0(VAR_11, VAR_0, 18);


 FUNC_1(VAR_11, 0x000003ff);

 FUNC_1(VAR_11, 0x00000000);

 FUNC_1(VAR_11, 0x00000000);

 FUNC_1(VAR_11, VAR_7 - 0x2000);
 FUNC_1(VAR_11, VAR_3 - 0x2000);
 FUNC_1(VAR_11, VAR_9 - 0x2000);
 FUNC_1(VAR_11, VAR_8 - 0x2000);
 FUNC_1(VAR_11, VAR_6 - 0x2000);
 FUNC_1(VAR_11, VAR_4 - 0x2000);
 FUNC_1(VAR_11, VAR_2 - 0x2000);
 FUNC_1(VAR_11, VAR_5 - 0x2000);



 FUNC_1(VAR_11, 0x80000180);

 FUNC_1(VAR_11, 0x00000001);


 FUNC_1(VAR_11, 0x00000000);

 FUNC_1(VAR_11, 0x00000000);

 FUNC_1(VAR_11, 0x200001f2);

 FUNC_1(VAR_11, 0x00000000);

 FUNC_1(VAR_11, 0x00000000);


 FUNC_0(VAR_11, VAR_1, 1);
 FUNC_1(VAR_11, 1);

 VAR_10->funcs->flush(VAR_10, VAR_11);
 return FUNC_2(VAR_10);
}
