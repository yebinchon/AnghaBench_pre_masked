
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,struct resource*) ;
 int * FUNC_1 (int *) ;

int
FUNC_2(device_t VAR_1, int VAR_2, struct resource *VAR_3)
{
 device_t VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3));
}
