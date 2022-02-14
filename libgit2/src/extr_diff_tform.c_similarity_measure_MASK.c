
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int similarity_info ;
struct TYPE_14__ {TYPE_1__* metric; } ;
typedef TYPE_2__ git_diff_find_options ;
struct TYPE_15__ {int size; int id; int flags; int mode; int path; } ;
typedef TYPE_3__ git_diff_file ;
struct TYPE_16__ {scalar_t__ old_src; scalar_t__ new_src; } ;
typedef TYPE_4__ git_diff ;
typedef int b_info ;
typedef int a_info ;
struct TYPE_13__ {int (* similarity ) (int*,void*,void*,int ) ;int payload; } ;


 int FUNC_0 (TYPE_2__ const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_4__*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,size_t) ;
 int FUNC_7 (int *,TYPE_4__*,size_t) ;
 int FUNC_8 (int *,TYPE_2__ const*,void**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int*,void*,void*,int ) ;

__attribute__((used)) static int FUNC_11(
 int *VAR_3,
 git_diff *VAR_4,
 const git_diff_find_options *VAR_5,
 void **VAR_6,
 size_t VAR_7,
 size_t VAR_8)
{
 git_diff_file *VAR_9 = FUNC_6(VAR_4, VAR_7);
 git_diff_file *VAR_10 = FUNC_6(VAR_4, VAR_8);
 bool VAR_11 = FUNC_0(VAR_5, VAR_0);
 int VAR_12 = 0;
 similarity_info VAR_13, VAR_14;

 *VAR_3 = -1;


 if (!FUNC_1(VAR_9->mode) || !FUNC_1(VAR_10->mode))
  return 0;


 if (VAR_11) {
  if (FUNC_4(&VAR_9->id) &&
   VAR_4->old_src == VAR_2 &&
   !FUNC_2(&VAR_9->id,
    VAR_4, VAR_9->path, VAR_9->mode, VAR_9->size))
   VAR_9->flags |= VAR_1;

  if (FUNC_4(&VAR_10->id) &&
   VAR_4->new_src == VAR_2 &&
   !FUNC_2(&VAR_10->id,
    VAR_4, VAR_10->path, VAR_10->mode, VAR_10->size))
   VAR_10->flags |= VAR_1;
 }


 if (FUNC_3(&VAR_9->id, &VAR_10->id) == 0) {
  *VAR_3 = 100;
  return 0;
 }


 if (VAR_11) {
  *VAR_3 = 0;
  return 0;
 }

 FUNC_5(&VAR_13, 0, sizeof(VAR_13));
 FUNC_5(&VAR_14, 0, sizeof(VAR_14));


 if (!VAR_6[VAR_7] && (VAR_12 = FUNC_7(&VAR_13, VAR_4, VAR_7)) < 0)
  return VAR_12;
 if (!VAR_6[VAR_8] && (VAR_12 = FUNC_7(&VAR_14, VAR_4, VAR_8)) < 0)
  goto cleanup;


 if (VAR_9->size > 127 &&
  VAR_10->size > 127 &&
  (VAR_9->size > (VAR_10->size << 3) ||
   VAR_10->size > (VAR_9->size << 3)))
  goto cleanup;


 if (!VAR_6[VAR_7]) {
  if ((VAR_12 = FUNC_8(&VAR_13, VAR_5, VAR_6)) < 0)
   goto cleanup;
 }
 if (!VAR_6[VAR_8]) {
  if ((VAR_12 = FUNC_8(&VAR_14, VAR_5, VAR_6)) < 0)
   goto cleanup;
 }




 if (VAR_6[VAR_7] && VAR_6[VAR_8])
  VAR_12 = VAR_5->metric->similarity(
   VAR_3, VAR_6[VAR_7], VAR_6[VAR_8], VAR_5->metric->payload);

cleanup:
 FUNC_9(&VAR_13);
 FUNC_9(&VAR_14);

 return VAR_12;
}
