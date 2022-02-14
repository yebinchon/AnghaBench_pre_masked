
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wt_status_change_data {scalar_t__ index_status; } ;
struct TYPE_2__ {int nr; struct string_list_item* items; } ;
struct wt_status {TYPE_1__ change; } ;
struct string_list_item {struct wt_status_change_data* util; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wt_status*) ;
 int FUNC_1 (struct wt_status*,int ,struct string_list_item*) ;
 int FUNC_2 (struct wt_status*) ;

__attribute__((used)) static void FUNC_3(struct wt_status *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->change.nr; VAR_4++) {
  struct wt_status_change_data *VAR_5;
  struct string_list_item *VAR_6;
  VAR_6 = &(VAR_2->change.items[VAR_4]);
  VAR_5 = VAR_6->util;
  if (!VAR_5->index_status ||
      VAR_5->index_status == VAR_0)
   continue;
  if (!VAR_3) {
   FUNC_0(VAR_2);
   VAR_3 = 1;
  }
  FUNC_1(VAR_2, VAR_1, VAR_6);
 }
 if (VAR_3)
  FUNC_2(VAR_2);
}
