
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
struct pathspec_match_context {int dummy; } ;
struct TYPE_15__ {size_t length; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_16__ {int pool; int failures; int matches; } ;
typedef TYPE_2__ git_pathspec_match_list ;
struct TYPE_17__ {int prefix; TYPE_1__ pathspec; } ;
typedef TYPE_3__ git_pathspec ;
typedef int git_iterator ;
struct TYPE_18__ {int path; } ;
typedef TYPE_4__ git_index_entry ;
typedef int git_index ;
typedef int git_bitvec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (TYPE_4__ const**,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (size_t*,TYPE_1__*,struct pathspec_match_context*,int ,int *) ;
 char* FUNC_13 (int *,int ) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_16 (int *,size_t) ;
 scalar_t__ FUNC_17 (int *,TYPE_1__*,struct pathspec_match_context*,size_t,int ,int *) ;
 TYPE_2__* FUNC_18 (TYPE_3__*,int ) ;
 int FUNC_19 (struct pathspec_match_context*,int,int ) ;
 int FUNC_20 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_21(
 git_pathspec_match_list **VAR_10,
 git_iterator *VAR_11,
 uint32_t VAR_12,
 git_pathspec *VAR_13)
{
 int VAR_14 = 0;
 git_pathspec_match_list *VAR_15 = ((void*)0);
 const git_index_entry *VAR_16 = ((void*)0);
 struct pathspec_match_context VAR_17;
 git_vector *VAR_18 = &VAR_13->pathspec;
 bool VAR_19 = VAR_10 && (VAR_12 & VAR_6) != 0;
 bool VAR_20 = !VAR_10 || (VAR_12 & VAR_5) != 0;
 size_t VAR_21, VAR_22 = 0, VAR_23 = 0;
 git_index *VAR_24 = ((void*)0);
 git_bitvec VAR_25;
 char **VAR_26;

 if (FUNC_3(&VAR_25, VAR_18->length) < 0)
  return -1;

 if (VAR_10) {
  *VAR_10 = VAR_15 = FUNC_18(VAR_13, VAR_9);
  FUNC_0(VAR_15);
 }

 if ((VAR_14 = FUNC_10(VAR_11, VAR_13->prefix, VAR_13->prefix)) < 0)
  goto done;

 if (FUNC_11(VAR_11) == VAR_3 &&
  (VAR_14 = FUNC_14(
   &VAR_24, FUNC_9(VAR_11))) < 0)
  goto done;

 FUNC_19(
  &VAR_17, (VAR_12 & VAR_7) != 0,
  FUNC_8(VAR_11));

 while (!(VAR_14 = FUNC_6(&VAR_16, VAR_11))) {

  int VAR_27 = FUNC_12(
   &VAR_21, VAR_18, &VAR_17, VAR_16->path, ((void*)0));


  if (VAR_27 < 0)
   continue;


  if (!VAR_27) {
   VAR_22 += FUNC_16(&VAR_25, VAR_21);
   continue;
  }


  if (VAR_24 != ((void*)0) &&
   FUNC_7(VAR_11) &&
   FUNC_5(((void*)0), VAR_24, VAR_16->path, 0, VAR_2) < 0)
   continue;


  VAR_22 += FUNC_16(&VAR_25, VAR_21);
  ++VAR_23;


  if (VAR_19 && VAR_22 < VAR_18->length)
   VAR_22 += FUNC_17(
    &VAR_25, VAR_18, &VAR_17, VAR_21 + 1, VAR_16->path, ((void*)0));


  if (VAR_20 || !VAR_10) {
   if (VAR_22 == VAR_18->length)
    break;
   continue;
  }


  if ((VAR_26 = (char **)FUNC_1(VAR_15->matches)) == ((void*)0) ||
   (*VAR_26 = FUNC_13(&VAR_15->pool, VAR_16->path)) == ((void*)0)) {
   VAR_14 = -1;
   goto done;
  }
 }

 if (VAR_14 < 0 && VAR_14 != VAR_4)
  goto done;
 VAR_14 = 0;


 if (VAR_19 && VAR_22 < VAR_18->length &&
  (VAR_14 = FUNC_15(
   &VAR_15->failures, VAR_18, &VAR_25, &VAR_15->pool)) < 0)
  goto done;


 if ((VAR_12 & VAR_8) != 0 && !VAR_23) {
  FUNC_4(VAR_1, "no matching files were found");
  VAR_14 = VAR_0;
 }

done:
 FUNC_2(&VAR_25);

 if (VAR_14 < 0) {
  FUNC_20(VAR_15);
  if (VAR_10) *VAR_10 = ((void*)0);
 }

 return VAR_14;
}
