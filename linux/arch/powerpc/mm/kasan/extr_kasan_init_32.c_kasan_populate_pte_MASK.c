
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int phys_addr_t ;
typedef int pgprot_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long,int *,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(pte_t *VAR_3, pgprot_t VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_2;
 phys_addr_t VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++, VAR_3++)
  FUNC_2(&VAR_1, VAR_5, VAR_3, FUNC_3(FUNC_0(VAR_6), VAR_4), 0);
}
