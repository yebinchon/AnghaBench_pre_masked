
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cons; scalar_t__ prod; } ;
struct bnxt_qplib_q {TYPE_1__ hwq; scalar_t__ q_full_delta; } ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_1(struct bnxt_qplib_q *VAR_0)
{
 return FUNC_0((VAR_0->hwq.prod + VAR_0->q_full_delta),
         &VAR_0->hwq) == FUNC_0(VAR_0->hwq.cons,
       &VAR_0->hwq);
}
