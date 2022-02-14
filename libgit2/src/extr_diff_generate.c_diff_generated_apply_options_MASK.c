
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_repository ;
typedef int git_pool ;
typedef scalar_t__ git_iterator_type_t ;
struct TYPE_14__ {int pathspec; } ;
typedef TYPE_2__ git_diff_options ;
struct TYPE_17__ {int flags; int context_lines; scalar_t__ ignore_submodules; char const* old_prefix; char const* new_prefix; } ;
struct TYPE_13__ {scalar_t__ old_src; scalar_t__ new_src; TYPE_5__ opts; int pool; int * repo; } ;
struct TYPE_15__ {TYPE_1__ base; int diffcaps; int pathspec; } ;
typedef TYPE_3__ git_diff_generated ;
struct TYPE_16__ {int value; } ;
typedef TYPE_4__ git_config_entry ;
typedef int git_config ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 char* FUNC_2 (scalar_t__,int) ;
 void* FUNC_3 (int *,char const*) ;
 int FUNC_4 (int*,int *,int ) ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (TYPE_4__**,int *,char*,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int **,int *) ;
 scalar_t__ FUNC_13 (scalar_t__*,int ) ;
 int FUNC_14 (TYPE_5__*,TYPE_2__ const*,int) ;

__attribute__((used)) static int FUNC_15(
 git_diff_generated *VAR_20,
 const git_diff_options *VAR_21)
{
 git_config *VAR_22 = ((void*)0);
 git_repository *VAR_23 = VAR_20->base.repo;
 git_pool *VAR_24 = &VAR_20->base.pool;
 int VAR_25;

 if (VAR_21) {

  bool VAR_26 = FUNC_0(VAR_20, VAR_10);
  FUNC_14(&VAR_20->base.opts, VAR_21, sizeof(VAR_20->base.opts));
  FUNC_1(VAR_20, VAR_10, VAR_26);


  if (FUNC_11(&VAR_20->pathspec, &VAR_21->pathspec, VAR_24) < 0)
   return -1;
 }


 if (FUNC_0(VAR_20, VAR_13))
  VAR_20->base.opts.flags |= VAR_12;


 if (FUNC_0(VAR_20, VAR_16))
  VAR_20->base.opts.flags |= VAR_14;


 if ((VAR_25 = FUNC_12(&VAR_22, VAR_23)) < 0)
  return VAR_25;

 if (!FUNC_4(&VAR_25, VAR_22, VAR_4) && VAR_25)
  VAR_20->diffcaps |= VAR_6;

 if (!FUNC_4(&VAR_25, VAR_22, VAR_3) && VAR_25)
  VAR_20->diffcaps |= VAR_7;

 if ((VAR_20->base.opts.flags & VAR_11) == 0 &&
  !FUNC_4(&VAR_25, VAR_22, VAR_2) && VAR_25)
  VAR_20->diffcaps |= VAR_9;

 if (!FUNC_4(&VAR_25, VAR_22, VAR_5) && VAR_25)
  VAR_20->diffcaps |= VAR_8;




 if (!VAR_21) {
  int VAR_27 = FUNC_6(VAR_22, "diff.context", 3);
  VAR_20->base.opts.context_lines = VAR_27 >= 0 ? (uint32_t)VAR_27 : 3;


 }


 if (FUNC_0(VAR_20, VAR_15)) {
  git_iterator_type_t VAR_28 = VAR_20->base.old_src;
  VAR_20->base.old_src = VAR_20->base.new_src;
  VAR_20->base.new_src = VAR_28;
 }


 if (FUNC_0(VAR_20, VAR_17) &&
  (!(VAR_20->base.old_src == VAR_19 ||
     VAR_20->base.new_src == VAR_19) ||
   !(VAR_20->base.old_src == VAR_18 ||
     VAR_20->base.new_src == VAR_18)))
  VAR_20->base.opts.flags &= ~VAR_17;


 if (VAR_20->base.opts.ignore_submodules <= 0) {
   git_config_entry *VAR_29;
  FUNC_7(&VAR_29, VAR_22, "diff.ignoresubmodules", 1);

  if (VAR_29 && FUNC_13(
    &VAR_20->base.opts.ignore_submodules, VAR_29->value) < 0)
   FUNC_10();
  FUNC_8(VAR_29);
 }


 if (!VAR_20->base.opts.old_prefix || !VAR_20->base.opts.new_prefix) {
  const char *VAR_30 = VAR_1;
  const char *VAR_31 = VAR_0;

  if (FUNC_5(VAR_22, "diff.noprefix", 0))
   VAR_30 = VAR_31 = "";
  else if (FUNC_5(VAR_22, "diff.mnemonicprefix", 0)) {
   VAR_30 = FUNC_2(VAR_20->base.old_src, 1);
   VAR_31 = FUNC_2(VAR_20->base.new_src, 0);
  }

  if (!VAR_20->base.opts.old_prefix)
   VAR_20->base.opts.old_prefix = VAR_30;
  if (!VAR_20->base.opts.new_prefix)
   VAR_20->base.opts.new_prefix = VAR_31;
 }


 VAR_20->base.opts.old_prefix = FUNC_3(VAR_24, VAR_20->base.opts.old_prefix);
 VAR_20->base.opts.new_prefix = FUNC_3(VAR_24, VAR_20->base.opts.new_prefix);

 if (FUNC_0(VAR_20, VAR_15)) {
  const char *VAR_32 = VAR_20->base.opts.old_prefix;
  VAR_20->base.opts.old_prefix = VAR_20->base.opts.new_prefix;
  VAR_20->base.opts.new_prefix = VAR_32;
 }

 FUNC_9(VAR_22);


 return (!VAR_20->base.opts.old_prefix || !VAR_20->base.opts.new_prefix) ? -1 : 0;
}
