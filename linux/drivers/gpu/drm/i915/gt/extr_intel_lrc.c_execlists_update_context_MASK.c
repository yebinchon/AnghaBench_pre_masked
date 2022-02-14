
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_context {int lrc_desc; int * lrc_reg_state; } ;
struct i915_request {int tail; int ring; struct intel_context* hw_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static u64 FUNC_2(const struct i915_request *VAR_2)
{
 struct intel_context *VAR_3 = VAR_2->hw_context;
 u64 VAR_4;

 VAR_3->lrc_reg_state[VAR_1 + 1] =
  FUNC_0(VAR_2->ring, VAR_2->tail);
 FUNC_1();

 VAR_4 = VAR_3->lrc_desc;
 VAR_3->lrc_desc &= ~VAR_0;

 return VAR_4;
}
