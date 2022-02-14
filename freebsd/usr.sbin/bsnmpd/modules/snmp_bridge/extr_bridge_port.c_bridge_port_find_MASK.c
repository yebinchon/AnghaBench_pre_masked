
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_port {scalar_t__ sysindex; scalar_t__ if_idx; } ;
struct bridge_if {scalar_t__ sysindex; struct bridge_port* f_bp; } ;
typedef scalar_t__ int32_t ;


 struct bridge_port* FUNC_0 (struct bridge_port*,int ) ;
 int VAR_0 ;

struct bridge_port *
FUNC_1(int32_t VAR_1, struct bridge_if *VAR_2)
{
 struct bridge_port *VAR_3;

 for (VAR_3 = VAR_2->f_bp; VAR_3 != ((void*)0); VAR_3 = FUNC_0(VAR_3, VAR_0)) {
  if (VAR_3->sysindex != VAR_2->sysindex) {
   VAR_3 = ((void*)0);
   break;
  }

  if (VAR_3->if_idx == VAR_1)
   break;
 }

 return (VAR_3);
}
