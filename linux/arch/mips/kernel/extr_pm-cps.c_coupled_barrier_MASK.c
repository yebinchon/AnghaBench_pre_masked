
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(atomic_t *VAR_1, unsigned VAR_2)
{






 if (!VAR_0)
  return;

 FUNC_5();
 FUNC_0(VAR_1);

 while (FUNC_2(VAR_1) < VAR_2)
  FUNC_4();

 if (FUNC_1(VAR_1) == VAR_2 * 2) {
  FUNC_3(VAR_1, 0);
  return;
 }

 while (FUNC_2(VAR_1) > VAR_2)
  FUNC_4();
}
