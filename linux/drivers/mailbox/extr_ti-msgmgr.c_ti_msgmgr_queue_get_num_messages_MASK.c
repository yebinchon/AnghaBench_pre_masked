
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_queue_inst {int queue_state; } ;
struct ti_msgmgr_desc {int status_cnt_mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(const struct ti_msgmgr_desc *VAR_0,
     struct ti_queue_inst *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = VAR_0->status_cnt_mask;





 VAR_2 = FUNC_1(VAR_1->queue_state) & VAR_3;
 VAR_2 >>= FUNC_0(VAR_3);

 return VAR_2;
}
