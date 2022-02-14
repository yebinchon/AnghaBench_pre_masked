
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct seq_file {int private; } ;
struct intel_uncore {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int VAR_0 ;
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






 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_16)
{
 struct drm_i915_private *VAR_17 = FUNC_2(VAR_16->private);
 struct intel_uncore *VAR_18 = &VAR_17->uncore;
 u32 VAR_19, VAR_20;
 u16 VAR_21;

 VAR_19 = FUNC_0(VAR_18, VAR_1);
 VAR_20 = FUNC_0(VAR_18, VAR_14);
 VAR_21 = FUNC_1(VAR_18, VAR_0);

 FUNC_3(VAR_16, "HD boost: %s\n", FUNC_5(VAR_19 & VAR_2));
 FUNC_3(VAR_16, "Boost freq: %d\n",
     (VAR_19 & VAR_3) >>
     VAR_4);
 FUNC_3(VAR_16, "HW control enabled: %s\n",
     FUNC_5(VAR_19 & VAR_10));
 FUNC_3(VAR_16, "SW control enabled: %s\n",
     FUNC_5(VAR_19 & VAR_12));
 FUNC_3(VAR_16, "Gated voltage change: %s\n",
     FUNC_5(VAR_19 & VAR_11));
 FUNC_3(VAR_16, "Starting frequency: P%d\n",
     (VAR_19 & VAR_8) >> VAR_9);
 FUNC_3(VAR_16, "Max P-state: P%d\n",
     (VAR_19 & VAR_5) >> VAR_6);
 FUNC_3(VAR_16, "Min P-state: P%d\n", (VAR_19 & VAR_7));
 FUNC_3(VAR_16, "RS1 VID: %d\n", (VAR_21 & 0x3f));
 FUNC_3(VAR_16, "RS2 VID: %d\n", ((VAR_21 >> 8) & 0x3f));
 FUNC_3(VAR_16, "Render standby enabled: %s\n",
     FUNC_5(!(VAR_20 & VAR_13)));
 FUNC_4(VAR_16, "Current RS state: ");
 switch (VAR_20 & VAR_15) {
 case 133:
  FUNC_4(VAR_16, "on\n");
  break;
 case 132:
  FUNC_4(VAR_16, "RC1\n");
  break;
 case 131:
  FUNC_4(VAR_16, "RC1E\n");
  break;
 case 130:
  FUNC_4(VAR_16, "RS1\n");
  break;
 case 129:
  FUNC_4(VAR_16, "RS2 (RC6)\n");
  break;
 case 128:
  FUNC_4(VAR_16, "RC3 (RC6+)\n");
  break;
 default:
  FUNC_4(VAR_16, "unknown\n");
  break;
 }

 return 0;
}
