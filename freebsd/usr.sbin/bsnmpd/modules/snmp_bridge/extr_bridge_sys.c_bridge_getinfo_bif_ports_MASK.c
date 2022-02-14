
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mibif {int dummy; } ;
struct ifbreq {int ifbr_ifsname; int ifbr_portno; } ;
struct ifbpstpreq {int ifbr_ifsname; int ifbr_portno; } ;
struct bridge_port {int port_no; int status; } ;
struct bridge_if {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bridge_port* FUNC_0 (struct mibif*,struct bridge_if*) ;
 struct bridge_port* FUNC_1 (struct bridge_if*) ;
 struct bridge_port* FUNC_2 (struct bridge_port*) ;
 int FUNC_3 (struct bridge_port*) ;
 struct ifbreq* FUNC_4 (int ,struct ifbreq*,int) ;
 int FUNC_5 (struct bridge_if*,struct ifbreq**) ;
 int FUNC_6 (struct bridge_if*,struct ifbreq**) ;
 int FUNC_7 (struct ifbreq*,struct bridge_port*) ;
 int FUNC_8 (struct mibif*,struct bridge_port*) ;
 int FUNC_9 (struct ifbreq*,struct bridge_port*) ;
 int FUNC_10 (struct ifbreq*) ;
 struct mibif* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ) ;

int
FUNC_13(struct bridge_if *VAR_2)
{
 uint32_t VAR_3;
 int32_t VAR_4;
 struct ifbreq *VAR_5, *VAR_6;
 struct ifbpstpreq *VAR_7, *VAR_8;
 struct bridge_port *VAR_9;
 struct mibif *VAR_10;

 if ((VAR_4 = FUNC_5(VAR_2, &VAR_5)) < 0)
  return (-1);

 for (VAR_3 = 0; VAR_3 < VAR_4 / sizeof(struct ifbreq); VAR_3++) {
  VAR_6 = VAR_5 + VAR_3;

  if ((VAR_10 = FUNC_11(VAR_6->ifbr_portno)) != ((void*)0)) {

   if ((VAR_9 = FUNC_0(VAR_10, VAR_2)) != ((void*)0)) {
    VAR_9->status = VAR_1;
    FUNC_7(VAR_6, VAR_9);
    FUNC_8(VAR_10, VAR_9);
   }
  } else {
   FUNC_12(VAR_0, "bridge member %s not present "
       "in mibII ifTable", VAR_6->ifbr_ifsname);
  }
 }
 FUNC_10(VAR_5);

 if ((VAR_4 = FUNC_6(VAR_2, &VAR_7)) < 0)
  return (-1);

 for (VAR_9 = FUNC_1(VAR_2); VAR_9 != ((void*)0);
     VAR_9 = FUNC_2(VAR_9)) {
  if ((VAR_8 = FUNC_4(VAR_9->port_no,
      VAR_7, VAR_4)) == ((void*)0))
   FUNC_3(VAR_9);
  else
   FUNC_9(VAR_8, VAR_9);
 }
 FUNC_10(VAR_7);

 return (VAR_3);
}
