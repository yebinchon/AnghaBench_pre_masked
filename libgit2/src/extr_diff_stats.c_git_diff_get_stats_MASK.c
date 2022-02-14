
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_6__* delta; } ;
typedef TYPE_4__ git_patch ;
struct TYPE_18__ {size_t max_name; size_t max_filestat; size_t files_changed; size_t insertions; size_t deletions; int max_digits; TYPE_3__* filestats; int renames; int * diff; } ;
typedef TYPE_5__ git_diff_stats ;
struct TYPE_15__ {int path; } ;
struct TYPE_14__ {int path; } ;
struct TYPE_19__ {TYPE_2__ old_file; TYPE_1__ new_file; } ;
typedef TYPE_6__ git_diff_delta ;
typedef int git_diff ;
typedef int diff_file_stats ;
struct TYPE_16__ {size_t insertions; size_t deletions; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t) ;
 void* FUNC_4 (size_t,int) ;
 int FUNC_5 (TYPE_5__*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__**,int *,size_t) ;
 int FUNC_10 (int *,size_t*,size_t*,TYPE_4__*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 size_t FUNC_12 (int ) ;

int FUNC_13(
 git_diff_stats **VAR_0,
 git_diff *VAR_1)
{
 size_t VAR_2, VAR_3;
 size_t VAR_4 = 0, VAR_5 = 0;
 git_diff_stats *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_2(VAR_0 && VAR_1);

 VAR_6 = FUNC_4(1, sizeof(git_diff_stats));
 FUNC_0(VAR_6);

 VAR_3 = FUNC_6(VAR_1);

 VAR_6->filestats = FUNC_4(VAR_3, sizeof(diff_file_stats));
 if (!VAR_6->filestats) {
  FUNC_5(VAR_6);
  return -1;
 }

 VAR_6->diff = VAR_1;
 FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_3 && !VAR_7; ++VAR_2) {
  git_patch *VAR_8 = ((void*)0);
  size_t VAR_9 = 0, VAR_10 = 0, VAR_11;
  const git_diff_delta *VAR_12;

  if ((VAR_7 = FUNC_9(&VAR_8, VAR_1, VAR_2)) < 0)
   break;


  VAR_12 = VAR_8->delta;


  VAR_11 = FUNC_12(VAR_12->new_file.path);
  if (FUNC_11(VAR_12->old_file.path, VAR_12->new_file.path) != 0) {
   VAR_11 += FUNC_12(VAR_12->old_file.path);
   VAR_6->renames++;
  }


  VAR_7 = FUNC_10(((void*)0), &VAR_9, &VAR_10, VAR_8);

  FUNC_8(VAR_8);

  VAR_6->filestats[VAR_2].insertions = VAR_9;
  VAR_6->filestats[VAR_2].deletions = VAR_10;

  VAR_4 += VAR_9;
  VAR_5 += VAR_10;

  if (VAR_6->max_name < VAR_11)
   VAR_6->max_name = VAR_11;
  if (VAR_6->max_filestat < VAR_9 + VAR_10)
   VAR_6->max_filestat = VAR_9 + VAR_10;
 }

 VAR_6->files_changed = VAR_3;
 VAR_6->insertions = VAR_4;
 VAR_6->deletions = VAR_5;
 VAR_6->max_digits = FUNC_3(VAR_6->max_filestat + 1);

 if (VAR_7 < 0) {
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
 }

 *VAR_0 = VAR_6;
 return VAR_7;
}
