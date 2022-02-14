
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline {int dummy; } ;
struct komeda_dev {int n_pipelines; struct komeda_pipeline** pipelines; } ;


 int FUNC_0 (struct komeda_pipeline*) ;
 int FUNC_1 (struct komeda_pipeline*) ;

int FUNC_2(struct komeda_dev *VAR_0)
{
 struct komeda_pipeline *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_pipelines; VAR_2++) {
  VAR_1 = VAR_0->pipelines[VAR_2];

  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }

 return 0;
}
