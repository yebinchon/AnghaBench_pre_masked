
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* module; } ;
struct TYPE_11__ {size_t current; TYPE_1__* module; } ;
struct TYPE_10__ {TYPE_3__* metrics; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {TYPE_4__* data; } ;
struct TYPE_7__ {int scroll; } ;
typedef TYPE_4__ GDashData ;


 size_t VAR_0 ;
 TYPE_6__* VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_4 = 0;

  int VAR_5 = VAR_2.module[VAR_2.current].scroll;
  GDashData VAR_6 = VAR_1->module[VAR_0].data[VAR_5];

  if (!FUNC_0 (VAR_6.metrics->data, &VAR_4))
    FUNC_1 (VAR_3, VAR_6.metrics->data);
}
