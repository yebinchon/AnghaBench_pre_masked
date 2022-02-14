
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline_state {int obj; struct komeda_pipeline* pipe; } ;
struct komeda_pipeline {int obj; } ;
struct komeda_kms_dev {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 int VAR_2 ;
 struct komeda_pipeline_state* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct komeda_kms_dev *VAR_3,
       struct komeda_pipeline *VAR_4)
{
 struct komeda_pipeline_state *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->pipe = VAR_4;
 FUNC_0(&VAR_3->base, &VAR_4->obj, &VAR_5->obj,
        &VAR_2);

 return 0;
}
