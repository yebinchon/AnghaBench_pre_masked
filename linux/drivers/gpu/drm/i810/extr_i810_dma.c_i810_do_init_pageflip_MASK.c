
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {int page_flipping; scalar_t__ current_page; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_3__ {scalar_t__ pf_current_page; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0)
{
 drm_i810_private_t *VAR_1 = VAR_0->dev_private;

 FUNC_0("\n");
 VAR_1->page_flipping = 1;
 VAR_1->current_page = 0;
 VAR_1->sarea_priv->pf_current_page = VAR_1->current_page;
}
