
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_pipeline {int id; } ;
struct komeda_kms_dev {size_t n_crtcs; struct komeda_crtc* crtcs; } ;
struct komeda_dev {int n_pipelines; struct komeda_pipeline** pipelines; } ;
struct komeda_crtc {TYPE_1__* slave; struct komeda_pipeline* master; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*,size_t,int ,char*) ;
 TYPE_1__* FUNC_1 (struct komeda_pipeline*) ;
 int FUNC_2 (char*,char*,...) ;

int FUNC_3(struct komeda_kms_dev *VAR_0,
      struct komeda_dev *VAR_1)
{
 struct komeda_crtc *VAR_2;
 struct komeda_pipeline *VAR_3;
 char VAR_4[16];
 int VAR_5;

 VAR_0->n_crtcs = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->n_pipelines; VAR_5++) {
  VAR_2 = &VAR_0->crtcs[VAR_0->n_crtcs];
  VAR_3 = VAR_1->pipelines[VAR_5];

  VAR_2->master = VAR_3;
  VAR_2->slave = FUNC_1(VAR_3);

  if (VAR_2->slave)
   FUNC_2(VAR_4, "pipe-%d", VAR_2->slave->id);
  else
   FUNC_2(VAR_4, "None");

  FUNC_0("CRTC-%d: master(pipe-%d) slave(%s).\n",
    VAR_0->n_crtcs, VAR_3->id, VAR_4);

  VAR_0->n_crtcs++;
 }

 return 0;
}
