
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {scalar_t__ mb_count; } ;
struct smb_rq {TYPE_1__ sr_rq; int sr_bcount; } ;


 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(struct smb_rq *VAR_0)
{
 VAR_0->sr_bcount = FUNC_0(&VAR_0->sr_rq, sizeof(u_short));
 VAR_0->sr_rq.mb_count = 0;
}
