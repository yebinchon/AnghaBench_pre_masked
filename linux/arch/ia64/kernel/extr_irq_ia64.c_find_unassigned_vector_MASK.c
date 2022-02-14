
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_5 ;

__attribute__((used)) static inline int FUNC_2(cpumask_t VAR_6)
{
 cpumask_t VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(&VAR_7, &VAR_6, VAR_4);
 if (FUNC_1(&VAR_7))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_9 = VAR_2 + VAR_8;
  FUNC_0(&VAR_7, &VAR_6, &VAR_5[VAR_9]);
  if (!FUNC_1(&VAR_7))
   continue;
  return VAR_9;
 }
 return -VAR_1;
}
