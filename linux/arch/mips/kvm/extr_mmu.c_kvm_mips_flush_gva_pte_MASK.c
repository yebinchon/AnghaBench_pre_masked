
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static bool FUNC_4(pte_t *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = FUNC_1(VAR_3);
 bool VAR_6 = (VAR_4 == 0 && VAR_5 == VAR_0 - 1);
 int VAR_7;





 if (VAR_6)
  return 1;

 for (VAR_7 = VAR_4; VAR_7 <= VAR_5; ++VAR_7) {
  if (!FUNC_2(VAR_1[VAR_7]))
   continue;

  FUNC_3(VAR_1 + VAR_7, FUNC_0(0));
 }
 return 0;
}
