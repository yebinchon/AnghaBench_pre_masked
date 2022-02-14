
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_channel {int * ob; int ivc; } ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct tegra_bpmp_channel *VAR_0)
{
 void *VAR_1;

 VAR_1 = FUNC_1(VAR_0->ivc);
 if (FUNC_0(VAR_1)) {
  VAR_0->ob = ((void*)0);
  return 0;
 }

 VAR_0->ob = VAR_1;

 return 1;
}
