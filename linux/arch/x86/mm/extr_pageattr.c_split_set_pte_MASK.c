
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {int force_static_prot; } ;
typedef int pte_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,unsigned long,unsigned long,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct cpa_data *VAR_2, pte_t *VAR_3, unsigned long VAR_4,
     pgprot_t VAR_5, unsigned long VAR_6,
     unsigned long VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_7);
 pgprot_t VAR_9;





 if (!VAR_2->force_static_prot)
  goto set;


 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_4, VAR_8, 0, VAR_0);

 if (FUNC_2(VAR_9) == FUNC_2(VAR_5))
  goto set;
 if (VAR_7 == VAR_1)
  VAR_5 = VAR_9;
 else
  FUNC_3("CPA: Cannot fixup static protections for PUD split\n");
set:
 FUNC_4(VAR_3, FUNC_1(VAR_4, VAR_5));
}
