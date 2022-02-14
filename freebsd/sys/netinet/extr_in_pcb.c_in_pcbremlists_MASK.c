
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcbport {int inp_flags; int phd_epoch_ctx; int phd_pcblist; struct inpcbport* inp_phd; scalar_t__ inp_gencnt; struct inpcbinfo* inp_pcbinfo; } ;
struct inpcbinfo {int ipi_count; scalar_t__ ipi_gencnt; } ;
struct inpcb {int inp_flags; int phd_epoch_ctx; int phd_pcblist; struct inpcb* inp_phd; scalar_t__ inp_gencnt; struct inpcbinfo* inp_pcbinfo; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (struct inpcbport*,int ) ;
 int FUNC_2 (struct inpcbinfo*) ;
 int FUNC_3 (struct inpcbinfo*) ;
 int FUNC_4 (struct inpcbinfo*) ;
 int VAR_0 ;
 int FUNC_5 (struct inpcbinfo*) ;
 int FUNC_6 (struct inpcbport*) ;
 int FUNC_7 () ;
 struct inpcbinfo VAR_1 ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (struct inpcbport*) ;
 int FUNC_10 (struct inpcbport*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_11(struct inpcb *VAR_8)
{
 struct inpcbinfo *VAR_9 = VAR_8->inp_pcbinfo;
 FUNC_6(VAR_8);
 FUNC_5(VAR_9);

 VAR_8->inp_gencnt = ++VAR_9->ipi_gencnt;
 if (VAR_8->inp_flags & VAR_0) {
  struct inpcbport *VAR_10 = VAR_8->inp_phd;

  FUNC_2(VAR_9);


  FUNC_10(VAR_8);

  FUNC_1(VAR_8, VAR_2);
  FUNC_1(VAR_8, VAR_4);
  if (FUNC_0(&VAR_10->phd_pcblist) == ((void*)0)) {
   FUNC_1(VAR_10, VAR_7);
   FUNC_8(VAR_6, &VAR_10->phd_epoch_ctx, VAR_5);
  }
  FUNC_3(VAR_9);
  VAR_8->inp_flags &= ~VAR_0;
 }
 FUNC_1(VAR_8, VAR_3);
 VAR_9->ipi_count--;



}
