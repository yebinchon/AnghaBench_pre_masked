
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int private; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct seq_file*,int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;
 int FUNC_5 (struct seq_file*,char*,char*) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_3(VAR_7->private);
 u32 VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_4);
 VAR_9 = FUNC_1(VAR_0);

 FUNC_5(VAR_7, "RC6 Enabled: %s\n",
     FUNC_6(VAR_9 & (VAR_1 |
     FUNC_0(1))));
 FUNC_5(VAR_7, "Render Power Well: %s\n",
     (VAR_10 & VAR_3) ? "Up" : "Down");
 FUNC_5(VAR_7, "Media Power Well: %s\n",
     (VAR_10 & VAR_2) ? "Up" : "Down");

 FUNC_4(VAR_7, "Render RC6 residency since boot:", VAR_6);
 FUNC_4(VAR_7, "Media RC6 residency since boot:", VAR_5);

 return FUNC_2(VAR_7, ((void*)0));
}
