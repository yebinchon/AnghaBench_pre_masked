
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dram_info {int bandwidth_kbps; int num_channels; int valid; int type; } ;
struct drm_i915_private {struct dram_info dram_info; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;

__attribute__((used)) static int
FUNC_7(struct drm_i915_private *VAR_4)
{
 struct dram_info *VAR_5 = &VAR_4->dram_info;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_5->type = FUNC_6(VAR_4);
 FUNC_1("DRAM type: %s\n", FUNC_4(VAR_5->type));

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_1);
 VAR_6 = FUNC_0((VAR_7 & VAR_3) *
        VAR_2, 1000);

 VAR_5->bandwidth_kbps = VAR_5->num_channels *
       VAR_6 * 8;

 if (VAR_5->bandwidth_kbps == 0) {
  FUNC_2("Couldn't get system memory bandwidth\n");
  return -VAR_0;
 }

 VAR_5->valid = 1;
 return 0;
}
