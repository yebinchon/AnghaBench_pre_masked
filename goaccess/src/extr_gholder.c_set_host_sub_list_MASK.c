
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int has_geocountry; int has_geocity; scalar_t__ output_stdout; scalar_t__ enable_html_resolver; } ;
struct TYPE_8__ {size_t idx; int sub_items_size; TYPE_2__* items; int module; } ;
struct TYPE_7__ {int * sub_list; TYPE_1__* metrics; } ;
struct TYPE_6__ {char* data; } ;
typedef int GSubList ;
typedef int GMetrics ;
typedef TYPE_3__ GHolder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int *) ;
 TYPE_5__ VAR_6 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int FUNC_4 (char*,int ,int **) ;

__attribute__((used)) static void
FUNC_5 (GHolder * VAR_7, GSubList * VAR_8)
{
  GMetrics *VAR_9;






  char *VAR_10 = VAR_7->items[VAR_7->idx].metrics->data, *VAR_11 = ((void*)0);
  if (VAR_6.enable_html_resolver && VAR_6.output_stdout) {
    VAR_11 = FUNC_2 (VAR_10);
    FUNC_4 (VAR_11, VAR_5, &VAR_9);
    FUNC_0 (VAR_8, VAR_7->module, VAR_9);
    VAR_7->items[VAR_7->idx].sub_list = VAR_8;
    VAR_7->sub_items_size++;
    FUNC_1 (VAR_11);
  }
}
