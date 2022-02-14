
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct inpcbinfo {scalar_t__ ipi_npcbgroups; struct inpcbgroup* ipi_pcbgroups; int ipi_wildmask; void* ipi_wildbase; scalar_t__ ipi_hashfields; } ;
struct inpcbgroup {scalar_t__ ipg_cpu; int ipg_hashmask; void* ipg_hashbase; } ;


 int FUNC_0 (struct inpcbgroup*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int ,int *) ;
 struct inpcbgroup* FUNC_2 (scalar_t__,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5(struct inpcbinfo *VAR_5, u_int VAR_6,
    int VAR_7)
{
 struct inpcbgroup *VAR_8;
 u_int VAR_9, VAR_10;





 if (VAR_6 == VAR_0)
  return;







 if (VAR_4 == 1)
  return;
 VAR_9 = VAR_4;


 VAR_5->ipi_hashfields = VAR_6;
 VAR_5->ipi_pcbgroups = FUNC_2(VAR_9 *
     sizeof(*VAR_5->ipi_pcbgroups), VAR_1, VAR_2 | VAR_3);
 VAR_5->ipi_npcbgroups = VAR_9;
 VAR_5->ipi_wildbase = FUNC_1(VAR_7, VAR_1,
     &VAR_5->ipi_wildmask);
 for (VAR_10 = 0; VAR_10 < VAR_5->ipi_npcbgroups; VAR_10++) {
  VAR_8 = &VAR_5->ipi_pcbgroups[VAR_10];
  VAR_8->ipg_hashbase = FUNC_1(VAR_7, VAR_1,
      &VAR_8->ipg_hashmask);
  FUNC_0(VAR_8, "pcbgroup");
  VAR_8->ipg_cpu = (VAR_10 % VAR_4);

 }
}
