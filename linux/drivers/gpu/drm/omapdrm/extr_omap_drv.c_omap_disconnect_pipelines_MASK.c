
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct omap_drm_private {unsigned int num_pipes; int channels; struct omap_drm_pipeline* pipes; } ;
struct omap_drm_pipeline {TYPE_1__* output; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct TYPE_3__ {scalar_t__ panel; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0)
{
 struct omap_drm_private *VAR_1 = VAR_0->dev_private;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pipes; VAR_2++) {
  struct omap_drm_pipeline *VAR_3 = &VAR_1->pipes[VAR_2];

  if (VAR_3->output->panel)
   FUNC_0(VAR_3->output->panel);

  FUNC_2(((void*)0), VAR_3->output);

  FUNC_3(VAR_3->output);
  VAR_3->output = ((void*)0);
 }

 FUNC_1(&VAR_1->channels, 0, sizeof(VAR_1->channels));

 VAR_1->num_pipes = 0;
}
