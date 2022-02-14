
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int path; } ;
typedef TYPE_3__ git_merge_file_result ;
typedef int git_buf ;
struct TYPE_9__ {char* our_label; char* their_label; } ;
struct TYPE_12__ {TYPE_1__ opts; int repo; } ;
typedef TYPE_4__ checkout_data ;
struct TYPE_13__ {TYPE_2__* ours; int name_collision; } ;
typedef TYPE_5__ checkout_conflictdata ;
struct TYPE_10__ {int path; } ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(
 git_buf *VAR_0,
 checkout_data *VAR_1,
 checkout_conflictdata *VAR_2,
 git_merge_file_result *VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7 = 0;

 if ((VAR_7 = FUNC_1(VAR_0, FUNC_2(VAR_1->repo), VAR_3->path)) < 0)
  return VAR_7;


 if (!VAR_2->name_collision)
  return 0;


 VAR_4 = VAR_1->opts.our_label ? VAR_1->opts.our_label : "ours";
 VAR_5 = VAR_1->opts.their_label ? VAR_1->opts.their_label : "theirs";
 VAR_6 = FUNC_3(VAR_3->path, VAR_2->ours->path) == 0 ? VAR_4 : VAR_5;

 if ((VAR_7 = FUNC_0(VAR_0, VAR_6)) < 0)
  return VAR_7;

 return 0;
}
