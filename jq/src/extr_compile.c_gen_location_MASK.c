
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct locfile {int dummy; } ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ location ;
struct TYPE_9__ {int locfile; TYPE_1__ source; struct TYPE_9__* next; } ;
typedef TYPE_2__ inst ;
struct TYPE_10__ {TYPE_2__* first; } ;
typedef TYPE_3__ block ;
struct TYPE_11__ {scalar_t__ start; scalar_t__ end; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (struct locfile*) ;

block FUNC_1(location VAR_1, struct locfile* VAR_2, block VAR_3) {
  for (inst* VAR_4 = VAR_3.first; VAR_4; VAR_4 = VAR_4->next) {
    if (VAR_4->source.start == VAR_0.start &&
        VAR_4->source.end == VAR_0.end) {
      VAR_4->source = VAR_1;
      VAR_4->locfile = FUNC_0(VAR_2);
    }
  }
  return VAR_3;
}
