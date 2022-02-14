
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_ld_props {int default_cache_policy; } ;



__attribute__((used)) static void
FUNC_0(struct mfi_ld_props *VAR_0, uint8_t VAR_1,
    uint8_t VAR_2)
{

 VAR_0->default_cache_policy &= ~VAR_2;
 VAR_0->default_cache_policy |= VAR_1;
}
