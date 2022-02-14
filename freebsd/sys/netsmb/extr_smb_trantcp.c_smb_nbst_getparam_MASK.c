
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {int nbp_sndbuf; int nbp_rcvbuf; struct timespec nbp_timo; } ;


 int VAR_0 ;




__attribute__((used)) static int
FUNC_0(struct smb_vc *VAR_1, int VAR_2, void *VAR_3)
{
 struct nbpcb *VAR_4 = VAR_1->vc_tdata;

 switch (VAR_2) {
     case 129:
  *(int*)VAR_3 = VAR_4->nbp_sndbuf;
  break;
     case 130:
  *(int*)VAR_3 = VAR_4->nbp_rcvbuf;
  break;
     case 128:
  *(struct timespec*)VAR_3 = VAR_4->nbp_timo;
  break;
     default:
  return VAR_0;
 }
 return 0;
}
