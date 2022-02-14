
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* metrics; struct TYPE_7__* next; } ;
struct TYPE_6__ {int size; TYPE_3__* head; } ;
struct TYPE_5__ {size_t id; int data; } ;
typedef TYPE_2__ GSubList ;
typedef TYPE_3__ GSubItem ;
typedef int GJSON ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,int ,...) ;

__attribute__((used)) static void
FUNC_2 (GJSON * VAR_3, GSubList * VAR_4, int VAR_5)
{
  GSubItem *VAR_6;
  int VAR_7;
  static const char *VAR_8[] = {
    "country",
    "city",
    "hostname",
  };

  FUNC_1 (VAR_3, ",%.*s", VAR_2, VAR_0);


  for (VAR_7 = 0, VAR_6 = VAR_4->head; VAR_6; VAR_6 = VAR_6->next, VAR_7++) {
    FUNC_1 (VAR_3, "%.*s\"%s\": \"", VAR_5, VAR_1, VAR_8[VAR_6->metrics->id]);
    FUNC_0 (VAR_3, VAR_6->metrics->data);
    FUNC_1 (VAR_3, (VAR_7 != VAR_4->size - 1) ? "\",%.*s" : "\"", VAR_2, VAR_0);
  }
}
