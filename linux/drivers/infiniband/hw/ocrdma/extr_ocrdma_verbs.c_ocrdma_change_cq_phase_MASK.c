
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ocrdma_cqe {scalar_t__ flags_status_srcqpn; } ;
struct ocrdma_cq {int phase; scalar_t__ phase_change; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ocrdma_cq *VAR_1, struct ocrdma_cqe *VAR_2,
       u16 VAR_3)
{
 if (VAR_1->phase_change) {
  if (VAR_3 == 0)
   VAR_1->phase = (~VAR_1->phase & VAR_0);
 } else {

  VAR_2->flags_status_srcqpn = 0;
 }
}
