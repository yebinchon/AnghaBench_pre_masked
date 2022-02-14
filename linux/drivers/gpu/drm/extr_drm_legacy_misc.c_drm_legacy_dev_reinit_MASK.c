
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lock; } ;
struct drm_device {scalar_t__ if_version; scalar_t__ last_context; scalar_t__ context_flag; TYPE_1__ sigdata; int struct_mutex; scalar_t__ irq_enabled; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct drm_device *VAR_0)
{
 if (VAR_0->irq_enabled)
  FUNC_1(VAR_0);

 FUNC_6(&VAR_0->struct_mutex);

 FUNC_2(VAR_0);

 FUNC_4(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);

 FUNC_7(&VAR_0->struct_mutex);

 VAR_0->sigdata.lock = ((void*)0);

 VAR_0->context_flag = 0;
 VAR_0->last_context = 0;
 VAR_0->if_version = 0;

 FUNC_0("lastclose completed\n");
}
