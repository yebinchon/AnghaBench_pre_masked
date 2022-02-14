
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;
typedef unsigned long phys_addr_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int * FUNC_3 (int *,unsigned long) ;
 int * FUNC_4 (int *,int *,unsigned long) ;
 int * FUNC_5 (int *,int *,unsigned long) ;
 scalar_t__ FUNC_6 (int *,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_4, phys_addr_t VAR_5,
 phys_addr_t VAR_6, unsigned long VAR_7)
{
 int VAR_8;
 pgd_t * VAR_9;
 unsigned long VAR_10 = VAR_4 + VAR_6;

 VAR_5 -= VAR_4;
 VAR_9 = FUNC_3(&VAR_3, VAR_4);
 FUNC_1();
 FUNC_0(VAR_4 >= VAR_10);
 do {
  pud_t *VAR_11;
  pmd_t *VAR_12;

  VAR_8 = -VAR_0;
  VAR_11 = FUNC_5(&VAR_3, VAR_9, VAR_4);
  if (!VAR_11)
   break;
  VAR_12 = FUNC_4(&VAR_3, VAR_11, VAR_4);
  if (!VAR_12)
   break;
  if (FUNC_6(VAR_12, VAR_4, VAR_10 - VAR_4,
      VAR_5 + VAR_4, VAR_7))
   break;
  VAR_8 = 0;
  VAR_4 = (VAR_4 + VAR_2) & VAR_1;
  VAR_9++;
 } while (VAR_4 && (VAR_4 < VAR_10));
 FUNC_2();
 return VAR_8;
}
