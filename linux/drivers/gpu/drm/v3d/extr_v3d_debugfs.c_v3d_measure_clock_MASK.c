
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct v3d_dev {int ver; int dev; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct seq_file*,char*,int,int,int) ;
 struct v3d_dev* FUNC_8 (struct drm_device*) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_10, void *VAR_11)
{
 struct drm_info_node *VAR_12 = (struct drm_info_node *)VAR_10->private;
 struct drm_device *VAR_13 = VAR_12->minor->dev;
 struct v3d_dev *VAR_14 = FUNC_8(VAR_13);
 uint32_t VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 1000;
 int VAR_18;

 VAR_18 = FUNC_4(VAR_14->dev);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_14->ver >= 40) {
  FUNC_1(VAR_16, VAR_9,
          FUNC_2(VAR_1,
          VAR_2));
  FUNC_1(VAR_16, VAR_7, 1);
  FUNC_1(VAR_16, VAR_8, 1);
 } else {
  FUNC_1(VAR_16, VAR_6,
          VAR_1);
  FUNC_1(VAR_16, VAR_3, 1);
  FUNC_1(VAR_16, VAR_4,
          VAR_5 |
          1);
 }
 FUNC_3(VAR_17);
 VAR_15 = FUNC_0(VAR_16, VAR_0);

 FUNC_7(VAR_10, "cycles: %d (%d.%d Mhz)\n",
     VAR_15,
     VAR_15 / (VAR_17 * 1000),
     (VAR_15 / (VAR_17 * 100)) % 10);

 FUNC_5(VAR_14->dev);
 FUNC_6(VAR_14->dev);

 return 0;
}
