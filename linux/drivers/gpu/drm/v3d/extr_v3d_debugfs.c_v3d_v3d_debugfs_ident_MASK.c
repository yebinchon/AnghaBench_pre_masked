
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v3d_dev {int dev; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,char*,...) ;
 struct v3d_dev* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_27, void *VAR_28)
{
 struct drm_info_node *VAR_29 = (struct drm_info_node *)VAR_27->private;
 struct drm_device *VAR_30 = VAR_29->minor->dev;
 struct v3d_dev *VAR_31 = FUNC_7(VAR_30);
 u32 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 int VAR_37, VAR_38;

 VAR_37 = FUNC_3(VAR_31->dev);
 if (VAR_37 < 0)
  return VAR_37;

 VAR_32 = FUNC_2(VAR_4);
 VAR_33 = FUNC_2(VAR_5);
 VAR_34 = FUNC_2(VAR_13);
 VAR_35 = FUNC_2(VAR_16);
 VAR_36 = FUNC_1(VAR_33, VAR_6);

 FUNC_6(VAR_27, "Revision:   %d.%d.%d.%d\n",
     FUNC_1(VAR_33, VAR_8),
     FUNC_1(VAR_33, VAR_7),
     FUNC_1(VAR_35, VAR_18),
     FUNC_1(VAR_35, VAR_17));
 FUNC_6(VAR_27, "MMU:        %s\n",
     (VAR_34 & VAR_15) ? "yes" : "no");
 FUNC_6(VAR_27, "TFU:        %s\n",
     (VAR_33 & VAR_11) ? "yes" : "no");
 FUNC_6(VAR_27, "TSY:        %s\n",
     (VAR_33 & VAR_12) ? "yes" : "no");
 FUNC_6(VAR_27, "MSO:        %s\n",
     (VAR_33 & VAR_10) ? "yes" : "no");
 FUNC_6(VAR_27, "L3C:        %s (%dkb)\n",
     (VAR_33 & VAR_9) ? "yes" : "no",
     FUNC_1(VAR_34, VAR_14));

 for (VAR_38 = 0; VAR_38 < VAR_36; VAR_38++) {
  u32 VAR_39;
  u32 VAR_40, VAR_41, VAR_42;

  VAR_32 = FUNC_0(VAR_38, VAR_0);
  VAR_33 = FUNC_0(VAR_38, VAR_1);
  VAR_34 = FUNC_0(VAR_38, VAR_2);
  VAR_39 = FUNC_0(VAR_38, VAR_3);

  VAR_40 = FUNC_1(VAR_33, VAR_21);
  VAR_41 = FUNC_1(VAR_33, VAR_22);
  VAR_42 = FUNC_1(VAR_33, VAR_23);

  FUNC_6(VAR_27, "Core %d:\n", VAR_38);
  FUNC_6(VAR_27, "  Revision:     %d.%d\n",
      FUNC_1(VAR_32, VAR_19),
      FUNC_1(VAR_33, VAR_24));
  FUNC_6(VAR_27, "  Slices:       %d\n", VAR_40);
  FUNC_6(VAR_27, "  TMUs:         %d\n", VAR_40 * VAR_41);
  FUNC_6(VAR_27, "  QPUs:         %d\n", VAR_40 * VAR_42);
  FUNC_6(VAR_27, "  Semaphores:   %d\n",
      FUNC_1(VAR_33, VAR_20));
  FUNC_6(VAR_27, "  BCG int:      %d\n",
      (VAR_34 & VAR_25) != 0);
  FUNC_6(VAR_27, "  Override TMU: %d\n",
      (VAR_39 & VAR_26) != 0);
 }

 FUNC_4(VAR_31->dev);
 FUNC_5(VAR_31->dev);

 return 0;
}
