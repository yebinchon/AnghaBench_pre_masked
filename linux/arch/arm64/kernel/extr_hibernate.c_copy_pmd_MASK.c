
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(pud_t *VAR_4, pud_t *VAR_5, unsigned long VAR_6,
      unsigned long VAR_7)
{
 pmd_t *VAR_8;
 pmd_t *VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11 = VAR_6;

 if (FUNC_9(FUNC_0(*VAR_4))) {
  VAR_9 = (pmd_t *)FUNC_3(VAR_1);
  if (!VAR_9)
   return -VAR_0;
  FUNC_10(&VAR_3, VAR_4, VAR_9);
 }
 VAR_9 = FUNC_6(VAR_4, VAR_6);

 VAR_8 = FUNC_6(VAR_5, VAR_6);
 do {
  pmd_t VAR_12 = FUNC_0(*VAR_8);

  VAR_10 = FUNC_4(VAR_11, VAR_7);
  if (FUNC_5(VAR_12))
   continue;
  if (FUNC_7(VAR_12)) {
   if (FUNC_2(VAR_9, VAR_8, VAR_11, VAR_10))
    return -VAR_0;
  } else {
   FUNC_11(VAR_9,
    FUNC_1(FUNC_8(VAR_12) & ~VAR_2));
  }
 } while (VAR_9++, VAR_8++, VAR_11 = VAR_10, VAR_11 != VAR_7);

 return 0;
}
