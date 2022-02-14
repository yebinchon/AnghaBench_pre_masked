
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_ports {int dummy; } ;
struct bridge_port {scalar_t__ sysindex; } ;
struct bridge_if {scalar_t__ sysindex; struct bridge_port* f_bp; } ;


 struct bridge_port* FUNC_0 (struct bridge_port*,int ) ;
 int FUNC_1 (struct bridge_ports*,struct bridge_port*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bridge_port*) ;

__attribute__((used)) static void
FUNC_3(struct bridge_ports *VAR_1,
 struct bridge_if *VAR_2)
{
 struct bridge_port *VAR_3;

 while (VAR_2->f_bp != ((void*)0) && VAR_2->sysindex == VAR_2->f_bp->sysindex) {
  VAR_3 = FUNC_0(VAR_2->f_bp, VAR_0);
  FUNC_1(VAR_1, VAR_2->f_bp, VAR_0);
  FUNC_2(VAR_2->f_bp);
  VAR_2->f_bp = VAR_3;
 }
}
