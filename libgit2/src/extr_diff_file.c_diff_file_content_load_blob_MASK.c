
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_odb_object ;
typedef int git_object ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ git_diff_options ;
struct TYPE_9__ {size_t len; void* data; } ;
struct TYPE_11__ {int blob; TYPE_1__ map; int flags; TYPE_4__* file; int repo; } ;
typedef TYPE_3__ git_diff_file_content ;
typedef int git_blob ;
struct TYPE_12__ {scalar_t__ mode; int id; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int **,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int **,int ) ;
 int FUNC_6 (int **,int ,int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
 git_diff_file_content *VAR_4,
 git_diff_options *VAR_5)
{
 int VAR_6 = 0;
 git_odb_object *VAR_7 = ((void*)0);

 if (FUNC_8(&VAR_4->file->id))
  return 0;

 if (VAR_4->file->mode == VAR_2)
  return FUNC_1(VAR_4, 0);


 if (!VAR_4->file->size) {
  if ((VAR_6 = FUNC_5(
    VAR_4->file, &VAR_7, VAR_4->repo)) < 0)
   return VAR_6;
 }

 if ((VAR_5->flags & VAR_1) == 0 &&
  FUNC_0(VAR_4))
  return 0;

 if (VAR_7 != ((void*)0)) {
  VAR_6 = FUNC_6(
   (git_object **)&VAR_4->blob, VAR_4->repo, VAR_7, VAR_3);
  FUNC_7(VAR_7);
 } else {
  VAR_6 = FUNC_2(
   (git_blob **)&VAR_4->blob, VAR_4->repo, &VAR_4->file->id);
 }

 if (!VAR_6) {
  VAR_4->flags |= VAR_0;
  VAR_4->map.data = (void *)FUNC_3(VAR_4->blob);
  VAR_4->map.len = (size_t)FUNC_4(VAR_4->blob);
 }

 return VAR_6;
}
