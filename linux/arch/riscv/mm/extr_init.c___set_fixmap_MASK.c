
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int phys_addr_t ;
typedef int pgprot_t ;
typedef enum fixed_addresses { ____Placeholder_fixed_addresses } fixed_addresses ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long,int *) ;
 size_t FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(enum fixed_addresses VAR_5, phys_addr_t VAR_6, pgprot_t VAR_7)
{
 unsigned long VAR_8 = FUNC_1(VAR_5);
 pte_t *VAR_9;

 FUNC_0(VAR_5 <= VAR_0 || VAR_5 >= VAR_2);

 VAR_9 = &VAR_3[FUNC_6(VAR_8)];

 if (FUNC_4(VAR_7)) {
  FUNC_7(VAR_9, FUNC_3(VAR_6 >> VAR_1, VAR_7));
 } else {
  FUNC_5(&VAR_4, VAR_8, VAR_9);
  FUNC_2(VAR_8);
 }
}
