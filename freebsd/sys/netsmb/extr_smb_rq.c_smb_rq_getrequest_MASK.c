
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbchain {int dummy; } ;
struct smb_rq {struct mbchain sr_rq; } ;



int
FUNC_0(struct smb_rq *VAR_0, struct mbchain **VAR_1)
{
 *VAR_1 = &VAR_0->sr_rq;
 return 0;
}
