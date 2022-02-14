
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(void)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1[VAR_2]) {
   VAR_1[VAR_2] = 1;
   return VAR_2;
  }
 }
 return VAR_0 + 1;
}
