
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_port {int port_no; int p_name; } ;
struct bridge_if {int dummy; } ;


 int VAR_0 ;
 struct bridge_port* FUNC_0 (struct bridge_if*) ;
 struct bridge_port* FUNC_1 (struct bridge_port*) ;
 int FUNC_2 (int ,char*,int ,int ) ;

void
FUNC_3(struct bridge_if *VAR_1)
{
 struct bridge_port *VAR_2;

 for (VAR_2 = FUNC_0(VAR_1); VAR_2 != ((void*)0);
     VAR_2 = FUNC_1(VAR_2)) {
  FUNC_2(VAR_0, "memif - %s, index - %d",
  VAR_2->p_name, VAR_2->port_no);
 }
}
