
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wt_status_change_data {scalar_t__ stagemask; } ;
struct TYPE_6__ {int nr; struct string_list_item* items; } ;
struct TYPE_5__ {int nr; struct string_list_item* items; } ;
struct TYPE_4__ {int nr; struct string_list_item* items; } ;
struct wt_status {TYPE_3__ ignored; TYPE_2__ untracked; TYPE_1__ change; scalar_t__ show_branch; } ;
struct string_list_item {struct wt_status_change_data* util; } ;


 int FUNC_0 (struct string_list_item*,struct wt_status*) ;
 int FUNC_1 (struct string_list_item*,struct wt_status*,char) ;
 int FUNC_2 (struct wt_status*) ;
 int FUNC_3 (struct string_list_item*,struct wt_status*) ;

__attribute__((used)) static void FUNC_4(struct wt_status *VAR_0)
{
 struct wt_status_change_data *VAR_1;
 struct string_list_item *VAR_2;
 int VAR_3;

 if (VAR_0->show_branch)
  FUNC_2(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->change.nr; VAR_3++) {
  VAR_2 = &(VAR_0->change.items[VAR_3]);
  VAR_1 = VAR_2->util;
  if (!VAR_1->stagemask)
   FUNC_0(VAR_2, VAR_0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->change.nr; VAR_3++) {
  VAR_2 = &(VAR_0->change.items[VAR_3]);
  VAR_1 = VAR_2->util;
  if (VAR_1->stagemask)
   FUNC_3(VAR_2, VAR_0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->untracked.nr; VAR_3++) {
  VAR_2 = &(VAR_0->untracked.items[VAR_3]);
  FUNC_1(VAR_2, VAR_0, '?');
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->ignored.nr; VAR_3++) {
  VAR_2 = &(VAR_0->ignored.items[VAR_3]);
  FUNC_1(VAR_2, VAR_0, '!');
 }
}
