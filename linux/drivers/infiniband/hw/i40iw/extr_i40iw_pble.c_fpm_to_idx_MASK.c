
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i40iw_hmc_pble_rsrc {int fpm_base_addr; } ;



__attribute__((used)) static inline u32 FUNC_0(struct i40iw_hmc_pble_rsrc *VAR_0, u64 VAR_1)
{
 return (VAR_1 - (VAR_0->fpm_base_addr)) >> 3;
}
