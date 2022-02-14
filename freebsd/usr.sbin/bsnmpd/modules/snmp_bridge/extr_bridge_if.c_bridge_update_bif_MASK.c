
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ifmd_flags; } ;
struct mibif {TYPE_2__ mib; int * physaddr; int name; } ;
struct TYPE_3__ {int octet; } ;
struct bridge_if {int entry_age; int num_ports; int if_status; TYPE_1__ br_addr; int bif_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct bridge_if*) ;
 int FUNC_3 (struct bridge_if*) ;
 int FUNC_4 (struct bridge_if*) ;
 int FUNC_5 (struct bridge_if*) ;
 int FUNC_6 (struct bridge_if*) ;
 struct mibif* FUNC_7 () ;
 struct mibif* FUNC_8 (struct mibif*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct bridge_if *VAR_4)
{
 struct mibif *VAR_5;


 for (VAR_5 = FUNC_7(); VAR_5 != ((void*)0); VAR_5 = FUNC_8(VAR_5))
  if (FUNC_9(VAR_5->name, VAR_4->bif_name) == 0)
   break;

 if (VAR_5 == ((void*)0)) {

  FUNC_4(VAR_4);
  return (0);
 }

 if (VAR_5->physaddr != ((void*)0) )
  FUNC_0(VAR_5->physaddr, VAR_4->br_addr.octet, VAR_0);
 else
  FUNC_1(VAR_4->bif_name, VAR_4->br_addr.octet,
      VAR_0);

 if (VAR_5->mib.ifmd_flags & VAR_1)
  VAR_4->if_status = VAR_2;
 else
  VAR_4->if_status = VAR_3;

 switch (FUNC_2(VAR_4)) {
  case 2:
   FUNC_3(VAR_4);
   break;
  case 1:
   FUNC_5(VAR_4);
   break;
  case -1:
   FUNC_4(VAR_4);
   return (-1);
  default:
   break;
 }






 VAR_4->num_ports = FUNC_6(VAR_4);
 VAR_4->entry_age = FUNC_10(((void*)0));

 return (1);
}
