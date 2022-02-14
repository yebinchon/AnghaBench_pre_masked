
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ opcode; } ;
struct rvt_swqe {scalar_t__ length; TYPE_1__ wr; scalar_t__ priv; } ;
struct rvt_qp {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rvt_qp*,struct rvt_swqe*) ;

__attribute__((used)) static inline void FUNC_1(struct rvt_qp *VAR_3,
        struct rvt_swqe *VAR_4)
{
 if (VAR_4->priv &&
     (VAR_4->wr.opcode == VAR_0 ||
      VAR_4->wr.opcode == VAR_1) &&
     VAR_4->length >= VAR_2)
  FUNC_0(VAR_3, VAR_4);
}
