
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* metrics; } ;
struct TYPE_3__ {scalar_t__ metric; int dbpath; int store; } ;
typedef TYPE_1__ GTCStorageMetric ;
typedef size_t GModule ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_2 (GModule VAR_3)
{
  int VAR_4;
  GTCStorageMetric VAR_5;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    VAR_5 = VAR_2[VAR_3].metrics[VAR_4];
  }
}
