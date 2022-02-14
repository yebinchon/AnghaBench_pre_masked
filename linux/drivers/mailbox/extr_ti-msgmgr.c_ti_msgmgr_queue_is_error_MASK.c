
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_queue_inst {int queue_state; } ;
struct ti_msgmgr_desc {int status_err_mask; int is_sproxy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct ti_msgmgr_desc *VAR_0,
         struct ti_queue_inst *VAR_1)
{
 u32 VAR_2;


 if (!VAR_0->is_sproxy)
  return 0;





 VAR_2 = FUNC_0(VAR_1->queue_state) & VAR_0->status_err_mask;

 return VAR_2 ? 1 : 0;
}
