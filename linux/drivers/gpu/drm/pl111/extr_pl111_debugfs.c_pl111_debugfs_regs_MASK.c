
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct pl111_drm_dev_private {scalar_t__ regs; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {struct pl111_drm_dev_private* dev_private; } ;
struct TYPE_5__ {scalar_t__ reg; int name; } ;
struct TYPE_4__ {struct drm_device* dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*,int ,scalar_t__,int ) ;

int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct drm_info_node *VAR_3 = (struct drm_info_node *)VAR_1->private;
 struct drm_device *VAR_4 = VAR_3->minor->dev;
 struct pl111_drm_dev_private *VAR_5 = VAR_4->dev_private;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  FUNC_2(VAR_1, "%s (0x%04x): 0x%08x\n",
      VAR_0[VAR_6].name, VAR_0[VAR_6].reg,
      FUNC_1(VAR_5->regs + VAR_0[VAR_6].reg));
 }

 return 0;
}
