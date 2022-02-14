
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_fence {int ring; } ;
struct dma_fence {int dummy; } ;
 int FUNC_0 (int) ;
 struct radeon_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_2(struct dma_fence *VAR_0)
{
 struct radeon_fence *VAR_1 = FUNC_1(VAR_0);
 switch (VAR_1->ring) {
 case 130: return "radeon.gfx";
 case 135: return "radeon.cp1";
 case 134: return "radeon.cp2";
 case 132: return "radeon.dma";
 case 133: return "radeon.dma1";
 case 131: return "radeon.uvd";
 case 129: return "radeon.vce1";
 case 128: return "radeon.vce2";
 default: FUNC_0(1); return "radeon.unk";
 }
}
