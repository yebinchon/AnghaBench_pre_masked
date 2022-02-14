
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv0367_state {TYPE_1__* cab_state; } ;
struct TYPE_2__ {scalar_t__ qamfec_status_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stv0367_state*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct stv0367_state *VAR_1)
{
 return FUNC_0(VAR_1,
  (VAR_1->cab_state->qamfec_status_reg ?
   VAR_1->cab_state->qamfec_status_reg :
   VAR_0));
}
