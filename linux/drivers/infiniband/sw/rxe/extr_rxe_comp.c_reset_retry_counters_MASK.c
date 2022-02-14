
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ started_retry; int rnr_retry; int retry_cnt; } ;
struct TYPE_3__ {int rnr_retry; int retry_cnt; } ;
struct rxe_qp {TYPE_2__ comp; TYPE_1__ attr; } ;



__attribute__((used)) static inline void FUNC_0(struct rxe_qp *VAR_0)
{
 VAR_0->comp.retry_cnt = VAR_0->attr.retry_cnt;
 VAR_0->comp.rnr_retry = VAR_0->attr.rnr_retry;
 VAR_0->comp.started_retry = 0;
}
