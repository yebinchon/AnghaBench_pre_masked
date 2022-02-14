
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int aspace; int dev; } ;
struct a6xx_crashdumper {int ptr; int bo; int iova; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct msm_gpu *VAR_2,
  struct a6xx_crashdumper *VAR_3)
{
 VAR_3->ptr = FUNC_2(VAR_2->dev,
  VAR_1, VAR_0, VAR_2->aspace,
  &VAR_3->bo, &VAR_3->iova);

 if (!FUNC_0(VAR_3->ptr))
  FUNC_3(VAR_3->bo, "crashdump");

 return FUNC_1(VAR_3->ptr);
}
