
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct inpcb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_3 ;
 int FUNC_7 (struct inpcb*,struct sockaddr*,int ) ;
 struct inpcb* FUNC_8 (struct socket*) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_4, struct sockaddr *VAR_5, struct thread *VAR_6)
{
 struct inpcb *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(VAR_4);
 FUNC_6(VAR_7 != ((void*)0), ("div_bind: inp == NULL"));







 if (VAR_5->sa_family != VAR_0)
  return VAR_1;
 ((struct sockaddr_in *)VAR_5)->sin_addr.s_addr = VAR_2;
 FUNC_2(&VAR_3);
 FUNC_4(VAR_7);
 FUNC_0(&VAR_3);
 VAR_8 = FUNC_7(VAR_7, VAR_5, VAR_6->td_ucred);
 FUNC_1(&VAR_3);
 FUNC_5(VAR_7);
 FUNC_3(&VAR_3);
 return VAR_8;
}
