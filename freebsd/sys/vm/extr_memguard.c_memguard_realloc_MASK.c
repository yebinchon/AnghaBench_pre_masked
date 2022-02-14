
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct malloc_type {int dummy; } ;


 int FUNC_0 (void*,void*,int ) ;
 void* FUNC_1 (unsigned long,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (uintptr_t) ;
 int * FUNC_5 (int ) ;

void *
FUNC_6(void *VAR_0, unsigned long VAR_1, struct malloc_type *VAR_2,
    int VAR_3)
{
 void *VAR_4;
 u_long VAR_5;






 if ((VAR_4 = FUNC_1(VAR_1, VAR_3)) == ((void*)0))
  return (((void*)0));


 VAR_5 = *FUNC_5(FUNC_4((uintptr_t)VAR_0));
 FUNC_0(VAR_0, VAR_4, FUNC_3(VAR_1, VAR_5));
 FUNC_2(VAR_0);
 return (VAR_4);
}
