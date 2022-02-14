
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_fb_ptr; } ;
struct tcp_rack {int dummy; } ;
struct sockopt {scalar_t__ sopt_dir; } ;
struct socket {int dummy; } ;
struct inpcb {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct socket*,struct sockopt*,struct inpcb*,struct tcpcb*,struct tcp_rack*) ;
 int FUNC_2 (struct socket*,struct sockopt*,struct inpcb*,struct tcpcb*,struct tcp_rack*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_3, struct sockopt *VAR_4, struct inpcb *VAR_5, struct tcpcb *VAR_6)
{
 int32_t VAR_7 = VAR_0;
 struct tcp_rack *VAR_8;

 VAR_8 = (struct tcp_rack *)VAR_6->t_fb_ptr;
 if (VAR_8 == ((void*)0)) {

  goto out;
 }
 if (VAR_4->sopt_dir == VAR_2) {
  return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8));
 } else if (VAR_4->sopt_dir == VAR_1) {
  return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8));
 }
out:
 FUNC_0(VAR_5);
 return (VAR_7);
}
