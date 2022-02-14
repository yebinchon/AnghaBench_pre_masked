
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_drvdata {int cpu; int traceid; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct etm_drvdata *VAR_0)
{
 VAR_0->traceid = FUNC_0(VAR_0->cpu);
}
