
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wdfile ;
struct TYPE_14__ {char* path; int mode; int file_size; int id; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_15__ {char* path; int mode; int flags; int size; int id; } ;
typedef TYPE_3__ git_diff_file ;
struct TYPE_16__ {int status; TYPE_3__ old_file; TYPE_3__ new_file; } ;
typedef TYPE_4__ git_diff_delta ;
typedef int git_checkout_notify_t ;
struct TYPE_13__ {int (* notify_cb ) (int,char const*,TYPE_3__ const*,TYPE_3__ const*,TYPE_3__ const*,int ) ;int notify_flags; int notify_payload; } ;
struct TYPE_17__ {TYPE_1__ opts; } ;
typedef TYPE_5__ checkout_data ;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int,char const*,TYPE_3__ const*,TYPE_3__ const*,TYPE_3__ const*,int ) ;

__attribute__((used)) static int FUNC_4(
 checkout_data *VAR_1,
 git_checkout_notify_t VAR_2,
 const git_diff_delta *VAR_3,
 const git_index_entry *VAR_4)
{
 git_diff_file VAR_5;
 const git_diff_file *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 const char *VAR_9 = ((void*)0);

 if (!VAR_1->opts.notify_cb ||
  (VAR_2 & VAR_1->opts.notify_flags) == 0)
  return 0;

 if (VAR_4) {
  FUNC_2(&VAR_5, 0, sizeof(VAR_5));

  FUNC_1(&VAR_5.id, &VAR_4->id);
  VAR_5.path = VAR_4->path;
  VAR_5.size = VAR_4->file_size;
  VAR_5.flags = VAR_0;
  VAR_5.mode = VAR_4->mode;

  VAR_8 = &VAR_5;

  VAR_9 = VAR_4->path;
 }

 if (VAR_3) {
  switch (VAR_3->status) {
  case 130:
  case 132:
  case 131:
  default:
   VAR_6 = &VAR_3->old_file;
   VAR_7 = &VAR_3->new_file;
   break;
  case 135:
  case 133:
  case 128:
  case 129:
   VAR_7 = &VAR_3->new_file;
   break;
  case 134:
   VAR_6 = &VAR_3->old_file;
   break;
  }

  VAR_9 = VAR_3->old_file.path;
 }

 {
  int VAR_10 = VAR_1->opts.notify_cb(
   VAR_2, VAR_9, VAR_6, VAR_7, VAR_8, VAR_1->opts.notify_payload);

  return FUNC_0(
   VAR_10, "git_checkout notification");
 }
}
