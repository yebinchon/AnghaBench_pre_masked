
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_state; } ;
struct qib_pportdata {TYPE_1__ sdma_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct qib_pportdata *VAR_1)
{
 return VAR_1->sdma_state.current_state == VAR_0;
}
