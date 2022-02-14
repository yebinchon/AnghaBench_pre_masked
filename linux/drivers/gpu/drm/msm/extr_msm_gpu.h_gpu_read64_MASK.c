
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_gpu {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u64 FUNC_1(struct msm_gpu *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u64 VAR_3;
 VAR_3 = (u64) FUNC_0(VAR_0->mmio + (VAR_1 << 2));
 VAR_3 |= ((u64) FUNC_0(VAR_0->mmio + (VAR_2 << 2)) << 32);

 return VAR_3;
}
