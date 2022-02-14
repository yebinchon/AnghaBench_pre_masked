
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wakeref {int wakeref; } ;


 int FUNC_0 (struct intel_wakeref*) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct intel_wakeref *VAR_0)
{
 return FUNC_1(&VAR_0->wakeref,
           !FUNC_0(VAR_0));
}
