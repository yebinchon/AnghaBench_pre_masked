
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rename_conflict_info {TYPE_5__* ren1; } ;
struct merge_options {char const* branch1; char* branch2; TYPE_3__* priv; } ;
struct TYPE_15__ {char* path; } ;
struct merge_file_info {TYPE_7__ blob; } ;
struct diff_filespec {char* path; } ;
struct TYPE_16__ {char* path; } ;
struct TYPE_14__ {char* path; } ;
struct TYPE_13__ {char* branch; TYPE_4__* dst_entry; TYPE_2__* src_entry; TYPE_1__* pair; } ;
struct TYPE_12__ {TYPE_8__* stages; } ;
struct TYPE_11__ {int call_depth; } ;
struct TYPE_10__ {TYPE_6__* stages; } ;
struct TYPE_9__ {struct diff_filespec* two; struct diff_filespec* one; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct merge_options*,char*,char*,int *,char const*,char const*,TYPE_7__*,TYPE_8__*) ;
 scalar_t__ FUNC_3 (struct merge_options*,struct diff_filespec*,struct diff_filespec*,TYPE_6__*,char*,char*,char*,int,struct merge_file_info*) ;
 int FUNC_4 (struct merge_options*,int,int ,char*,char*,char const*,char*,char const*) ;
 char* FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct merge_options *VAR_0,
        struct rename_conflict_info *VAR_1)
{

 struct diff_filespec *VAR_2 = VAR_1->ren1->pair->one;
 struct diff_filespec *VAR_3 = VAR_1->ren1->pair->two;
 char *VAR_4 = VAR_3->path;
 char *VAR_5;
 struct merge_file_info VAR_6;

 const char *VAR_7 = VAR_1->ren1->branch;
 const char *VAR_8 = (VAR_0->branch1 == VAR_7 ?
      VAR_0->branch2 : VAR_0->branch1);
 int VAR_9 = (VAR_1->ren1->branch == VAR_0->branch1 ? 3 : 2);

 FUNC_4(VAR_0, 1, FUNC_0("CONFLICT (rename/add): "
        "Rename %s->%s in %s.  Added %s in %s"),
        VAR_2->path, VAR_3->path, VAR_7,
        VAR_3->path, VAR_8);

 VAR_5 = FUNC_5("version of %s from %s", VAR_4, VAR_2->path);
 VAR_1->ren1->src_entry->stages[VAR_9].path = VAR_2->path;
 if (FUNC_3(VAR_0, VAR_2, VAR_3,
        &VAR_1->ren1->src_entry->stages[VAR_9],
        VAR_5,
        VAR_0->branch1, VAR_0->branch2,
        1 + VAR_0->priv->call_depth * 2, &VAR_6))
  return -1;
 FUNC_1(VAR_5);

 VAR_1->ren1->dst_entry->stages[VAR_9].path = VAR_6.blob.path = VAR_3->path;
 return FUNC_2(VAR_0,
         VAR_3->path, VAR_2->path, ((void*)0),
         VAR_7, VAR_8,
         &VAR_6.blob,
         &VAR_1->ren1->dst_entry->stages[VAR_9]);
}
