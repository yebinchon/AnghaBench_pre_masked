
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct msm_gpu *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3)
  FUNC_0("%s: zap-shader resume failed: %d\n",
   VAR_2->name, VAR_3);

 return VAR_3;
}
