
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int,int ) ;
 int FUNC_1 (struct drm_i915_private*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0x8008, VAR_0);
 VAR_2 &= ~(0xFF << 24);
 VAR_2 |= (0x12 << 24);
 FUNC_1(VAR_1, 0x8008, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x2008, VAR_0);
 VAR_2 |= (1 << 11);
 FUNC_1(VAR_1, 0x2008, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x2108, VAR_0);
 VAR_2 |= (1 << 11);
 FUNC_1(VAR_1, 0x2108, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x206C, VAR_0);
 VAR_2 |= (1 << 24) | (1 << 21) | (1 << 18);
 FUNC_1(VAR_1, 0x206C, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x216C, VAR_0);
 VAR_2 |= (1 << 24) | (1 << 21) | (1 << 18);
 FUNC_1(VAR_1, 0x216C, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x2080, VAR_0);
 VAR_2 &= ~(7 << 13);
 VAR_2 |= (5 << 13);
 FUNC_1(VAR_1, 0x2080, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x2180, VAR_0);
 VAR_2 &= ~(7 << 13);
 VAR_2 |= (5 << 13);
 FUNC_1(VAR_1, 0x2180, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x208C, VAR_0);
 VAR_2 &= ~0xFF;
 VAR_2 |= 0x1C;
 FUNC_1(VAR_1, 0x208C, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x218C, VAR_0);
 VAR_2 &= ~0xFF;
 VAR_2 |= 0x1C;
 FUNC_1(VAR_1, 0x218C, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x2098, VAR_0);
 VAR_2 &= ~(0xFF << 16);
 VAR_2 |= (0x1C << 16);
 FUNC_1(VAR_1, 0x2098, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x2198, VAR_0);
 VAR_2 &= ~(0xFF << 16);
 VAR_2 |= (0x1C << 16);
 FUNC_1(VAR_1, 0x2198, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x20C4, VAR_0);
 VAR_2 |= (1 << 27);
 FUNC_1(VAR_1, 0x20C4, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x21C4, VAR_0);
 VAR_2 |= (1 << 27);
 FUNC_1(VAR_1, 0x21C4, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x20EC, VAR_0);
 VAR_2 &= ~(0xF << 28);
 VAR_2 |= (4 << 28);
 FUNC_1(VAR_1, 0x20EC, VAR_2, VAR_0);

 VAR_2 = FUNC_0(VAR_1, 0x21EC, VAR_0);
 VAR_2 &= ~(0xF << 28);
 VAR_2 |= (4 << 28);
 FUNC_1(VAR_1, 0x21EC, VAR_2, VAR_0);
}
