
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int dummy; } ;


 struct intel_timeline* FUNC_0 (struct intel_timeline*) ;
 int FUNC_1 (struct intel_timeline*) ;

__attribute__((used)) static void FUNC_2(struct intel_timeline **VAR_0,
      struct intel_timeline *VAR_1)
{
 struct intel_timeline *VAR_2 = *VAR_0;

 *VAR_0 = VAR_1 ? FUNC_0(VAR_1) : ((void*)0);

 if (VAR_2)
  FUNC_1(VAR_2);
}
