
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vc4_dev {int dummy; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct seq_file*,char*,int) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct vc4_dev*) ;
 int FUNC_5 (struct vc4_dev*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_6, void *VAR_7)
{
 struct drm_info_node *VAR_8 = (struct drm_info_node *)VAR_6->private;
 struct drm_device *VAR_9 = VAR_8->minor->dev;
 struct vc4_dev *VAR_10 = FUNC_3(VAR_9);
 int VAR_11 = FUNC_4(VAR_10);

 if (VAR_11 == 0) {
  uint32_t VAR_12 = FUNC_0(VAR_0);
  uint32_t VAR_13 = FUNC_1(VAR_12, VAR_2);
  uint32_t VAR_14 = FUNC_1(VAR_12, VAR_5);
  uint32_t VAR_15 = FUNC_1(VAR_12, VAR_3);

  FUNC_2(VAR_6, "Revision:   %d\n",
      FUNC_1(VAR_12, VAR_4));
  FUNC_2(VAR_6, "Slices:     %d\n", VAR_13);
  FUNC_2(VAR_6, "TMUs:       %d\n", VAR_13 * VAR_14);
  FUNC_2(VAR_6, "QPUs:       %d\n", VAR_13 * VAR_15);
  FUNC_2(VAR_6, "Semaphores: %d\n",
      FUNC_1(VAR_12, VAR_1));
  FUNC_5(VAR_10);
 }

 return 0;
}
