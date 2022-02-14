
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct socket {scalar_t__ so_pcb; TYPE_1__* so_proto; int so_type; } ;
struct proc {int dummy; } ;
struct TYPE_9__ {int so_lport; int so_rport; int so_laddr; int so_raddr; int so_protocol; int so_domain; int so_type; } ;
struct TYPE_10__ {TYPE_4__ ar_arg_sockinfo; } ;
struct kaudit_record {TYPE_5__ k_ar; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct inpcb {int inp_lport; int inp_fport; TYPE_3__ inp_laddr; TYPE_2__ inp_faddr; } ;
struct file {int f_type; scalar_t__ f_data; struct vnode* f_vnode; } ;
struct TYPE_6__ {int pr_protocol; } ;


 int FUNC_0 (struct kaudit_record*,int ) ;
 int VAR_0 ;



 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct vnode*,int ) ;
 int FUNC_8 (struct vnode*) ;
 struct kaudit_record* FUNC_9 () ;
 int FUNC_10 (struct vnode*,int) ;

void
FUNC_11(struct proc *VAR_4, struct file *VAR_5)
{
 struct kaudit_record *VAR_6;
 struct socket *VAR_7;
 struct inpcb *VAR_8;
 struct vnode *VAR_9;

 VAR_6 = FUNC_9();
 if (VAR_6 == ((void*)0))
  return;

 switch (VAR_5->f_type) {
 case 128:
 case 130:



  VAR_9 = VAR_5->f_vnode;
  FUNC_10(VAR_9, VAR_2 | VAR_1);
  FUNC_8(VAR_9);
  FUNC_7(VAR_9, 0);
  break;

 case 129:
  VAR_7 = (struct socket *)VAR_5->f_data;
  if (FUNC_1(VAR_7, VAR_3)) {
   FUNC_5(VAR_7);
   VAR_6->k_ar.ar_arg_sockinfo.so_type =
       VAR_7->so_type;
   VAR_6->k_ar.ar_arg_sockinfo.so_domain =
       FUNC_4(VAR_7);
   VAR_6->k_ar.ar_arg_sockinfo.so_protocol =
       VAR_7->so_proto->pr_protocol;
   FUNC_6(VAR_7);
   VAR_8 = (struct inpcb *)VAR_7->so_pcb;
   FUNC_2(VAR_8);
   VAR_6->k_ar.ar_arg_sockinfo.so_raddr =
       VAR_8->inp_faddr.s_addr;
   VAR_6->k_ar.ar_arg_sockinfo.so_laddr =
       VAR_8->inp_laddr.s_addr;
   VAR_6->k_ar.ar_arg_sockinfo.so_rport =
       VAR_8->inp_fport;
   VAR_6->k_ar.ar_arg_sockinfo.so_lport =
       VAR_8->inp_lport;
   FUNC_3(VAR_8);
   FUNC_0(VAR_6, VAR_0);
  }
  break;

 default:

  break;
 }
}
