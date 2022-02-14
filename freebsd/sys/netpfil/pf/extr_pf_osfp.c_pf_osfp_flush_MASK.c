
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_osfp_entry {int fp_oses; } ;
struct pf_os_fingerprint {int fp_oses; } ;


 int VAR_0 ;
 struct pf_osfp_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pf_osfp_entry*,int ) ;

void
FUNC_3(void)
{
 struct pf_os_fingerprint *VAR_4;
 struct pf_osfp_entry *VAR_5;

 while ((VAR_4 = FUNC_0(&VAR_1))) {
  FUNC_1(&VAR_1, VAR_3);
  while ((VAR_5 = FUNC_0(&VAR_4->fp_oses))) {
   FUNC_1(&VAR_4->fp_oses, VAR_2);
   FUNC_2(VAR_5, VAR_0);
  }
  FUNC_2(VAR_4, VAR_0);
 }
}
