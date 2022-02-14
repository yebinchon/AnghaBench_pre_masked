
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_ctl {int pending_flush_mask; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct dpu_hw_ctl*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct dpu_hw_ctl *VAR_1)
{
 FUNC_2(VAR_1->pending_flush_mask,
         FUNC_1(VAR_1));
 FUNC_0(&VAR_1->hw, VAR_0, VAR_1->pending_flush_mask);
}
