
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* metrics; } ;
struct TYPE_3__ {scalar_t__ metric; void* store; } ;
typedef TYPE_1__ GTCStorageMetric ;
typedef scalar_t__ GSMetric ;
typedef size_t GModule ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void *
FUNC_0 (GModule VAR_2, GSMetric VAR_3)
{
  void *VAR_4 = ((void*)0);
  int VAR_5;
  GTCStorageMetric VAR_6;

  if (!VAR_1)
    return ((void*)0);

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    VAR_6 = VAR_1[VAR_2].metrics[VAR_5];
    if (VAR_6.metric != VAR_3)
      continue;
    VAR_4 = VAR_6.store;
    break;
  }

  return VAR_4;
}
