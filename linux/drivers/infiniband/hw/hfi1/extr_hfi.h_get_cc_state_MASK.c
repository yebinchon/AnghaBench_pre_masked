
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int cc_state; } ;
struct cc_state {int dummy; } ;


 struct cc_state* FUNC_0 (int ) ;

__attribute__((used)) static inline struct cc_state *FUNC_1(struct hfi1_pportdata *VAR_0)
{
 return FUNC_0(VAR_0->cc_state);
}
