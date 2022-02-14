
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bridge_ports {int dummy; } ;
struct bridge_port {scalar_t__ sysindex; } ;


 struct bridge_port* FUNC_0 (struct bridge_ports*) ;
 struct bridge_port* FUNC_1 (struct bridge_ports*,int ) ;
 struct bridge_port* FUNC_2 (struct bridge_port*,int ) ;
 struct bridge_port* FUNC_3 (struct bridge_port*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static struct bridge_port *
FUNC_5(struct bridge_ports *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;
 struct bridge_port *VAR_5;

 if ((VAR_5 = FUNC_0(VAR_2)) == ((void*)0) ||
     FUNC_4(VAR_3, VAR_5->sysindex) < 0)
  return (((void*)0));

 VAR_4 = VAR_5->sysindex;

 for (VAR_5 = FUNC_2(VAR_5, VAR_0); VAR_5 != ((void*)0); VAR_5 = FUNC_2(VAR_5, VAR_0)) {
  if (VAR_5->sysindex != VAR_4) {
   if (FUNC_4(VAR_3, VAR_5->sysindex) < 0)
    return (FUNC_3(VAR_5, VAR_1, VAR_0));
   else
    VAR_4 = VAR_5->sysindex;
  }
 }

 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_1(VAR_2, VAR_1);

 return (VAR_5);
}
