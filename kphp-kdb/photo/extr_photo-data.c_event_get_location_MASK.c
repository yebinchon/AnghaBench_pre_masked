
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int field_desc ;
typedef int event ;
struct TYPE_4__ {int * dyn; int * obj; } ;
typedef TYPE_1__ actual_object ;
struct TYPE_5__ {int * fields; } ;


 char* FUNC_0 (int *,int *) ;
 size_t VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

char *FUNC_4 (actual_object *VAR_4, int VAR_5, int *VAR_6) {
  event *VAR_7 = VAR_4->obj, *VAR_8 = VAR_4->dyn;
  int VAR_9 = VAR_5 ? VAR_2 : VAR_1;

  if (VAR_9 != -1) {
    field_desc *VAR_10 = &VAR_3[VAR_0].fields[VAR_9];

    char *VAR_11 = ((void*)0);
    if (VAR_8 != ((void*)0) && FUNC_3 (VAR_8, VAR_9)) {
      VAR_11 = FUNC_0 (VAR_8, VAR_10);
    } else if (VAR_7 != ((void*)0) && FUNC_3 (VAR_7, VAR_9)) {
      VAR_11 = FUNC_0 (VAR_7, VAR_10);
    }
    if (VAR_11 != ((void*)0)) {
      *VAR_6 = FUNC_2 (VAR_11);
      return FUNC_1 (VAR_11);
    }
  }
  *VAR_6 = 0;
  return "";
}
