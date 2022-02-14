
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {scalar_t__ so_pcb; } ;
struct inpcb {int inp_ip_p; int inp_flags; int inp_vflag; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct socket*,int *) ;
 int FUNC_5 (struct thread*,int ) ;
 int FUNC_6 (struct socket*,int ,int ) ;
 struct inpcb* FUNC_7 (struct socket*) ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct inpcb *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(VAR_6);
 FUNC_3(VAR_9 == ((void*)0), ("div_attach: inp != NULL"));
 if (VAR_8 != ((void*)0)) {
  VAR_10 = FUNC_5(VAR_8, VAR_2);
  if (VAR_10)
   return (VAR_10);
 }
 VAR_10 = FUNC_6(VAR_6, VAR_5, VAR_4);
 if (VAR_10)
  return VAR_10;
 FUNC_0(&VAR_3);
 VAR_10 = FUNC_4(VAR_6, &VAR_3);
 if (VAR_10) {
  FUNC_1(&VAR_3);
  return VAR_10;
 }
 VAR_9 = (struct inpcb *)VAR_6->so_pcb;
 FUNC_1(&VAR_3);
 VAR_9->inp_ip_p = VAR_7;
 VAR_9->inp_vflag |= VAR_1;
 VAR_9->inp_flags |= VAR_0;
 FUNC_2(VAR_9);
 return 0;
}
