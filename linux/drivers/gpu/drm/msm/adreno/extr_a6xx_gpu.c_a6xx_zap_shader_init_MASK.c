
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_gpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct msm_gpu *VAR_1)
{
 static bool VAR_2;
 int VAR_3;

 if (VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0);

 VAR_2 = !VAR_3;
 return VAR_3;
}
