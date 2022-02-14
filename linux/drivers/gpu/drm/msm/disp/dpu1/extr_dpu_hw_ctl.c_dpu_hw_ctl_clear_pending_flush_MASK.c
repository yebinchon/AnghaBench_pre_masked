
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_ctl {int pending_flush_mask; } ;


 int FUNC_0 (struct dpu_hw_ctl*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct dpu_hw_ctl *VAR_0)
{
 FUNC_1(VAR_0->pending_flush_mask,
         FUNC_0(VAR_0));
 VAR_0->pending_flush_mask = 0x0;
}
