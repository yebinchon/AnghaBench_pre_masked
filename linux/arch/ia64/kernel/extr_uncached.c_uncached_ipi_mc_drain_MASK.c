
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncached_pool {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 int VAR_2;
 struct uncached_pool *VAR_3 = (struct uncached_pool *)VAR_1;

 VAR_2 = FUNC_1();
 if (VAR_2 != VAR_0)
  FUNC_0(&VAR_3->status);
}
