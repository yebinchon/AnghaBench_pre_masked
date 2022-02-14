
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_0, unsigned long VAR_1,
          void *VAR_2)
{
 unsigned long VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_2(VAR_0 + VAR_3) &&
      !FUNC_0(FUNC_1(VAR_0 + VAR_3)))
   return 1;
 }

 return 0;
}
