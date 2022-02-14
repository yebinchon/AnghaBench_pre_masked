
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {struct drm_info_node* private; } ;
struct TYPE_5__ {int object; } ;
struct TYPE_6__ {TYPE_1__ device; } ;
struct nouveau_drm {TYPE_4__* dev; TYPE_2__ client; } ;
struct drm_info_node {TYPE_3__* minor; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct drm_info_node *VAR_3 = VAR_1->private;
 struct nouveau_drm *VAR_4 = FUNC_0(VAR_3->minor->dev);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4->dev->dev);
 if (VAR_5 < 0 && VAR_5 != -VAR_0)
  return VAR_5;

 FUNC_5(VAR_1, "0x%08x\n",
     FUNC_1(&VAR_4->client.device.object, 0x101000));

 FUNC_3(VAR_4->dev->dev);
 FUNC_4(VAR_4->dev->dev);

 return 0;
}
