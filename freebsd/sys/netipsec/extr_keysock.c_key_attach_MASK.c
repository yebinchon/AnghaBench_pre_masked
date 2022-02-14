
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int so_options; int * so_pcb; } ;
struct TYPE_4__ {scalar_t__ sp_protocol; } ;
struct TYPE_5__ {TYPE_1__ rcb_proto; } ;
struct keycb {TYPE_2__ kp_raw; scalar_t__ kp_registered; scalar_t__ kp_promisc; } ;
typedef void* caddr_t ;
struct TYPE_6__ {int any_count; int key_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_1 (struct keycb*,int ) ;
 struct keycb* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (struct socket*,int) ;
 int FUNC_5 (struct socket*) ;
 scalar_t__ FUNC_6 (struct socket*) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct keycb *VAR_11;
 int VAR_12;

 FUNC_0(VAR_8->so_pcb == ((void*)0), ("key_attach: so_pcb != NULL"));

 if (VAR_10 != ((void*)0)) {
  VAR_12 = FUNC_3(VAR_10, VAR_5);
  if (VAR_12)
   return VAR_12;
 }


 VAR_11 = FUNC_2(sizeof *VAR_11, VAR_1, VAR_2 | VAR_3);
 if (VAR_11 == ((void*)0))
  return VAR_0;

 VAR_8->so_pcb = (caddr_t)VAR_11;
 VAR_12 = FUNC_4(VAR_8, VAR_9);
 VAR_11 = (struct keycb *)FUNC_6(VAR_8);
 if (VAR_12) {
  FUNC_1(VAR_11, VAR_1);
  VAR_8->so_pcb = (caddr_t) 0;
  return VAR_12;
 }

 VAR_11->kp_promisc = VAR_11->kp_registered = 0;

 if (VAR_11->kp_raw.rcb_proto.sp_protocol == VAR_4)
  VAR_7.key_count++;
 VAR_7.any_count++;
 FUNC_5(VAR_8);
 VAR_8->so_options |= VAR_6;

 return 0;
}
