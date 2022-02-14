
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdchain {int dummy; } ;
struct smb_rq {struct mdchain sr_rp; } ;



int
FUNC_0(struct smb_rq *VAR_0, struct mdchain **VAR_1)
{
 *VAR_1 = &VAR_0->sr_rp;
 return 0;
}
