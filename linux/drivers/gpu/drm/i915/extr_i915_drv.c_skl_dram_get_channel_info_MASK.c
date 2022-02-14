
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {scalar_t__ size; int ranks; } ;
struct dram_channel_info {int ranks; int is_16gb_dimm; TYPE_1__ dimm_s; TYPE_1__ dimm_l; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,TYPE_1__*,int,char,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct drm_i915_private *VAR_1,
     struct dram_channel_info *VAR_2,
     int VAR_3, u32 VAR_4)
{
 FUNC_1(VAR_1, &VAR_2->dimm_l,
          VAR_3, 'L', VAR_4 & 0xffff);
 FUNC_1(VAR_1, &VAR_2->dimm_s,
          VAR_3, 'S', VAR_4 >> 16);

 if (VAR_2->dimm_l.size == 0 && VAR_2->dimm_s.size == 0) {
  FUNC_0("CH%u not populated\n", VAR_3);
  return -VAR_0;
 }

 if (VAR_2->dimm_l.ranks == 2 || VAR_2->dimm_s.ranks == 2)
  VAR_2->ranks = 2;
 else if (VAR_2->dimm_l.ranks == 1 && VAR_2->dimm_s.ranks == 1)
  VAR_2->ranks = 2;
 else
  VAR_2->ranks = 1;

 VAR_2->is_16gb_dimm =
  FUNC_2(&VAR_2->dimm_l) ||
  FUNC_2(&VAR_2->dimm_s);

 FUNC_0("CH%u ranks: %u, 16Gb DIMMs: %s\n",
        VAR_3, VAR_2->ranks, FUNC_3(VAR_2->is_16gb_dimm));

 return 0;
}
