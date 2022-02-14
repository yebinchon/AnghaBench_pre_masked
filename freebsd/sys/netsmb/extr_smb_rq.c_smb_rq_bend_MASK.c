
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mb_count; } ;
struct smb_rq {int * sr_bcount; TYPE_1__ sr_rq; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(struct smb_rq *VAR_0)
{
 int VAR_1;

 if (VAR_0->sr_bcount == ((void*)0)) {
  FUNC_0("no bcount\n");
  return;
 }
 VAR_1 = VAR_0->sr_rq.mb_count;
 if (VAR_1 > 0xffff)
  FUNC_0("byte count too large (%d)\n", VAR_1);
 FUNC_1(VAR_0->sr_bcount, VAR_1);
}
