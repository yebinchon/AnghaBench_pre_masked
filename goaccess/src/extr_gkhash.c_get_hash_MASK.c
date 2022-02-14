
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* metrics; } ;
struct TYPE_3__ {scalar_t__ metric; int type; void* su64; void* igsl; void* ss32; void* si32; void* iu64; void* is32; void* ii32; } ;
typedef scalar_t__ GSMetric ;
typedef size_t GModule ;
typedef TYPE_1__ GKHashMetric ;


 int VAR_0 ;







 TYPE_2__* VAR_1 ;

__attribute__((used)) static void *
FUNC_0 (GModule VAR_2, GSMetric VAR_3)
{
  void *VAR_4 = ((void*)0);
  int VAR_5;
  GKHashMetric VAR_6;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    if (VAR_4 != ((void*)0))
      break;

    VAR_6 = VAR_1[VAR_2].metrics[VAR_5];
    if (VAR_6.metric != VAR_3)
      continue;


    switch (VAR_6.type) {
    case 133:
      VAR_4 = VAR_6.ii32;
      break;
    case 132:
      VAR_4 = VAR_6.is32;
      break;
    case 131:
      VAR_4 = VAR_6.iu64;
      break;
    case 130:
      VAR_4 = VAR_6.si32;
      break;
    case 129:
      VAR_4 = VAR_6.ss32;
      break;
    case 134:
      VAR_4 = VAR_6.igsl;
      break;
    case 128:
      VAR_4 = VAR_6.su64;
      break;
    }
  }

  return VAR_4;
}
