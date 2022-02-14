
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dram_info {scalar_t__ num_channels; int ranks; int is_16gb_dimm; int symmetric_memory; } ;
struct drm_i915_private {struct dram_info dram_info; } ;
struct dram_channel_info {int ranks; scalar_t__ is_16gb_dimm; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct dram_channel_info*,struct dram_channel_info*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct drm_i915_private*,struct dram_channel_info*,int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct drm_i915_private *VAR_3)
{
 struct dram_info *VAR_4 = &VAR_3->dram_info;
 struct dram_channel_info VAR_5 = {}, VAR_6 = {};
 u32 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_1);
 VAR_8 = FUNC_5(VAR_3, &VAR_5, 0, VAR_7);
 if (VAR_8 == 0)
  VAR_4->num_channels++;

 VAR_7 = FUNC_2(VAR_2);
 VAR_8 = FUNC_5(VAR_3, &VAR_6, 1, VAR_7);
 if (VAR_8 == 0)
  VAR_4->num_channels++;

 if (VAR_4->num_channels == 0) {
  FUNC_1("Number of memory channels is zero\n");
  return -VAR_0;
 }






 if (VAR_5 == 1 || VAR_6 == 1)
  VAR_4->ranks = 1;
 else
  VAR_4->ranks = FUNC_4(VAR_5, VAR_6);

 if (VAR_4->ranks == 0) {
  FUNC_1("couldn't get memory rank information\n");
  return -VAR_0;
 }

 VAR_4->is_16gb_dimm = VAR_5 || VAR_6;

 VAR_4->symmetric_memory = FUNC_3(&VAR_5, &VAR_6);

 FUNC_0("Memory configuration is symmetric? %s\n",
        FUNC_6(VAR_4->symmetric_memory));
 return 0;
}
