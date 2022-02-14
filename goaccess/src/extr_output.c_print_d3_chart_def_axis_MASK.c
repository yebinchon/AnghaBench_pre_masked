
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* def; } ;
struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ GChartDef ;
typedef TYPE_2__ GChart ;
typedef int FILE ;


 int FUNC_0 (int *,int ,int ,int,int) ;
 int FUNC_1 (int *,int ,int ,int,int) ;
 int * FUNC_2 (int ,char) ;

__attribute__((used)) static void
FUNC_3 (FILE * VAR_0, GChart * VAR_1, size_t VAR_2, int VAR_3)
{
  GChartDef *VAR_4 = VAR_1->def;
  size_t VAR_5 = 0;

  for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
    if (FUNC_2 (VAR_4[VAR_5].value, '[') != ((void*)0))
      FUNC_0 (VAR_0, VAR_4[VAR_5].key, VAR_4[VAR_5].value, VAR_3, VAR_5 == VAR_2 - 1);
    else
      FUNC_1 (VAR_0, VAR_4[VAR_5].key, VAR_4[VAR_5].value, VAR_3, VAR_5 == VAR_2 - 1);
  }
}
