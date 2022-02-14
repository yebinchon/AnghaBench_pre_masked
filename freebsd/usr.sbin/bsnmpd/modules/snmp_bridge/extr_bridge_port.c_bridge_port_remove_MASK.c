
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_port {int dummy; } ;
struct bridge_if {struct bridge_port* f_bp; } ;


 int FUNC_0 (int *,struct bridge_port*,int ) ;
 int VAR_0 ;
 struct bridge_port* FUNC_1 (struct bridge_port*) ;
 int VAR_1 ;
 int FUNC_2 (struct bridge_port*) ;

void
FUNC_3(struct bridge_port *VAR_2, struct bridge_if *VAR_3)
{
 if (VAR_3->f_bp == VAR_2)
  VAR_3->f_bp = FUNC_1(VAR_2);

 FUNC_0(&VAR_1, VAR_2, VAR_0);
 FUNC_2(VAR_2);
}
