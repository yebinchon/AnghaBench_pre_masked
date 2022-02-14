
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_ports {int dummy; } ;
struct bridge_port {scalar_t__ sysindex; scalar_t__ if_idx; } ;


 int FUNC_0 (struct bridge_port*,struct bridge_port*,int ) ;
 int FUNC_1 (struct bridge_ports*,struct bridge_port*,int ) ;
 struct bridge_port* FUNC_2 (struct bridge_port*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct bridge_ports *VAR_1,
 struct bridge_port *VAR_2, struct bridge_port **VAR_3)
{
 struct bridge_port *VAR_4;

 FUNC_3(VAR_3 != ((void*)0));

 for (VAR_4 = *VAR_3;
     VAR_4 != ((void*)0) && VAR_2->sysindex == VAR_4->sysindex;
     VAR_4 = FUNC_2(VAR_4, VAR_0)) {
  if (VAR_2->if_idx < VAR_4->if_idx) {
   FUNC_0(VAR_4, VAR_2, VAR_0);
   if (*VAR_3 == VAR_4)
    *VAR_3 = VAR_2;
   return;
  }
 }





 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_1, VAR_2, VAR_0);
 else
  FUNC_0(VAR_4, VAR_2, VAR_0);
}
