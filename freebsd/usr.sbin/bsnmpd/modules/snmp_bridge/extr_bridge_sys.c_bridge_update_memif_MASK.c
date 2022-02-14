
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mibif {int index; } ;
struct ifbreq {int ifbr_ifsname; int ifbr_portno; } ;
struct ifbpstpreq {int ifbr_ifsname; int ifbr_portno; } ;
struct bridge_port {scalar_t__ status; int flags; int port_no; } ;
struct bridge_if {int ports_age; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bridge_port* FUNC_0 (struct mibif*,struct bridge_if*) ;
 struct bridge_port* FUNC_1 (struct bridge_if*) ;
 struct bridge_port* FUNC_2 (struct bridge_port*) ;
 int FUNC_3 (struct bridge_port*) ;
 struct bridge_port* FUNC_4 (int ,struct bridge_if*) ;
 struct ifbreq* FUNC_5 (int ,struct ifbreq*,int) ;
 int FUNC_6 (struct bridge_if*,struct ifbreq**) ;
 int FUNC_7 (struct bridge_if*,struct ifbreq**) ;
 int FUNC_8 (struct ifbreq*,struct bridge_port*) ;
 int FUNC_9 (struct mibif*,struct bridge_port*) ;
 int FUNC_10 (struct ifbreq*,struct bridge_port*) ;
 int FUNC_11 (struct bridge_port*,struct bridge_if*) ;
 int FUNC_12 (struct ifbreq*) ;
 struct mibif* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int *) ;

int
FUNC_16(struct bridge_if *VAR_3)
{
 int VAR_4, VAR_5;
 uint32_t VAR_6;
 int32_t VAR_7;
 struct ifbreq *VAR_8, *VAR_9;
 struct ifbpstpreq *VAR_10, *VAR_11;
 struct bridge_port *VAR_12, *VAR_13;
 struct mibif *VAR_14;

 if ((VAR_7 = FUNC_6(VAR_3, &VAR_8)) < 0)
  return (-1);

 VAR_4 = VAR_5 = 0;


 for (VAR_6 = 0; VAR_6 < VAR_7 / sizeof(struct ifbreq); VAR_6++) {
  VAR_9 = VAR_8 + VAR_6;

  if ((VAR_14 = FUNC_13(VAR_9->ifbr_portno)) == ((void*)0)) {
   FUNC_14(VAR_1, "bridge member %s not present "
       "in mibII ifTable", VAR_9->ifbr_ifsname);
   continue;
  }

  if ((VAR_12 = FUNC_4(VAR_14->index, VAR_3)) == ((void*)0) &&
      (VAR_12 = FUNC_0(VAR_14, VAR_3)) != ((void*)0)) {
   VAR_12->status = VAR_2;
   VAR_4++;
  }

  if (VAR_12 != ((void*)0)) {
   VAR_5++;
   FUNC_8(VAR_9, VAR_12);
   FUNC_9(VAR_14, VAR_12);
   VAR_12->flags |= 0x01;
  }
 }
 FUNC_12(VAR_8);


 for (VAR_12 = FUNC_1(VAR_3); VAR_12 != ((void*)0); VAR_12 = VAR_13) {
  VAR_13 = FUNC_2(VAR_12);

  if ((VAR_12->flags & 0x01) == 0 &&
      VAR_12->status == VAR_2)
   FUNC_11(VAR_12, VAR_3);
  else
   VAR_12->flags |= ~0x01;
 }


 if ((VAR_7 = FUNC_7(VAR_3, &VAR_10)) < 0)
  return (-1);

 for (VAR_12 = FUNC_1(VAR_3); VAR_12 != ((void*)0);
     VAR_12 = FUNC_2(VAR_12)) {
  if ((VAR_11 = FUNC_5(VAR_12->port_no,
      VAR_10, VAR_7)) == ((void*)0))
   FUNC_3(VAR_12);
  else
   FUNC_10(VAR_11, VAR_12);
 }
 FUNC_12(VAR_10);
 VAR_3->ports_age = FUNC_15(((void*)0));

 return (VAR_5);
}
