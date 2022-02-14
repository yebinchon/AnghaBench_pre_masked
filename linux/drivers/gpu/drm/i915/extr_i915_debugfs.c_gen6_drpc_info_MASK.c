
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int private; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct seq_file*,int *) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,char*,int ) ;
 int FUNC_7 (struct drm_i915_private*,int ,int*,int *) ;
 int FUNC_8 (struct seq_file*,char*,char*) ;
 int FUNC_9 (struct seq_file*,char*) ;
 int FUNC_10 (int,int ,int,int,int) ;
 char* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct seq_file *VAR_19)
{
 struct drm_i915_private *VAR_20 = FUNC_5(VAR_19->private);
 u32 VAR_21, VAR_22, VAR_23 = 0;
 u32 VAR_24 = 0, VAR_25 = 0;

 VAR_21 = FUNC_2(VAR_1);
 FUNC_10(0, VAR_1, VAR_21, 4, 1);

 VAR_22 = FUNC_1(VAR_7);
 if (FUNC_3(VAR_20) >= 9) {
  VAR_24 = FUNC_1(VAR_14);
  VAR_25 = FUNC_1(VAR_15);
 }

 if (FUNC_3(VAR_20) <= 7)
  FUNC_7(VAR_20, VAR_6,
           &VAR_23, ((void*)0));

 FUNC_8(VAR_19, "RC1e Enabled: %s\n",
     FUNC_11(VAR_22 & VAR_8));
 FUNC_8(VAR_19, "RC6 Enabled: %s\n",
     FUNC_11(VAR_22 & VAR_9));
 if (FUNC_3(VAR_20) >= 9) {
  FUNC_8(VAR_19, "Render Well Gating Enabled: %s\n",
   FUNC_11(VAR_24 & VAR_18));
  FUNC_8(VAR_19, "Media Well Gating Enabled: %s\n",
   FUNC_11(VAR_24 & VAR_13));
 }
 FUNC_8(VAR_19, "Deep RC6 Enabled: %s\n",
     FUNC_11(VAR_22 & VAR_10));
 FUNC_8(VAR_19, "Deepest RC6 Enabled: %s\n",
     FUNC_11(VAR_22 & VAR_11));
 FUNC_9(VAR_19, "Current RC state: ");
 switch (VAR_21 & VAR_12) {
 case 131:
  if (VAR_21 & VAR_0)
   FUNC_9(VAR_19, "Core Power Down\n");
  else
   FUNC_9(VAR_19, "on\n");
  break;
 case 130:
  FUNC_9(VAR_19, "RC3\n");
  break;
 case 129:
  FUNC_9(VAR_19, "RC6\n");
  break;
 case 128:
  FUNC_9(VAR_19, "RC7\n");
  break;
 default:
  FUNC_9(VAR_19, "Unknown\n");
  break;
 }

 FUNC_8(VAR_19, "Core Power Down: %s\n",
     FUNC_11(VAR_21 & VAR_0));
 if (FUNC_3(VAR_20) >= 9) {
  FUNC_8(VAR_19, "Render Power Well: %s\n",
   (VAR_25 &
    VAR_17) ? "Up" : "Down");
  FUNC_8(VAR_19, "Media Power Well: %s\n",
   (VAR_25 &
    VAR_16) ? "Up" : "Down");
 }


 FUNC_6(VAR_19, "RC6 \"Locked to RPn\" residency since boot:",
        VAR_3);
 FUNC_6(VAR_19, "RC6 residency since boot:", VAR_2);
 FUNC_6(VAR_19, "RC6+ residency since boot:", VAR_4);
 FUNC_6(VAR_19, "RC6++ residency since boot:", VAR_5);

 if (FUNC_3(VAR_20) <= 7) {
  FUNC_8(VAR_19, "RC6   voltage: %dmV\n",
      FUNC_0(((VAR_23 >> 0) & 0xff)));
  FUNC_8(VAR_19, "RC6+  voltage: %dmV\n",
      FUNC_0(((VAR_23 >> 8) & 0xff)));
  FUNC_8(VAR_19, "RC6++ voltage: %dmV\n",
      FUNC_0(((VAR_23 >> 16) & 0xff)));
 }

 return FUNC_4(VAR_19, ((void*)0));
}
