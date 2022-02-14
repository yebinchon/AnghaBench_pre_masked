
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_gpu {int name; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int ) ;
 int FUNC_3 (struct msm_gpu*) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct msm_gpu *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 FUNC_0("%s: %08x", VAR_3->name, VAR_4);



 FUNC_2(VAR_3, VAR_2, VAR_4);

 FUNC_3(VAR_3);

 return VAR_0;
}
