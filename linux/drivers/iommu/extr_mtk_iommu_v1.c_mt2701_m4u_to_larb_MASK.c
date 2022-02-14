
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = FUNC_0(VAR_0) - 1; VAR_2 >= 0; VAR_2--)
  if ((VAR_1) >= VAR_0[VAR_2])
   return VAR_2;

 return 0;
}
