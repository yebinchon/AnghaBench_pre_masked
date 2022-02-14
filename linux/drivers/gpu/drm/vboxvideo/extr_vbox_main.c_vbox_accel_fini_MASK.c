
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct vbox_private {unsigned int num_crtcs; int vbva_buffers; TYPE_1__ ddev; int guest_pool; int * vbva_info; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct vbox_private *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_crtcs; ++VAR_1)
  FUNC_1(&VAR_0->vbva_info[VAR_1], VAR_0->guest_pool, VAR_1);

 FUNC_0(VAR_0->ddev.pdev, VAR_0->vbva_buffers);
}
