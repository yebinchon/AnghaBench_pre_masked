
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static cpumask_t FUNC_4(unsigned int VAR_3)
{
 cpumask_t VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, FUNC_2(VAR_3));
 if (VAR_2 != VAR_0)
  return VAR_4;
 VAR_3 -= VAR_3 % (VAR_1 + 1);
 for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++)
  if (FUNC_0(VAR_3 + VAR_5))
   FUNC_3(VAR_3 + VAR_5, &VAR_4);
 return VAR_4;
}
