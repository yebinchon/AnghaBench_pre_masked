
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct socket {int so_label; } ;


 int FUNC_0 (int ,struct ucred*,struct socket*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct ucred *VAR_1, struct socket *VAR_2)
{

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->so_label);
}
