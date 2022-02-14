
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dram_dimm_info {int ranks; scalar_t__ width; } ;



__attribute__((used)) static int FUNC_0(const struct dram_dimm_info *VAR_0)
{
 return VAR_0->ranks * 64 / (VAR_0->width ?: 1);
}
