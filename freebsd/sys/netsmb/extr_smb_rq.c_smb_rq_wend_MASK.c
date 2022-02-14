
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mb_count; } ;
struct smb_rq {int* sr_wcount; TYPE_1__ sr_rq; } ;


 int FUNC_0 (char*) ;

void
FUNC_1(struct smb_rq *VAR_0)
{
 if (VAR_0->sr_wcount == ((void*)0)) {
  FUNC_0("no wcount\n");
  return;
 }
 if (VAR_0->sr_rq.mb_count & 1)
  FUNC_0("odd word count\n");
 *VAR_0->sr_wcount = VAR_0->sr_rq.mb_count / 2;
}
