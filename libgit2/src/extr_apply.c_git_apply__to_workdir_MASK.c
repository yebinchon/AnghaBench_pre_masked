
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


struct TYPE_17__ {int length; scalar_t__ contents; } ;
typedef TYPE_4__ git_vector ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_15__ {scalar_t__ path; } ;
struct TYPE_14__ {scalar_t__ path; } ;
struct TYPE_18__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_5__ git_diff_delta ;
typedef int git_diff ;
struct TYPE_16__ {char** strings; int count; } ;
struct TYPE_19__ {int * baseline_index; TYPE_3__ paths; int checkout_strategy; } ;
typedef TYPE_6__ git_checkout_options ;
typedef int git_apply_options ;
typedef scalar_t__ git_apply_location_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (int *,int *,TYPE_6__*) ;
 TYPE_5__* FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,size_t,int *) ;
 int FUNC_6 (TYPE_4__*,void*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(
 git_repository *VAR_7,
 git_diff *VAR_8,
 git_index *VAR_9,
 git_index *VAR_10,
 git_apply_location_t VAR_11,
 git_apply_options *VAR_12)
{
 git_vector VAR_13 = VAR_6;
 git_checkout_options VAR_14 = VAR_4;
 const git_diff_delta *VAR_15;
 size_t VAR_16;
 int VAR_17;

 FUNC_0(VAR_12);





 if ((VAR_17 = FUNC_5(&VAR_13, FUNC_3(VAR_8), ((void*)0))) < 0)
  goto done;

 for (VAR_16 = 0; VAR_16 < FUNC_3(VAR_8); VAR_16++) {
  VAR_15 = FUNC_2(VAR_8, VAR_16);

  if ((VAR_17 = FUNC_6(&VAR_13, (void *)VAR_15->old_file.path)) < 0)
   goto done;

  if (FUNC_7(VAR_15->old_file.path, VAR_15->new_file.path) &&
      (VAR_17 = FUNC_6(&VAR_13, (void *)VAR_15->new_file.path)) < 0)
   goto done;
 }

 VAR_14.checkout_strategy |= VAR_5;
 VAR_14.checkout_strategy |= VAR_1;
 VAR_14.checkout_strategy |= VAR_3;

 if (VAR_11 == VAR_0)
  VAR_14.checkout_strategy |= VAR_2;

 VAR_14.paths.strings = (char **)VAR_13.contents;
 VAR_14.paths.count = VAR_13.length;

 VAR_14.baseline_index = VAR_9;

 VAR_17 = FUNC_1(VAR_7, VAR_10, &VAR_14);

done:
 FUNC_4(&VAR_13);
 return VAR_17;
}
