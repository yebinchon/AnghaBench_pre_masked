
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wt_status_change_data {int stagemask; } ;
struct TYPE_2__ {int nr; struct string_list_item* items; } ;
struct wt_status {TYPE_1__ change; } ;
struct string_list_item {struct wt_status_change_data* util; } ;


 int FUNC_0 (struct wt_status*) ;
 int FUNC_1 (struct wt_status*,struct string_list_item*) ;
 int FUNC_2 (struct wt_status*) ;

__attribute__((used)) static void FUNC_3(struct wt_status *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->change.nr; VAR_2++) {
  struct wt_status_change_data *VAR_3;
  struct string_list_item *VAR_4;
  VAR_4 = &(VAR_0->change.items[VAR_2]);
  VAR_3 = VAR_4->util;
  if (!VAR_3->stagemask)
   continue;
  if (!VAR_1) {
   FUNC_2(VAR_0);
   VAR_1 = 1;
  }
  FUNC_1(VAR_0, VAR_4);
 }
 if (VAR_1)
  FUNC_0(VAR_0);

}
