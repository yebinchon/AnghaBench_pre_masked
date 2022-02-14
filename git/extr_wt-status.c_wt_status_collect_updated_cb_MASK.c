
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wt_status_change_data {int index_status; int rename_status; int rename_score; int stagemask; int oid_index; int oid_head; int mode_index; int mode_head; int rename_source; } ;
struct wt_status {int committable; TYPE_2__* repo; int change; } ;
struct string_list_item {struct wt_status_change_data* util; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {int status; int score; TYPE_3__* two; TYPE_1__* one; } ;
struct TYPE_6__ {int path; int oid; int mode; } ;
struct TYPE_5__ {int index; } ;
struct TYPE_4__ {int oid; int mode; int path; } ;


 int FUNC_0 (char*,...) ;







 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 struct string_list_item* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 struct wt_status_change_data* FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct diff_queue_struct *VAR_1,
      struct diff_options *VAR_2,
      void *VAR_3)
{
 struct wt_status *VAR_4 = VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->nr; VAR_5++) {
  struct diff_filepair *VAR_6;
  struct string_list_item *VAR_7;
  struct wt_status_change_data *VAR_8;

  VAR_6 = VAR_1->queue[VAR_5];
  VAR_7 = FUNC_2(&VAR_4->change, VAR_6->two->path);
  VAR_8 = VAR_7->util;
  if (!VAR_8) {
   VAR_8 = FUNC_4(1, sizeof(*VAR_8));
   VAR_7->util = VAR_8;
  }
  if (!VAR_8->index_status)
   VAR_8->index_status = VAR_6->status;
  switch (VAR_6->status) {
  case 134:

   VAR_8->mode_index = VAR_6->two->mode;
   FUNC_1(&VAR_8->oid_index, &VAR_6->two->oid);
   VAR_4->committable = 1;
   break;
  case 132:
   VAR_8->mode_head = VAR_6->one->mode;
   FUNC_1(&VAR_8->oid_head, &VAR_6->one->oid);
   VAR_4->committable = 1;

   break;

  case 133:
  case 130:
   if (VAR_8->rename_status)
    FUNC_0("multiple renames on the same target? how?");
   VAR_8->rename_source = FUNC_5(VAR_6->one->path);
   VAR_8->rename_score = VAR_6->score * 100 / VAR_0;
   VAR_8->rename_status = VAR_6->status;

  case 131:
  case 129:
   VAR_8->mode_head = VAR_6->one->mode;
   VAR_8->mode_index = VAR_6->two->mode;
   FUNC_1(&VAR_8->oid_head, &VAR_6->one->oid);
   FUNC_1(&VAR_8->oid_index, &VAR_6->two->oid);
   VAR_4->committable = 1;
   break;
  case 128:
   VAR_8->stagemask = FUNC_3(VAR_4->repo->index,
           VAR_6->two->path);





   break;

  default:
   FUNC_0("unhandled diff-index status '%c'", VAR_6->status);
   break;
  }
 }
}
