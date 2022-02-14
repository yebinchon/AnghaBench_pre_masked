
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pgd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned long,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static bool FUNC_6(pgd_t *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 pud_t *VAR_4;
 unsigned long VAR_5 = ~0ul;
 int VAR_6 = FUNC_2(VAR_2);
 int VAR_7 = FUNC_2(VAR_3);
 bool VAR_8 = (VAR_6 == 0 && VAR_7 == VAR_0 - 1);
 int VAR_9;

 for (VAR_9 = VAR_6; VAR_9 <= VAR_7; ++VAR_9, VAR_2 = 0) {
  if (!FUNC_3(VAR_1[VAR_9]))
   continue;

  VAR_4 = FUNC_5(VAR_1 + VAR_9, 0);
  if (VAR_9 == VAR_7)
   VAR_5 = VAR_3;

  if (FUNC_0(VAR_4, VAR_2, VAR_5)) {
   FUNC_1(VAR_1 + VAR_9);
   FUNC_4(((void*)0), VAR_4);
  } else {
   VAR_8 = 0;
  }
 }
 return VAR_8;
}
