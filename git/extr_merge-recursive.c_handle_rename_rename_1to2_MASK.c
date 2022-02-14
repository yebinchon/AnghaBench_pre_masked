
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


struct rename_conflict_info {TYPE_8__* ren1; TYPE_7__* ren2; } ;
struct merge_options {TYPE_4__* repo; TYPE_3__* priv; } ;
struct diff_filespec {char* path; } ;
struct merge_file_info {struct diff_filespec blob; } ;
struct TYPE_16__ {int branch; TYPE_5__* dst_entry; TYPE_1__* pair; } ;
struct TYPE_15__ {int branch; TYPE_6__* dst_entry; TYPE_2__* pair; } ;
struct TYPE_14__ {struct diff_filespec* stages; } ;
struct TYPE_13__ {struct diff_filespec* stages; } ;
struct TYPE_12__ {int index; } ;
struct TYPE_11__ {int call_depth; } ;
struct TYPE_10__ {struct diff_filespec* two; } ;
struct TYPE_9__ {struct diff_filespec* two; struct diff_filespec* one; } ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (struct merge_options*,char*,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct merge_options*,char*,int *,int *,int ,int ,struct diff_filespec*,struct diff_filespec*) ;
 scalar_t__ FUNC_4 (struct diff_filespec*) ;
 scalar_t__ FUNC_5 (struct merge_options*,struct diff_filespec*,struct diff_filespec*,struct diff_filespec*,char*,int ,int ,int,struct merge_file_info*) ;
 int FUNC_6 (struct merge_options*,int,char*,char*,char*,int ,char*,char*,int ,char*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct merge_options*,int ,struct diff_filespec*,char*) ;
 scalar_t__ FUNC_9 (struct merge_options*,char*,int *,struct diff_filespec*,struct diff_filespec*) ;
 char* FUNC_10 (char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_11(struct merge_options *VAR_0,
         struct rename_conflict_info *VAR_1)
{

 struct merge_file_info VAR_2;
 struct diff_filespec *VAR_3;
 struct diff_filespec *VAR_4 = VAR_1->ren1->pair->one;
 struct diff_filespec *VAR_5 = VAR_1->ren1->pair->two;
 struct diff_filespec *VAR_6 = VAR_1->ren2->pair->two;
 char *VAR_7;

 FUNC_6(VAR_0, 1, FUNC_0("CONFLICT (rename/rename): "
        "Rename \"%s\"->\"%s\" in branch \"%s\" "
        "rename \"%s\"->\"%s\" in \"%s\"%s"),
        VAR_4->path, VAR_5->path, VAR_1->ren1->branch,
        VAR_4->path, VAR_6->path, VAR_1->ren2->branch,
        VAR_0->priv->call_depth ? FUNC_0(" (left unresolved)") : "");

 VAR_7 = FUNC_10("%s and %s, both renamed from %s",
       VAR_5->path, VAR_6->path, VAR_4->path);
 if (FUNC_5(VAR_0, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_1->ren1->branch, VAR_1->ren2->branch,
        VAR_0->priv->call_depth * 2, &VAR_2))
  return -1;
 FUNC_2(VAR_7);

 if (VAR_0->priv->call_depth) {






  if (FUNC_8(VAR_0, 0, &VAR_2.blob, VAR_4->path))
   return -1;
  VAR_3 = &VAR_1->ren1->dst_entry->stages[1 << 1];
  if (FUNC_4(VAR_3)) {
   if (FUNC_8(VAR_0, 0, VAR_3, VAR_5->path))
    return -1;
  }
  else
   FUNC_7(VAR_0->repo->index, VAR_5->path);
  VAR_3 = &VAR_1->ren2->dst_entry->stages[3 ^ 1];
  if (FUNC_4(VAR_3)) {
   if (FUNC_8(VAR_0, 0, VAR_3, VAR_6->path))
    return -1;
  }
  else
   FUNC_7(VAR_0->repo->index, VAR_6->path);
 } else {





  VAR_3 = &VAR_1->ren1->dst_entry->stages[1 << 1];
  if (FUNC_4(VAR_3)) {
   VAR_3->path = VAR_2.blob.path = VAR_5->path;
   if (FUNC_3(VAR_0, VAR_5->path,
        ((void*)0), ((void*)0),
        VAR_1->ren1->branch,
        VAR_1->ren2->branch,
        &VAR_2.blob, VAR_3) < 0)
    return -1;
  } else {
   char *VAR_8 = FUNC_1(VAR_0, VAR_5->path,
        VAR_1->ren1->branch,
        VAR_1->ren2->branch);
   if (FUNC_8(VAR_0, 0, &VAR_2.blob,
     VAR_8 ? VAR_8 : VAR_5->path))
    return -1;
   FUNC_2(VAR_8);
   if (FUNC_9(VAR_0, VAR_5->path, ((void*)0), VAR_5, ((void*)0)))
    return -1;
  }

  VAR_3 = &VAR_1->ren2->dst_entry->stages[3 ^ 1];
  if (FUNC_4(VAR_3)) {
   VAR_3->path = VAR_2.blob.path = VAR_6->path;
   if (FUNC_3(VAR_0, VAR_6->path,
        ((void*)0), ((void*)0),
        VAR_1->ren1->branch,
        VAR_1->ren2->branch,
        VAR_3, &VAR_2.blob) < 0)
    return -1;
  } else {
   char *VAR_9 = FUNC_1(VAR_0, VAR_6->path,
        VAR_1->ren2->branch,
        VAR_1->ren1->branch);
   if (FUNC_8(VAR_0, 0, &VAR_2.blob,
     VAR_9 ? VAR_9 : VAR_6->path))
    return -1;
   FUNC_2(VAR_9);
   if (FUNC_9(VAR_0, VAR_6->path, ((void*)0), ((void*)0), VAR_6))
    return -1;
  }
 }

 return 0;
}
