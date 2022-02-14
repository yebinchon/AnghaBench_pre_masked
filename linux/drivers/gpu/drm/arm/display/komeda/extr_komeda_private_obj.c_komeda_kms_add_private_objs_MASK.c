
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline {int n_layers; int n_scalers; int ctrlr; int improc; scalar_t__ merger; scalar_t__ splitter; int compiz; int * scalers; scalar_t__ wb_layer; scalar_t__* layers; } ;
struct komeda_kms_dev {int dummy; } ;
struct komeda_dev {int n_pipelines; struct komeda_pipeline** pipelines; } ;


 int FUNC_0 (struct komeda_kms_dev*,int ) ;
 int FUNC_1 (struct komeda_kms_dev*,int ) ;
 int FUNC_2 (struct komeda_kms_dev*,scalar_t__) ;
 int FUNC_3 (struct komeda_kms_dev*,scalar_t__) ;
 int FUNC_4 (struct komeda_kms_dev*,struct komeda_pipeline*) ;
 int FUNC_5 (struct komeda_kms_dev*,int ) ;
 int FUNC_6 (struct komeda_kms_dev*,scalar_t__) ;
 int FUNC_7 (struct komeda_kms_dev*,int ) ;

int FUNC_8(struct komeda_kms_dev *VAR_0,
    struct komeda_dev *VAR_1)
{
 struct komeda_pipeline *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_pipelines; VAR_3++) {
  VAR_2 = VAR_1->pipelines[VAR_3];

  VAR_5 = FUNC_4(VAR_0, VAR_2);
  if (VAR_5)
   return VAR_5;

  for (VAR_4 = 0; VAR_4 < VAR_2->n_layers; VAR_4++) {
   VAR_5 = FUNC_2(VAR_0, VAR_2->layers[VAR_4]);
   if (VAR_5)
    return VAR_5;
  }

  if (VAR_2->wb_layer) {
   VAR_5 = FUNC_2(VAR_0, VAR_2->wb_layer);
   if (VAR_5)
    return VAR_5;
  }

  for (VAR_4 = 0; VAR_4 < VAR_2->n_scalers; VAR_4++) {
   VAR_5 = FUNC_5(VAR_0, VAR_2->scalers[VAR_4]);
   if (VAR_5)
    return VAR_5;
  }

  VAR_5 = FUNC_0(VAR_0, VAR_2->compiz);
  if (VAR_5)
   return VAR_5;

  if (VAR_2->splitter) {
   VAR_5 = FUNC_6(VAR_0, VAR_2->splitter);
   if (VAR_5)
    return VAR_5;
  }

  if (VAR_2->merger) {
   VAR_5 = FUNC_3(VAR_0, VAR_2->merger);
   if (VAR_5)
    return VAR_5;
  }

  VAR_5 = FUNC_1(VAR_0, VAR_2->improc);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_7(VAR_0, VAR_2->ctrlr);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
