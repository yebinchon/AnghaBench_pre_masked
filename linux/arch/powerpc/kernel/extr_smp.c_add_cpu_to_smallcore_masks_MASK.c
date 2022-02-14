
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,struct cpumask*) ;
 int VAR_1 ;
 struct cpumask* FUNC_5 (int ,int) ;
 int FUNC_6 (int,int,int (*) (int)) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_7(int VAR_3)
{
 struct cpumask *VAR_4 = FUNC_5(VAR_0, VAR_3);
 int VAR_5, VAR_6 = FUNC_0(VAR_3);

 if (!VAR_1)
  return;

 FUNC_3(VAR_3, FUNC_2(VAR_3));

 for (VAR_5 = VAR_6; VAR_5 < VAR_6 + VAR_2; VAR_5++) {
  if (FUNC_1(VAR_5) && FUNC_4(VAR_5, VAR_4))
   FUNC_6(VAR_5, VAR_3, FUNC_2);
 }
}
