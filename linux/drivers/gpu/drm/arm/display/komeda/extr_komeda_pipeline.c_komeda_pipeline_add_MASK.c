
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline_funcs {int dummy; } ;
struct komeda_pipeline {int id; struct komeda_pipeline_funcs const* funcs; struct komeda_dev* mdev; } ;
struct komeda_dev {int n_pipelines; struct komeda_pipeline** pipelines; int dev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct komeda_pipeline* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct komeda_pipeline* FUNC_2 (int ,size_t,int ) ;

struct komeda_pipeline *
FUNC_3(struct komeda_dev *VAR_5, size_t VAR_6,
      const struct komeda_pipeline_funcs *VAR_7)
{
 struct komeda_pipeline *VAR_8;

 if (VAR_5->n_pipelines + 1 > VAR_4) {
  FUNC_0("Exceed max support %d pipelines.\n",
     VAR_4);
  return FUNC_1(-VAR_2);
 }

 if (VAR_6 < sizeof(*VAR_8)) {
  FUNC_0("Request pipeline size too small.\n");
  return FUNC_1(-VAR_0);
 }

 VAR_8 = FUNC_2(VAR_5->dev, VAR_6, VAR_3);
 if (!VAR_8)
  return FUNC_1(-VAR_1);

 VAR_8->mdev = VAR_5;
 VAR_8->id = VAR_5->n_pipelines;
 VAR_8->funcs = VAR_7;

 VAR_5->pipelines[VAR_5->n_pipelines] = VAR_8;
 VAR_5->n_pipelines++;

 return VAR_8;
}
