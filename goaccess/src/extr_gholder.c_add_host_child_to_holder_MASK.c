
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int mutex; } ;
struct TYPE_9__ {size_t idx; int sub_items_size; TYPE_2__* items; int module; } ;
struct TYPE_8__ {char* sub_list; TYPE_1__* metrics; } ;
struct TYPE_7__ {char* data; } ;
typedef char GSubList ;
typedef int GMetrics ;
typedef TYPE_3__ GHolder ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_5__ VAR_1 ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int **) ;
 int FUNC_8 (TYPE_3__*,char*) ;

__attribute__((used)) static void
FUNC_9 (GHolder * VAR_2)
{
  GMetrics *VAR_3;
  GSubList *VAR_4 = FUNC_4 ();

  char *VAR_5 = VAR_2->items[VAR_2->idx].metrics->data;
  char *VAR_6 = ((void*)0);
  int VAR_7 = VAR_2->sub_items_size;


  FUNC_8 (VAR_2, VAR_4);

  FUNC_5 (&VAR_1.mutex);
  VAR_6 = FUNC_3 (VAR_5);
  FUNC_6 (&VAR_1.mutex);


  if (!VAR_6) {
    FUNC_1 (VAR_5);
  } else if (VAR_6) {
    FUNC_7 (VAR_6, VAR_0, &VAR_3);
    FUNC_0 (VAR_4, VAR_2->module, VAR_3);
    VAR_2->items[VAR_2->idx].sub_list = VAR_4;
    VAR_2->sub_items_size++;
    FUNC_2 (VAR_6);
  }


  if (VAR_7 == VAR_2->sub_items_size)
    FUNC_2 (VAR_4);
}
