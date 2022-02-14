
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct intel_panel {struct drm_display_mode* fixed_mode; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct seq_file*,int,struct drm_display_mode*) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct intel_panel *VAR_1)
{
 struct drm_display_mode *VAR_2 = VAR_1->fixed_mode;

 FUNC_1(VAR_0, "\tfixed mode:\n");
 FUNC_0(VAR_0, 2, VAR_2);
}
