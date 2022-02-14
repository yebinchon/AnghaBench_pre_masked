
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef unsigned long phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int * FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(pmd_t * VAR_5, unsigned long VAR_6,
 phys_addr_t VAR_7, phys_addr_t VAR_8, unsigned long VAR_9)
{
 phys_addr_t VAR_10;

 VAR_6 &= ~VAR_1;
 VAR_10 = VAR_6 + VAR_7;
 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;
 VAR_8 -= VAR_6;
 FUNC_0(VAR_6 >= VAR_10);
 do {
  pte_t * VAR_11 = FUNC_1(VAR_5, VAR_6);
  if (!VAR_11)
   return -VAR_0;
  FUNC_2(VAR_11, VAR_6, VAR_10 - VAR_6, VAR_6 + VAR_8, VAR_9);
  VAR_6 = (VAR_6 + VAR_4) & VAR_3;
  VAR_5++;
 } while (VAR_6 && (VAR_6 < VAR_10));
 return 0;
}
