
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcbport {int inp_refcount; int inp_flags; int inp_pcbinfo; int phd_epoch_ctx; int phd_pcblist; struct inpcbport* inp_phd; int * inp_ppcb; int * inp_socket; } ;
struct inpcb {int inp_refcount; int inp_flags; int inp_pcbinfo; int phd_epoch_ctx; int phd_pcblist; struct inpcb* inp_phd; int * inp_ppcb; int * inp_socket; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (struct inpcbport*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct inpcbport*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct inpcbport*) ;
 int FUNC_8 (struct inpcbport*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_9(struct inpcb *VAR_7)
{

 FUNC_4(VAR_7);
 VAR_7->inp_flags |= VAR_0;
 if (VAR_7->inp_flags & VAR_1) {
  struct inpcbport *VAR_8 = VAR_7->inp_phd;

  FUNC_2(VAR_7->inp_pcbinfo);
  FUNC_8(VAR_7);
  FUNC_1(VAR_7, VAR_2);
  FUNC_1(VAR_7, VAR_3);
  if (FUNC_0(&VAR_8->phd_pcblist) == ((void*)0)) {
   FUNC_1(VAR_8, VAR_6);
   FUNC_6(VAR_5, &VAR_8->phd_epoch_ctx, VAR_4);
  }
  FUNC_3(VAR_7->inp_pcbinfo);
  VAR_7->inp_flags &= ~VAR_1;



 }
}
