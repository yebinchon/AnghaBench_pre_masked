
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct zx_hdmi {scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct zx_hdmi *VAR_0, u16 VAR_1)
{
 return FUNC_0(VAR_0->mmio + VAR_1 * 4);
}
