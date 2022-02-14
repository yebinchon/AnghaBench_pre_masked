
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wt_status_change_data {scalar_t__ stagemask; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct wt_status {TYPE_2__ change; } ;
struct TYPE_3__ {struct wt_status_change_data* util; } ;



__attribute__((used)) static int FUNC_0(struct wt_status *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->change.nr; VAR_1++) {
  struct wt_status_change_data *VAR_2;
  VAR_2 = VAR_0->change.items[VAR_1].util;
  if (VAR_2->stagemask)
   return 1;
 }
 return 0;
}
