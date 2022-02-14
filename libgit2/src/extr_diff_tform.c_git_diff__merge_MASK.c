
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int git_vector ;
typedef int git_pool ;
struct TYPE_21__ {int path; } ;
struct TYPE_22__ {TYPE_1__ old_file; } ;
typedef TYPE_2__ const git_diff_delta ;
typedef TYPE_2__ const* (* git_diff__merge_cb ) (TYPE_2__ const*,TYPE_2__ const*,int *) ;
struct TYPE_25__ {int flags; void* new_prefix; void* old_prefix; } ;
struct TYPE_24__ {unsigned int length; } ;
struct TYPE_23__ {TYPE_9__ opts; int pool; int new_src; int old_src; TYPE_7__ deltas; } ;
typedef TYPE_6__ git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ const* FUNC_0 (TYPE_7__*,unsigned int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__ const*) ;
 TYPE_2__ const* FUNC_4 (TYPE_2__ const*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_9__*,TYPE_2__ const*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 void* FUNC_9 (int *,void*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,unsigned int,int ) ;
 int FUNC_13 (int *,TYPE_2__ const*) ;
 int FUNC_14 (TYPE_7__*,int *) ;

int FUNC_15(
 git_diff *VAR_4, const git_diff *VAR_5, git_diff__merge_cb VAR_6)
{
 int VAR_7 = 0;
 git_pool VAR_8;
 git_vector VAR_9;
 git_diff_delta *VAR_10;
 bool VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;

 FUNC_2(VAR_4 && VAR_5);

 if (!VAR_5->deltas.length)
  return 0;

 VAR_11 = ((VAR_4->opts.flags & VAR_0) != 0);
 VAR_12 = ((VAR_4->opts.flags & VAR_1) != 0);

 if (VAR_11 != ((VAR_5->opts.flags & VAR_0) != 0) ||
  VAR_12 != ((VAR_5->opts.flags & VAR_1) != 0)) {
  FUNC_6(VAR_2,
   "attempt to merge diffs created with conflicting options");
  return -1;
 }

 if (FUNC_12(&VAR_9, VAR_4->deltas.length, VAR_3) < 0)
  return -1;

 FUNC_8(&VAR_8, 1);

 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_4->deltas.length || VAR_14 < VAR_5->deltas.length; ) {
  git_diff_delta *VAR_15 = FUNC_0(&VAR_4->deltas, VAR_13);
  const git_diff_delta *VAR_16 = FUNC_0(&VAR_5->deltas, VAR_14);
  int VAR_17 = !VAR_16 ? -1 : !VAR_15 ? 1 :
   FUNC_1(VAR_11, VAR_15->old_file.path, VAR_16->old_file.path);

  if (VAR_17 < 0) {
   VAR_10 = FUNC_4(VAR_15, &VAR_8);
   VAR_13++;
  } else if (VAR_17 > 0) {
   VAR_10 = FUNC_4(VAR_16, &VAR_8);
   VAR_14++;
  } else {
   const git_diff_delta *VAR_18 = VAR_12 ? VAR_16 : VAR_15;
   const git_diff_delta *VAR_19 = VAR_12 ? VAR_15 : VAR_16;

   VAR_10 = VAR_6(VAR_18, VAR_19, &VAR_8);
   VAR_13++;
   VAR_14++;
  }




  if (VAR_10 && FUNC_5(&VAR_4->opts, VAR_10)) {
   FUNC_3(VAR_10);
   continue;
  }

  if ((VAR_7 = !VAR_10 ? -1 : FUNC_13(&VAR_9, VAR_10)) < 0)
   break;
 }

 if (!VAR_7) {
  FUNC_14(&VAR_4->deltas, &VAR_9);
  FUNC_10(&VAR_4->pool, &VAR_8);

  if ((VAR_4->opts.flags & VAR_1) != 0)
   VAR_4->old_src = VAR_5->old_src;
  else
   VAR_4->new_src = VAR_5->new_src;


  VAR_4->opts.old_prefix =
   FUNC_9(&VAR_4->pool, VAR_4->opts.old_prefix);
  VAR_4->opts.new_prefix =
   FUNC_9(&VAR_4->pool, VAR_4->opts.new_prefix);
 }

 FUNC_11(&VAR_9);
 FUNC_7(&VAR_8);

 return VAR_7;
}
