
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc_service {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ddc_service*) ;
 int FUNC_2 (struct ddc_service*) ;

void FUNC_3(struct ddc_service **VAR_0)
{
 if (!VAR_0 || !*VAR_0) {
  FUNC_0();
  return;
 }
 FUNC_1(*VAR_0);
 FUNC_2(*VAR_0);
 *VAR_0 = ((void*)0);
}
