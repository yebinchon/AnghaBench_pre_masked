
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {scalar_t__* args; } ;
struct msm_iommu_dev {int ctx_list; } ;
struct msm_iommu_ctx_dev {int num_mids; scalar_t__* mids; int list; int of_node; } ;
struct TYPE_2__ {struct msm_iommu_ctx_dev* iommu; } ;
struct device {TYPE_1__ archdata; int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct msm_iommu_ctx_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1,
    struct msm_iommu_dev **VAR_2,
    struct of_phandle_args *VAR_3)
{
 struct msm_iommu_ctx_dev *VAR_4 = VAR_1->archdata.iommu;
 int VAR_5;

 if (FUNC_3(&(*VAR_2)->ctx_list)) {
  VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
  VAR_4->of_node = VAR_1->of_node;
  FUNC_2(&VAR_4->list, &(*VAR_2)->ctx_list);
  VAR_1->archdata.iommu = VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->num_mids; VAR_5++)
  if (VAR_4->mids[VAR_5] == VAR_3->args[0]) {
   FUNC_0(VAR_1, "Stream ID 0x%hx repeated; ignoring\n",
     VAR_5);
   return;
  }

 VAR_4->mids[VAR_4->num_mids++] = VAR_3->args[0];
}
