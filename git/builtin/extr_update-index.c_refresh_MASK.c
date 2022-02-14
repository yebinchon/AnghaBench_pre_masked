
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refresh_params {unsigned int flags; int * has_errors; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct refresh_params *VAR_0, unsigned int VAR_1)
{
 FUNC_2();
 FUNC_0();
 *VAR_0->has_errors |= FUNC_1(VAR_0->flags | VAR_1);
 return 0;
}
