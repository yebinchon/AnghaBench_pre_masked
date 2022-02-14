
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct inpcbinfo {scalar_t__ ipi_npcbgroups; scalar_t__ ipi_hashfields; struct inpcbgroup* ipi_pcbgroups; int ipi_wildmask; int ipi_wildbase; int ipi_listhead; } ;
struct inpcbgroup {int ipg_hashmask; int ipg_hashbase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inpcbgroup*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct inpcbgroup*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(struct inpcbinfo *VAR_1)
{
 struct inpcbgroup *VAR_2;
 u_int VAR_3;

 if (VAR_1->ipi_npcbgroups == 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->ipi_npcbgroups; VAR_3++) {
  VAR_2 = &VAR_1->ipi_pcbgroups[VAR_3];
  FUNC_2(FUNC_0(VAR_1->ipi_listhead),
      ("in_pcbinfo_destroy: listhead not empty"));
  FUNC_1(VAR_2);
  FUNC_4(VAR_2->ipg_hashbase, VAR_0,
      VAR_2->ipg_hashmask);
 }
 FUNC_4(VAR_1->ipi_wildbase, VAR_0, VAR_1->ipi_wildmask);
 FUNC_3(VAR_1->ipi_pcbgroups, VAR_0);
 VAR_1->ipi_pcbgroups = ((void*)0);
 VAR_1->ipi_npcbgroups = 0;
 VAR_1->ipi_hashfields = 0;
}
