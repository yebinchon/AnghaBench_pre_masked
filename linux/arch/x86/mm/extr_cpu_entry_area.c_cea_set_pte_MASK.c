
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int phys_addr_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long,int ) ;

void FUNC_5(void *VAR_4, phys_addr_t VAR_5, pgprot_t VAR_6)
{
 unsigned long VAR_7 = (unsigned long) VAR_4;
 pte_t VAR_8 = FUNC_1(VAR_5 >> VAR_0, VAR_6);
 if (FUNC_0(VAR_1) &&
     (FUNC_2(VAR_6) & VAR_3))
  VAR_8 = FUNC_3(VAR_8, VAR_2);

 FUNC_4(VAR_7, VAR_8);
}
