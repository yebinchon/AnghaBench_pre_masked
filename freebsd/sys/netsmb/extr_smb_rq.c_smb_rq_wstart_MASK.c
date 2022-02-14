
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_2__ {scalar_t__ mb_count; } ;
struct smb_rq {TYPE_1__ sr_rq; int sr_wcount; } ;


 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(struct smb_rq *VAR_0)
{
 VAR_0->sr_wcount = FUNC_0(&VAR_0->sr_rq, sizeof(u_int8_t));
 VAR_0->sr_rq.mb_count = 0;
}
