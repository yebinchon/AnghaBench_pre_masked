
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned long,unsigned long,unsigned long*) ;
 int * FUNC_1 (unsigned long) ;
 int * FUNC_2 (int *,int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(unsigned long VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 pgd_t * VAR_5;
 unsigned long VAR_6 = VAR_2 + VAR_3;

 VAR_5 = FUNC_1(VAR_2);
 do {
  pmd_t *VAR_7;

  VAR_7 = FUNC_2(((void*)0), VAR_5, VAR_2);
  if (!VAR_7)
   return -VAR_0;
  if (FUNC_0(VAR_7, VAR_2, VAR_6 - VAR_2, &VAR_4))
   return -VAR_0;
  VAR_2 = VAR_2 + VAR_1;
  VAR_5++;
 } while (VAR_2 && (VAR_2 < VAR_6));
 return 0;
}
