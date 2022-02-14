
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imc_events {struct imc_events* name; struct imc_events* scale; struct imc_events* unit; } ;


 int FUNC_0 (struct imc_events*) ;

__attribute__((used)) static void FUNC_1(struct imc_events *VAR_0, int VAR_1)
{
 int VAR_2;


 if (!VAR_0)
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].unit);
  FUNC_0(VAR_0[VAR_2].scale);
  FUNC_0(VAR_0[VAR_2].name);
 }

 FUNC_0(VAR_0);
}
