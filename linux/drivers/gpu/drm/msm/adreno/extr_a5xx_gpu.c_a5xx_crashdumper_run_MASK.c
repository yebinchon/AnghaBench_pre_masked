
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a5xx_crashdumper {int iova; int ptr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct msm_gpu*,int ,int,int,int,int) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;
 int FUNC_3 (struct msm_gpu*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct msm_gpu *VAR_4,
  struct a5xx_crashdumper *VAR_5)
{
 u32 VAR_6;

 if (FUNC_0(VAR_5->ptr))
  return -VAR_0;

 FUNC_3(VAR_4, VAR_3,
  VAR_2, VAR_5->iova);

 FUNC_2(VAR_4, VAR_1, 1);

 return FUNC_1(VAR_4, VAR_1, VAR_6,
  VAR_6 & 0x04, 100, 10000);
}
