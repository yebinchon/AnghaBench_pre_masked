
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct resource*,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, struct resource *VAR_2, void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == 0)
  FUNC_1(VAR_2, ((void*)0));
 return (VAR_4);
}
