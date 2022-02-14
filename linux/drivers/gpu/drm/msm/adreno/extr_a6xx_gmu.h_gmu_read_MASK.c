
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct a6xx_gmu *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->mmio + (VAR_1 << 2));
}
