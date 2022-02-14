
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct TYPE_2__ {int tv_sec; } ;
struct nbpcb {int nbp_rcvbuf; int nbp_sndbuf; struct smb_vc* nbp_vc; int nbp_state; TYPE_1__ nbp_timo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nbpcb*,int) ;
 struct nbpcb* FUNC_1 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct smb_vc *VAR_5, struct thread *VAR_6)
{
 struct nbpcb *VAR_7;

 VAR_7 = FUNC_1(sizeof *VAR_7, VAR_0, VAR_1);
 FUNC_0(VAR_7, sizeof *VAR_7);
 VAR_7->nbp_timo.tv_sec = 15;
 VAR_7->nbp_state = VAR_2;
 VAR_7->nbp_vc = VAR_5;
 VAR_7->nbp_sndbuf = VAR_4;
 VAR_7->nbp_rcvbuf = VAR_3;
 VAR_5->vc_tdata = VAR_7;
 return 0;
}
