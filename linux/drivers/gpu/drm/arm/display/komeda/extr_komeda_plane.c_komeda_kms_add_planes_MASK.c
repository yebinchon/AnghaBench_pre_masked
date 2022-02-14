
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline {int n_layers; int * layers; } ;
struct komeda_kms_dev {int dummy; } ;
struct komeda_dev {int n_pipelines; struct komeda_pipeline** pipelines; } ;


 int FUNC_0 (struct komeda_kms_dev*,int ) ;

int FUNC_1(struct komeda_kms_dev *VAR_0, struct komeda_dev *VAR_1)
{
 struct komeda_pipeline *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_pipelines; VAR_3++) {
  VAR_2 = VAR_1->pipelines[VAR_3];

  for (VAR_4 = 0; VAR_4 < VAR_2->n_layers; VAR_4++) {
   VAR_5 = FUNC_0(VAR_0, VAR_2->layers[VAR_4]);
   if (VAR_5)
    return VAR_5;
  }
 }

 return 0;
}
