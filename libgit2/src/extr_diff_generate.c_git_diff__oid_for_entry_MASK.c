
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct stat {int dummy; } ;
typedef int git_submodule ;
typedef int const git_oid ;
struct TYPE_18__ {int const id; scalar_t__ mode; scalar_t__ file_size; int path; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;
typedef int git_filter_list ;
struct TYPE_16__ {int oid_calculations; int stat_calls; } ;
struct TYPE_17__ {int repo; TYPE_1__ perf; } ;
struct TYPE_19__ {int diffcaps; int index_updated; TYPE_2__ base; } ;
typedef TYPE_4__ git_diff_generated ;
struct TYPE_20__ {scalar_t__ type; } ;
typedef TYPE_5__ git_diff ;
struct TYPE_21__ {int ptr; } ;
typedef TYPE_6__ git_buf ;


 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,struct stat*,int) ;
 int FUNC_13 (int const*,int,size_t,int ,int *) ;
 int FUNC_14 (int const*,int ) ;
 int FUNC_15 (int const*,int const*) ;
 scalar_t__ FUNC_16 (int const*,int const*) ;
 int FUNC_17 (int ,int ,char*) ;
 int FUNC_18 (int **,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,int ,int ) ;
 int const* FUNC_22 (int *) ;
 int FUNC_23 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_24 (int const*,int ,int) ;
 int FUNC_25 (int) ;
 scalar_t__ FUNC_26 (int ,struct stat*) ;

int FUNC_27(
 git_oid *VAR_8,
 git_diff *VAR_9,
 const git_index_entry *VAR_10,
 uint16_t VAR_11,
 const git_oid *VAR_12)
{
 git_diff_generated *VAR_13;
 git_buf VAR_14 = VAR_0;
 git_index_entry VAR_15 = *VAR_10;
 git_filter_list *VAR_16 = ((void*)0);
 int VAR_17 = 0;

 FUNC_2(VAR_9->type == VAR_2);
 VAR_13 = (git_diff_generated *)VAR_9;

 FUNC_24(VAR_8, 0, sizeof(*VAR_8));

 if (FUNC_5(&VAR_14,
  FUNC_19(VAR_13->base.repo), VAR_15.path) < 0)
  return -1;

 if (!VAR_11) {
  struct stat VAR_18;

  VAR_13->base.perf.stat_calls++;

  if (FUNC_26(VAR_14.ptr, &VAR_18) < 0) {
   VAR_17 = FUNC_17(VAR_7, VAR_15.path, "stat");
   FUNC_4(&VAR_14);
   return VAR_17;
  }

  FUNC_12(&VAR_15,
   &VAR_18, (VAR_13->diffcaps & VAR_1) != 0);
 }


 if (FUNC_0(VAR_11)) {
  git_submodule *VAR_19;

  if (!FUNC_21(&VAR_19, VAR_13->base.repo, VAR_15.path)) {
   const git_oid *VAR_20 = FUNC_22(VAR_19);
   if (VAR_20)
    FUNC_15(VAR_8, VAR_20);
   FUNC_20(VAR_19);
  } else {



   FUNC_6();
  }
 } else if (FUNC_1(VAR_11)) {
  VAR_17 = FUNC_14(VAR_8, VAR_14.ptr);
  VAR_13->base.perf.oid_calculations++;
 } else if (!FUNC_3(VAR_15.file_size)) {
  FUNC_7(VAR_3, "file size overflow (for 32-bits) on '%s'",
   VAR_15.path);
  VAR_17 = -1;
 } else if (!(VAR_17 = FUNC_9(&VAR_16,
  VAR_13->base.repo, ((void*)0), VAR_15.path,
  VAR_5, VAR_4)))
 {
  int VAR_21 = FUNC_10(VAR_14.ptr);
  if (VAR_21 < 0)
   VAR_17 = VAR_21;
  else {
   VAR_17 = FUNC_13(
    VAR_8, VAR_21, (size_t)VAR_15.file_size, VAR_6, VAR_16);
   FUNC_25(VAR_21);
   VAR_13->base.perf.oid_calculations++;
  }

  FUNC_8(VAR_16);
 }


 if (!VAR_17 && VAR_12 && FUNC_16(VAR_8, VAR_12)) {
  git_index *VAR_22;
  git_index_entry VAR_23;

  FUNC_23(&VAR_23, &VAR_15, sizeof(git_index_entry));
  VAR_23.mode = VAR_11;
  FUNC_15(&VAR_23.id, VAR_8);

  if (!(VAR_17 = FUNC_18(&VAR_22,
   VAR_13->base.repo))) {
   VAR_17 = FUNC_11(VAR_22, &VAR_23);
   VAR_13->index_updated = 1;
  }
  }

 FUNC_4(&VAR_14);
 return VAR_17;
}
