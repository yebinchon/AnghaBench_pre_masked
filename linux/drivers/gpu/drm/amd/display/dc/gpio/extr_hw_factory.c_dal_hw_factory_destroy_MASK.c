
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_factory {int dummy; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct hw_factory*) ;

void FUNC_2(
 struct dc_context *VAR_0,
 struct hw_factory **VAR_1)
{
 if (!VAR_1 || !*VAR_1) {
  FUNC_0();
  return;
 }

 FUNC_1(*VAR_1);

 *VAR_1 = ((void*)0);
}
