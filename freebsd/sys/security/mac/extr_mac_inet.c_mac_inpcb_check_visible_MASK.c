
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct inpcb {int inp_label; } ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (int ,int,struct ucred*,struct inpcb*) ;
 int FUNC_2 (int ,struct ucred*,struct inpcb*,int ) ;
 int VAR_0 ;

int
FUNC_3(struct ucred *VAR_1, struct inpcb *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);

 FUNC_2(VAR_0, VAR_1, VAR_2,
     VAR_2->inp_label);
 FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);

 return (VAR_3);
}
