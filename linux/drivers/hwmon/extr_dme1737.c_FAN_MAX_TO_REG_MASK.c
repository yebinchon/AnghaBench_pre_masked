
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(long VAR_1)
{
 int VAR_2;

 for (VAR_2 = 10; VAR_2 > 0; VAR_2--) {
  if (VAR_1 > (1000 + (VAR_2 - 1) * 500))
   break;
 }

 return VAR_0[VAR_2];
}
