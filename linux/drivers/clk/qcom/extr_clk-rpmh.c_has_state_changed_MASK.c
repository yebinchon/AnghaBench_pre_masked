
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_rpmh {int last_sent_aggr_state; int aggr_state; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct clk_rpmh *VAR_0, u32 VAR_1)
{
 return (VAR_0->last_sent_aggr_state & FUNC_0(VAR_1))
  != (VAR_0->aggr_state & FUNC_0(VAR_1));
}
