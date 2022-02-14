
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc_stats {scalar_t__ overflow; scalar_t__ underflow; scalar_t__ vblank; scalar_t__ frames; } ;



__attribute__((used)) static void FUNC_0(struct tegra_dc_stats *VAR_0)
{
 VAR_0->frames = 0;
 VAR_0->vblank = 0;
 VAR_0->underflow = 0;
 VAR_0->overflow = 0;
}
