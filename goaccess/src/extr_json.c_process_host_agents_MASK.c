
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ json_pretty_print; } ;
struct TYPE_13__ {int size; TYPE_2__* items; } ;
struct TYPE_12__ {TYPE_1__* metrics; } ;
struct TYPE_11__ {int agent; } ;
struct TYPE_10__ {int data; } ;
typedef int GJSON ;
typedef TYPE_3__ GHolderItem ;
typedef TYPE_4__ GAgents ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_6 (GJSON * VAR_5, GHolderItem * VAR_6, int VAR_7)
{
  GAgents *VAR_8 = FUNC_2 ();
  int VAR_9, VAR_10 = 0, VAR_11 = 0;


  if (VAR_2.json_pretty_print)
    VAR_11 = VAR_7 + 1;

  if (FUNC_5 (VAR_6->metrics->data, VAR_3, VAR_8) == 1)
    return;

  FUNC_4 (VAR_5, ",%.*s%.*s\"items\": [%.*s", VAR_4, VAR_0, VAR_7, VAR_1, VAR_4, VAR_0);

  VAR_10 = VAR_8->size > 10 ? 10 : VAR_8->size;
  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
    FUNC_4 (VAR_5, "%.*s\"", VAR_11, VAR_1);
    FUNC_0 (VAR_5, VAR_8->items[VAR_9].agent);
    if (VAR_9 == VAR_10 - 1)
      FUNC_4 (VAR_5, "\"");
    else
      FUNC_4 (VAR_5, "\",%.*s", VAR_4, VAR_0);
  }

  FUNC_3 (VAR_5, VAR_7, 1);


  FUNC_1 (VAR_8);
}
