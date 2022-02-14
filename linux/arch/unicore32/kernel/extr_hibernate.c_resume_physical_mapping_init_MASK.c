
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(pgd_t *VAR_7)
{
 unsigned long VAR_8;
 pgd_t *VAR_9;
 pmd_t *VAR_10;
 pte_t *VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = FUNC_1(VAR_2);
 VAR_9 = VAR_7 + VAR_12;
 VAR_8 = 0;

 for (; VAR_12 < VAR_3; VAR_9++, VAR_12++) {
  VAR_10 = FUNC_2(VAR_9);
  if (!VAR_10)
   return -VAR_0;

  if (VAR_8 >= VAR_6)
   continue;

  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_10++, VAR_13++) {
   pte_t *VAR_14;

   if (VAR_8 >= VAR_6)
    break;




   VAR_11 = FUNC_3(VAR_10);
   if (!VAR_11)
    return -VAR_0;

   VAR_14 = VAR_11 + VAR_5;
   for (; VAR_11 < VAR_14; VAR_11++, VAR_8++) {
    if (VAR_8 >= VAR_6)
     break;

    FUNC_4(VAR_11, FUNC_0(VAR_8, VAR_1));
   }
  }
 }

 return 0;
}
