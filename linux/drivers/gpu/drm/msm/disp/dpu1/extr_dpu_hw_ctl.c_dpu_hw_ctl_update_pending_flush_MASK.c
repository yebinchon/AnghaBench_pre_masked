
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_ctl {int pending_flush_mask; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct dpu_hw_ctl *VAR_0,
  u32 VAR_1)
{
 FUNC_0(VAR_1,
           VAR_0->pending_flush_mask);
 VAR_0->pending_flush_mask |= VAR_1;
}
