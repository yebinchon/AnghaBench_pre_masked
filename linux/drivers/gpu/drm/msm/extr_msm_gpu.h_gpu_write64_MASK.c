
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_gpu {scalar_t__ mmio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct msm_gpu *VAR_0, u32 VAR_1, u32 VAR_2, u64 VAR_3)
{

 FUNC_1(FUNC_0(VAR_3), VAR_0->mmio + (VAR_1 << 2));
 FUNC_1(FUNC_2(VAR_3), VAR_0->mmio + (VAR_2 << 2));
}
