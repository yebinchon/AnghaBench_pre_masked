
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(void *VAR_1, unsigned long *VAR_2)
{
 unsigned int VAR_3;
 unsigned long *VAR_4;
 unsigned long VAR_5;

 VAR_4 = (unsigned long *)VAR_1;
 VAR_5 = VAR_4[0];

 for (VAR_3 = 1; VAR_3 < VAR_0 / sizeof(*VAR_4); VAR_3++) {
  if (VAR_5 != VAR_4[VAR_3])
   return 0;
 }

 *VAR_2 = VAR_5;

 return 1;
}
