
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; int so_fibnum; int so_cred; } ;
struct inpcbinfo {int ipi_zone; scalar_t__ ipi_gencnt; int ipi_count; int ipi_listhead; } ;
struct TYPE_4__ {int ro_flags; } ;
struct TYPE_3__ {int inc_fibnum; } ;
struct inpcb {int inp_cred; TYPE_2__ inp_route; int inp_refcount; scalar_t__ inp_gencnt; int inp_flags; int inp_vflag; TYPE_1__ inp_inc; struct socket* inp_socket; struct inpcbinfo* inp_pcbinfo; int inp_numa_domain; int inp_start_zero; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct inpcb*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inpcbinfo*) ;
 int VAR_4 ;
 int FUNC_2 (struct inpcbinfo*) ;
 int FUNC_3 (struct inpcbinfo*) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (struct inpcb*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct inpcbinfo VAR_10 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct inpcb*) ;
 int FUNC_11 (struct socket*,struct inpcb*) ;
 int FUNC_12 (struct inpcb*) ;
 int FUNC_13 (struct inpcb*,int ) ;
 int FUNC_14 (int *,int) ;
 struct inpcb* FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,struct inpcb*) ;

int
FUNC_17(struct socket *VAR_13, struct inpcbinfo *VAR_14)
{
 struct inpcb *VAR_15;
 int VAR_16;
 VAR_16 = 0;
 VAR_15 = FUNC_15(VAR_14->ipi_zone, VAR_6);
 if (VAR_15 == ((void*)0))
  return (VAR_1);
 FUNC_7(&VAR_15->inp_start_zero, VAR_12);



 VAR_15->inp_pcbinfo = VAR_14;
 VAR_15->inp_socket = VAR_13;
 VAR_15->inp_cred = FUNC_9(VAR_13->so_cred);
 VAR_15->inp_inc.inc_fibnum = VAR_13->so_fibnum;
 FUNC_5(VAR_15);
 FUNC_2(VAR_14);
 FUNC_0(VAR_14->ipi_listhead, VAR_15, VAR_11);
 VAR_14->ipi_count++;
 VAR_13->so_pcb = (caddr_t)VAR_15;




 VAR_15->inp_gencnt = ++VAR_14->ipi_gencnt;
 FUNC_14(&VAR_15->inp_refcount, 1);





 VAR_15->inp_route.ro_flags = VAR_7;
 FUNC_3(VAR_14);







 return (VAR_16);
}
