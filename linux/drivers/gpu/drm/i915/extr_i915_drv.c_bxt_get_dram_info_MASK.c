
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dram_info {int bandwidth_kbps; int type; int ranks; int valid; int num_channels; } ;
struct drm_i915_private {struct dram_info dram_info; } ;
struct dram_dimm_info {int ranks; int width; int size; } ;
typedef enum intel_dram_type { ____Placeholder_intel_dram_type } intel_dram_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int ,int ,int,int ) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dram_dimm_info*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct drm_i915_private *VAR_8)
{
 struct dram_info *VAR_9 = &VAR_8->dram_info;
 u32 VAR_10;
 u32 VAR_11, VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_12 = FUNC_4(VAR_4);
 VAR_11 = FUNC_1((VAR_12 & VAR_5) *
        VAR_3, 1000);

 VAR_10 = VAR_12 & VAR_0;
 VAR_13 = FUNC_8(VAR_10);


 VAR_9->bandwidth_kbps = (VAR_11 * VAR_13 * 4);

 if (VAR_9->bandwidth_kbps == 0) {
  FUNC_3("Couldn't get system memory bandwidth\n");
  return -VAR_6;
 }




 for (VAR_14 = VAR_2; VAR_14 <= VAR_1; VAR_14++) {
  struct dram_dimm_info VAR_15;
  enum intel_dram_type VAR_16;

  VAR_12 = FUNC_4(FUNC_0(VAR_14));
  if (VAR_12 == 0xFFFFFFFF)
   continue;

  VAR_9->num_channels++;

  FUNC_6(&VAR_15, VAR_12);
  VAR_16 = FUNC_7(VAR_12);

  FUNC_5(VAR_16 != VAR_7 &&
   VAR_9->type != VAR_7 &&
   VAR_9->type != VAR_16);

  FUNC_2("CH%u DIMM size: %u GB, width: X%u, ranks: %u, type: %s\n",
         VAR_14 - VAR_2,
         VAR_15.size, VAR_15.width, VAR_15.ranks,
         FUNC_9(VAR_16));






  if (VAR_9->ranks == 0)
   VAR_9->ranks = VAR_15.ranks;
  else if (VAR_15.ranks == 1)
   VAR_9->ranks = 1;

  if (VAR_16 != VAR_7)
   VAR_9->type = VAR_16;
 }

 if (VAR_9->type == VAR_7 ||
     VAR_9->ranks == 0) {
  FUNC_3("couldn't get memory information\n");
  return -VAR_6;
 }

 VAR_9->valid = 1;
 return 0;
}
