
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_pipeline {int dummy; } ;
struct komeda_kms_dev {int n_crtcs; struct komeda_crtc* crtcs; } ;
struct komeda_crtc {struct komeda_pipeline* slave; struct komeda_pipeline* master; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct komeda_kms_dev *VAR_0,
         struct komeda_pipeline *VAR_1)
{
 struct komeda_crtc *VAR_2;
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->n_crtcs; VAR_4++) {
  VAR_2 = &VAR_0->crtcs[VAR_4];

  if ((VAR_1 == VAR_2->master) || (VAR_1 == VAR_2->slave))
   VAR_3 |= FUNC_0(VAR_4);
 }

 return VAR_3;
}
