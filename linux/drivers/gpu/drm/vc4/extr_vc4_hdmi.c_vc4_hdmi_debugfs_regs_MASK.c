
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_hdmi {int hd_regset; int hdmi_regset; } ;
struct vc4_dev {struct vc4_hdmi* hdmi; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_printer {int dummy; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_printer*,int *) ;
 struct drm_printer FUNC_1 (struct seq_file*) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *)VAR_0->private;
 struct drm_device *VAR_3 = VAR_2->minor->dev;
 struct vc4_dev *VAR_4 = FUNC_2(VAR_3);
 struct vc4_hdmi *VAR_5 = VAR_4->hdmi;
 struct drm_printer VAR_6 = FUNC_1(VAR_0);

 FUNC_0(&VAR_6, &VAR_5->hdmi_regset);
 FUNC_0(&VAR_6, &VAR_5->hd_regset);

 return 0;
}
