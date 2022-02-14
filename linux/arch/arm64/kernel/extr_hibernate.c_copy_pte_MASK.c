
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(pmd_t *VAR_4, pmd_t *VAR_5, unsigned long VAR_6,
      unsigned long VAR_7)
{
 pte_t *VAR_8;
 pte_t *VAR_9;
 unsigned long VAR_10 = VAR_6;

 VAR_9 = (pte_t *)FUNC_1(VAR_1);
 if (!VAR_9)
  return -VAR_0;
 FUNC_2(&VAR_3, VAR_4, VAR_9);
 VAR_9 = FUNC_3(VAR_4, VAR_6);

 VAR_8 = FUNC_3(VAR_5, VAR_6);
 do {
  FUNC_0(VAR_9, VAR_8, VAR_10);
 } while (VAR_9++, VAR_8++, VAR_10 += VAR_2, VAR_10 != VAR_7);

 return 0;
}
