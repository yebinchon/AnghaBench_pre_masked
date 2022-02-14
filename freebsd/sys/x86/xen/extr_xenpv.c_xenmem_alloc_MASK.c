
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int * device_t ;


 struct resource* FUNC_0 (int *,int *,int*,size_t) ;
 int * FUNC_1 (int *) ;

struct resource *
FUNC_2(device_t VAR_0, int *VAR_1, size_t VAR_2)
{
 device_t VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 return (FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2));
}
