
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*,int,int *) ;

int
FUNC_2(void *VAR_0, int VAR_1, int VAR_2)
{
 struct malloc_type **VAR_3;






 FUNC_1(VAR_0, VAR_1, ((void*)0));

 VAR_3 = (struct malloc_type **)VAR_0;
 VAR_3 += (VAR_1 / sizeof(struct malloc_type *)) - 1;
 *VAR_3 = ((void*)0);
 return (0);
}
