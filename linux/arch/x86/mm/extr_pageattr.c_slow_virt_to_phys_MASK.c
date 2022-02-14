
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef unsigned long phys_addr_t ;
typedef enum pg_level { ____Placeholder_pg_level } pg_level ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;


 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int * FUNC_1 (unsigned long,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

phys_addr_t FUNC_5(void *VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_4;
 phys_addr_t VAR_6;
 unsigned long VAR_7;
 enum pg_level VAR_8;
 pte_t *VAR_9;

 VAR_9 = FUNC_1(VAR_5, &VAR_8);
 FUNC_0(!VAR_9);






 switch (VAR_8) {
 case 129:
  VAR_6 = (phys_addr_t)FUNC_4(*(pud_t *)VAR_9) << VAR_1;
  VAR_7 = VAR_5 & ~VAR_3;
  break;
 case 128:
  VAR_6 = (phys_addr_t)FUNC_2(*(pmd_t *)VAR_9) << VAR_1;
  VAR_7 = VAR_5 & ~VAR_2;
  break;
 default:
  VAR_6 = (phys_addr_t)FUNC_3(*VAR_9) << VAR_1;
  VAR_7 = VAR_5 & ~VAR_0;
 }

 return (phys_addr_t)(VAR_6 | VAR_7);
}
