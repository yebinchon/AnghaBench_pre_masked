
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int name; int * rb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct msm_gpu *VAR_2)
{

 if (!FUNC_1(VAR_2, VAR_2->rb[0]))
  return 0;


 if (FUNC_3(!(FUNC_2(VAR_2, VAR_1) &
     VAR_0))) {
  FUNC_0("%s: timeout waiting for GPU to idle!\n", VAR_2->name);

  return 0;
 }

 return 1;
}
