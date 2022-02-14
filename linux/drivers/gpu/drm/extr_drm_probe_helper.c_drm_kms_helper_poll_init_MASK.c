
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int poll_enabled; int output_poll_work; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;

void FUNC_2(struct drm_device *VAR_1)
{
 FUNC_0(&VAR_1->mode_config.output_poll_work, VAR_0);
 VAR_1->mode_config.poll_enabled = 1;

 FUNC_1(VAR_1);
}
