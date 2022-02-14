
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_ports {int dummy; } ;
struct bridge_port {int sysindex; } ;


 int FUNC_0 (struct bridge_ports*,struct bridge_port*,struct bridge_port*,int ) ;
 int FUNC_1 (struct bridge_ports*,struct bridge_port*,int ) ;
 int VAR_0 ;
 struct bridge_port* FUNC_2 (struct bridge_ports*,int ) ;
 int FUNC_3 (struct bridge_ports*,struct bridge_port*,struct bridge_port**) ;

__attribute__((used)) static void
FUNC_4(struct bridge_ports *VAR_1,
 struct bridge_port *VAR_2, struct bridge_port **VAR_3)
{
 struct bridge_port *VAR_4;

 if (*VAR_3 != ((void*)0))
  FUNC_3(VAR_1, VAR_2, VAR_3);
 else {
  VAR_4 = FUNC_2(VAR_1, VAR_2->sysindex);

  if (VAR_4 == ((void*)0))
   FUNC_1(VAR_1, VAR_2, VAR_0);
  else
   FUNC_0(VAR_1, VAR_4, VAR_2, VAR_0);
  *VAR_3 = VAR_2;
 }
}
