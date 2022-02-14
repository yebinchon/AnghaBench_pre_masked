
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdata_init {int (* fn ) () ;scalar_t__ compatible; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct pdata_init *VAR_0)
{
 while (VAR_0->compatible) {
  if (FUNC_0(VAR_0->compatible)) {
   if (VAR_0->fn)
    VAR_0->fn();
  }
  VAR_0++;
 }
}
