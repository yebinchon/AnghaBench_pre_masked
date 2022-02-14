
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int git_filter_list ;
typedef scalar_t__ git_file ;
struct TYPE_17__ {int flags; } ;
typedef TYPE_2__ git_diff_options ;
struct TYPE_20__ {scalar_t__ data; int len; } ;
struct TYPE_18__ {int flags; TYPE_6__ map; TYPE_1__* file; int repo; } ;
typedef TYPE_3__ git_diff_file_content ;
struct TYPE_19__ {scalar_t__ ptr; int size; } ;
typedef TYPE_4__ git_buf ;
struct TYPE_16__ {scalar_t__ size; int path; } ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,int *,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_6__*,scalar_t__,int ,size_t) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,size_t) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(
 git_diff_file_content *VAR_6,
 git_buf *VAR_7,
 git_diff_options *VAR_8)
{
 int VAR_9 = 0;
 git_filter_list *VAR_10 = ((void*)0);
 git_file VAR_11 = FUNC_9(FUNC_1(VAR_7));
 git_buf VAR_12 = VAR_0;

 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_6->file->size &&
  !(VAR_6->file->size = FUNC_7(VAR_11)))
  goto cleanup;

 if ((VAR_8->flags & VAR_3) == 0 &&
  FUNC_0(VAR_6))
  goto cleanup;

 if ((VAR_9 = FUNC_6(
   &VAR_10, VAR_6->repo, ((void*)0), VAR_6->file->path,
   VAR_5, VAR_4)) < 0)
  goto cleanup;


 if (VAR_10 == ((void*)0)) {
  if (!(VAR_9 = FUNC_8(
    &VAR_6->map, VAR_11, 0, (size_t)VAR_6->file->size))) {
   VAR_6->flags |= VAR_2;
   goto cleanup;
  }


  FUNC_3();
 }

 if (!(VAR_9 = FUNC_10(&VAR_12, VAR_11, (size_t)VAR_6->file->size))) {
  git_buf VAR_13 = VAR_0;

  VAR_9 = FUNC_4(&VAR_13, VAR_10, &VAR_12);

  if (VAR_13.ptr != VAR_12.ptr)
   FUNC_2(&VAR_12);

  if (!VAR_9) {
   VAR_6->map.len = VAR_13.size;
   VAR_6->map.data = VAR_13.ptr;
   VAR_6->flags |= VAR_1;
  }
 }

cleanup:
 FUNC_5(VAR_10);
 FUNC_11(VAR_11);

 return VAR_9;
}
