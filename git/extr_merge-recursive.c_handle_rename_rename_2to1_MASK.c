
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct rename_conflict_info {TYPE_7__* ren2; TYPE_6__* ren1; } ;
struct merge_options {TYPE_5__* priv; int branch2; int branch1; } ;
struct TYPE_17__ {char* path; } ;
struct merge_file_info {TYPE_8__ blob; } ;
struct diff_filespec {char* path; } ;
struct TYPE_16__ {int branch; TYPE_4__* src_entry; TYPE_2__* pair; } ;
struct TYPE_15__ {int branch; TYPE_3__* src_entry; TYPE_1__* pair; } ;
struct TYPE_14__ {int call_depth; } ;
struct TYPE_13__ {struct diff_filespec* stages; } ;
struct TYPE_12__ {struct diff_filespec* stages; } ;
struct TYPE_11__ {struct diff_filespec* two; struct diff_filespec* one; } ;
struct TYPE_10__ {struct diff_filespec* two; struct diff_filespec* one; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct merge_options*,char*,char*,char*,int ,int ,TYPE_8__*,TYPE_8__*) ;
 scalar_t__ FUNC_3 (struct merge_options*,struct diff_filespec*,struct diff_filespec*,struct diff_filespec*,char*,int ,int ,int,struct merge_file_info*) ;
 int FUNC_4 (struct merge_options*,int,int ,char*,char*,int ,char*,char*,int ) ;
 char* FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct merge_options *VAR_0,
         struct rename_conflict_info *VAR_1)
{

 struct diff_filespec *VAR_2 = VAR_1->ren1->pair->one;
 struct diff_filespec *VAR_3 = VAR_1->ren2->pair->one;
 struct diff_filespec *VAR_4 = VAR_1->ren1->pair->two;
 struct diff_filespec *VAR_5 = VAR_1->ren2->pair->two;
 char *VAR_6 = VAR_4->path;
 char *VAR_7;
 char *VAR_8;
 struct merge_file_info VAR_9;
 struct merge_file_info VAR_10;
 int VAR_11, VAR_12;

 FUNC_4(VAR_0, 1, FUNC_0("CONFLICT (rename/rename): "
        "Rename %s->%s in %s. "
        "Rename %s->%s in %s"),
        VAR_2->path, VAR_4->path, VAR_1->ren1->branch,
        VAR_3->path, VAR_5->path, VAR_1->ren2->branch);

 VAR_7 = FUNC_5("version of %s from %s", VAR_6, VAR_2->path);
 VAR_8 = FUNC_5("version of %s from %s", VAR_6, VAR_3->path);
 VAR_11 = VAR_1->ren1->branch == VAR_0->branch1 ? 3 : 2;
 VAR_12 = VAR_11 ^ 1;
 VAR_1->ren1->src_entry->stages[VAR_11].path = VAR_2->path;
 VAR_1->ren2->src_entry->stages[VAR_12].path = VAR_3->path;
 if (FUNC_3(VAR_0, VAR_2, VAR_4,
        &VAR_1->ren1->src_entry->stages[VAR_11],
        VAR_7,
        VAR_0->branch1, VAR_0->branch2,
        1 + VAR_0->priv->call_depth * 2, &VAR_9) ||
     FUNC_3(VAR_0, VAR_3,
        &VAR_1->ren2->src_entry->stages[VAR_12],
        VAR_5, VAR_8,
        VAR_0->branch1, VAR_0->branch2,
        1 + VAR_0->priv->call_depth * 2, &VAR_10))
  return -1;
 FUNC_1(VAR_7);
 FUNC_1(VAR_8);
 VAR_9 = VAR_6;
 VAR_10 = VAR_6;

 return FUNC_2(VAR_0, VAR_6, VAR_2->path, VAR_3->path,
         VAR_1->ren1->branch, VAR_1->ren2->branch,
         &VAR_9, &VAR_10);
}
