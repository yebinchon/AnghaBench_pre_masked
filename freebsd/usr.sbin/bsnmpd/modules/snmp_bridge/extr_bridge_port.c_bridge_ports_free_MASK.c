
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_ports {int dummy; } ;
struct bridge_port {int dummy; } ;


 struct bridge_port* FUNC_0 (struct bridge_ports*) ;
 int FUNC_1 (struct bridge_ports*,struct bridge_port*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bridge_port*) ;

__attribute__((used)) static void
FUNC_3(struct bridge_ports *VAR_1)
{
 struct bridge_port *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
