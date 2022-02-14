
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct msm_gpu*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct msm_gpu *VAR_1, uint32_t VAR_2,
  uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 while (VAR_2--) {
  FUNC_2(1);
  if ((FUNC_1(VAR_1, VAR_3) & VAR_4) == VAR_5)
   return 0;
  FUNC_0();
 }

 return -VAR_0;
}
