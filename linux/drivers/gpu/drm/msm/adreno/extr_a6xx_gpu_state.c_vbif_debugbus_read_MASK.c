
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_gpu*,int ) ;
 int FUNC_1 (struct msm_gpu*,int,int) ;

__attribute__((used)) static int FUNC_2(struct msm_gpu *VAR_1, u32 VAR_2, u32 VAR_3,
  u32 VAR_4, int VAR_5, u32 *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_1, VAR_2, VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_1(VAR_1, VAR_3, VAR_7);
  VAR_6[VAR_7] = FUNC_0(VAR_1, VAR_0);
 }

 return VAR_5;
}
