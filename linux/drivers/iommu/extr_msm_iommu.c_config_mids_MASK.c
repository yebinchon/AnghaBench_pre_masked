
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_iommu_dev {int base; } ;
struct msm_iommu_ctx_dev {int num_mids; int* mids; int num; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void FUNC_7(struct msm_iommu_dev *VAR_0,
   struct msm_iommu_ctx_dev *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_mids; VAR_4++) {
  VAR_2 = VAR_1->mids[VAR_4];
  VAR_3 = VAR_1->num;

  FUNC_4(VAR_0->base, VAR_2, 0);
  FUNC_0(VAR_0->base, VAR_3, 0);


  FUNC_6(VAR_0->base, VAR_2, 0);


  FUNC_1(VAR_0->base, VAR_2, VAR_3);


  FUNC_2(VAR_0->base, VAR_3, 0);


  FUNC_3(VAR_0->base, VAR_3, VAR_3);


  FUNC_5(VAR_0->base, VAR_2, 3);
 }
}
