
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {void* nbp_selectid; } ;


 int VAR_0 ;


__attribute__((used)) static int
FUNC_0(struct smb_vc *VAR_1, int VAR_2, void *VAR_3)
{
 struct nbpcb *VAR_4 = VAR_1->vc_tdata;

 switch (VAR_2) {
     case 128:
  VAR_4->nbp_selectid = VAR_3;
  break;
     default:
  return VAR_0;
 }
 return 0;
}
