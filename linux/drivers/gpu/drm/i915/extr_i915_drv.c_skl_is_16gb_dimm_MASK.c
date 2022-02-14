
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dram_dimm_info {int size; } ;


 scalar_t__ FUNC_0 (struct dram_dimm_info const*) ;

__attribute__((used)) static bool
FUNC_1(const struct dram_dimm_info *VAR_0)
{

 return 8 * VAR_0->size / (FUNC_0(VAR_0) ?: 1) == 16;
}
