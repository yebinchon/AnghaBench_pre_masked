
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int needs_hw_init; int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (struct msm_gpu*) ;

int FUNC_5(struct msm_gpu *VAR_0)
{
 int VAR_1;

 FUNC_0("%s", VAR_0->name);

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_4(VAR_0);

 VAR_0->needs_hw_init = 1;

 return 0;
}
