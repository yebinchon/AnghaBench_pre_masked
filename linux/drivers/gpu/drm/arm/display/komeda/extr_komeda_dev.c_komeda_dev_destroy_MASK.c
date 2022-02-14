
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_dev_funcs {int (* cleanup ) (struct komeda_dev*) ;int (* disconnect_iommu ) (struct komeda_dev*) ;} ;
struct komeda_dev {int n_pipelines; int * aclk; int * reg_base; int ** pipelines; int * iommu; struct komeda_dev_funcs* funcs; int debugfs_root; struct device* dev; } ;
struct device {int kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct device*,struct komeda_dev*) ;
 int FUNC_5 (struct komeda_dev*,int *) ;
 int VAR_0 ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct komeda_dev*) ;
 int FUNC_8 (struct komeda_dev*) ;
 int FUNC_9 (int *,int *) ;

void FUNC_10(struct komeda_dev *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 const struct komeda_dev_funcs *VAR_3 = VAR_1->funcs;
 int VAR_4;

 FUNC_9(&VAR_2->kobj, &VAR_0);





 if (VAR_1->iommu && VAR_1->funcs->disconnect_iommu)
  VAR_1->funcs->disconnect_iommu(VAR_1);
 VAR_1->iommu = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1->n_pipelines; VAR_4++) {
  FUNC_5(VAR_1, VAR_1->pipelines[VAR_4]);
  VAR_1->pipelines[VAR_4] = ((void*)0);
 }

 VAR_1->n_pipelines = 0;

 FUNC_6(VAR_2);

 if (VAR_3 && VAR_3->cleanup)
  VAR_3->cleanup(VAR_1);

 if (VAR_1->reg_base) {
  FUNC_3(VAR_2, VAR_1->reg_base);
  VAR_1->reg_base = ((void*)0);
 }

 if (VAR_1->aclk) {
  FUNC_0(VAR_1->aclk);
  FUNC_2(VAR_2, VAR_1->aclk);
  VAR_1->aclk = ((void*)0);
 }

 FUNC_4(VAR_2, VAR_1);
}
