
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_type {int prot_sect; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned long,size_t) ;

__attribute__((used)) static int
FUNC_7(unsigned long VAR_3, unsigned long VAR_4,
      size_t VAR_5, const struct mem_type *VAR_6)
{
 unsigned long VAR_7 = VAR_3, VAR_8 = VAR_3 + VAR_5;
 pgd_t *VAR_9;
 pud_t *VAR_10;
 pmd_t *VAR_11;





 FUNC_6(VAR_3, VAR_5);

 VAR_9 = FUNC_3(VAR_7);
 VAR_10 = FUNC_5(VAR_9, VAR_7);
 VAR_11 = FUNC_4(VAR_10, VAR_7);
 do {
  VAR_11[0] = FUNC_1(FUNC_0(VAR_4) | VAR_6->prot_sect);
  VAR_4 += VAR_2 >> VAR_0;
  VAR_11[1] = FUNC_1(FUNC_0(VAR_4) | VAR_6->prot_sect);
  VAR_4 += VAR_2 >> VAR_0;
  FUNC_2(VAR_11);

  VAR_7 += VAR_1;
  VAR_11 += 2;
 } while (VAR_7 < VAR_8);

 return 0;
}
