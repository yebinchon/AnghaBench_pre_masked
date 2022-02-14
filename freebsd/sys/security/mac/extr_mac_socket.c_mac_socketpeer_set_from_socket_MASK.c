
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_peerlabel; int so_label; } ;


 int FUNC_0 (int ,struct socket*,int ,struct socket*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct socket *VAR_2, struct socket *VAR_3)
{

 if (VAR_0 == 0)
  return;

 FUNC_0(VAR_1, VAR_2,
     VAR_2->so_label, VAR_3, VAR_3->so_peerlabel);
}
