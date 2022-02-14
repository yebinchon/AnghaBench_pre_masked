
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct admhcd {int * ed_cache; int * td_cache; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct admhcd *VAR_0)
{
 if (VAR_0->td_cache) {
  FUNC_0(VAR_0->td_cache);
  VAR_0->td_cache = ((void*)0);
 }

 if (VAR_0->ed_cache) {
  FUNC_0(VAR_0->ed_cache);
  VAR_0->ed_cache = ((void*)0);
 }
}
