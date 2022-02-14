
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct komeda_kms_dev {size_t n_crtcs; int * crtcs; } ;
struct komeda_events {int dummy; } ;
struct komeda_dev {TYPE_1__* funcs; } ;
struct drm_device {struct komeda_dev* dev_private; } ;
typedef int irqreturn_t ;
typedef int evts ;
struct TYPE_2__ {int (* irq_handler ) (struct komeda_dev*,struct komeda_events*) ;} ;


 int FUNC_0 (int *,struct komeda_events*) ;
 int FUNC_1 (struct komeda_events*,int ,int) ;
 int FUNC_2 (struct komeda_dev*,struct komeda_events*) ;
 struct komeda_kms_dev* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_0, void *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1;
 struct komeda_dev *VAR_3 = VAR_2->dev_private;
 struct komeda_kms_dev *VAR_4 = FUNC_3(VAR_2);
 struct komeda_events VAR_5;
 irqreturn_t VAR_6;
 u32 VAR_7;


 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_6 = VAR_3->funcs->irq_handler(VAR_3, &VAR_5);


 for (VAR_7 = 0; VAR_7 < VAR_4->n_crtcs; VAR_7++)
  FUNC_0(&VAR_4->crtcs[VAR_7], &VAR_5);

 return VAR_6;
}
