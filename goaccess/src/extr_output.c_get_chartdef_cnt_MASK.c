
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * def; } ;
typedef int GChartDef ;
typedef TYPE_1__ GChart ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1 (GChart * VAR_1)
{
  GChartDef *VAR_2 = VAR_1->def;

  while (FUNC_0 (VAR_2, &VAR_0, sizeof VAR_0))
    ++VAR_2;

  return VAR_2 - VAR_1->def;
}
