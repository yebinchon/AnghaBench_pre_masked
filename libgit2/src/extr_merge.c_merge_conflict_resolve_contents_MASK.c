
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_24__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int git_odb ;
struct TYPE_27__ {int default_driver; } ;
typedef TYPE_2__ git_merge_options ;
struct TYPE_28__ {int member_0; } ;
typedef TYPE_3__ git_merge_file_result ;
struct TYPE_29__ {scalar_t__ favor; } ;
typedef TYPE_4__ git_merge_file_options ;
struct TYPE_30__ {int * theirs; int * ours; int * ancestor; TYPE_4__ const* file_opts; int default_driver; int repo; int member_0; } ;
typedef TYPE_5__ git_merge_driver_source ;
struct TYPE_32__ {int apply; } ;
struct TYPE_25__ {int member_0; } ;
struct TYPE_31__ {scalar_t__ favor; TYPE_7__ base; TYPE_1__ member_0; } ;
typedef TYPE_6__ git_merge_driver__builtin ;
typedef TYPE_7__ git_merge_driver ;
struct TYPE_33__ {int resolved; int staged; int repo; } ;
typedef TYPE_8__ git_merge_diff_list ;
struct TYPE_34__ {int their_entry; int our_entry; int ancestor_entry; } ;
typedef TYPE_9__ git_merge_diff ;
typedef TYPE_9__ git_index_entry ;
struct TYPE_26__ {TYPE_7__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_24__ VAR_4 ;
 int FUNC_2 (char const**,TYPE_7__**,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_9__*) ;
 int FUNC_6 (TYPE_9__ const*) ;
 int FUNC_7 (TYPE_9__**,char const*,TYPE_7__*,TYPE_8__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(
 int *VAR_5,
 git_merge_diff_list *VAR_6,
 const git_merge_diff *VAR_7,
 const git_merge_options *VAR_8,
 const git_merge_file_options *VAR_9)
{
 git_merge_driver_source VAR_10 = {0};
 git_merge_file_result VAR_11 = {0};
 git_merge_driver *VAR_12;
 git_merge_driver__builtin VAR_13 = {0};
 git_index_entry *VAR_14;
 git_odb *VAR_15 = ((void*)0);
 const char *VAR_16;
 bool VAR_17 = 0;
 int VAR_18;

 FUNC_1(VAR_5 && VAR_6 && VAR_7);

 *VAR_5 = 0;

 if (!FUNC_6(VAR_7))
  return 0;

 VAR_10.repo = VAR_6->repo;
 VAR_10.default_driver = VAR_8->default_driver;
 VAR_10.file_opts = VAR_9;
 VAR_10.ancestor = FUNC_0(VAR_7->ancestor_entry) ?
  &VAR_7->ancestor_entry : ((void*)0);
 VAR_10.ours = FUNC_0(VAR_7->our_entry) ?
  &VAR_7->our_entry : ((void*)0);
 VAR_10.theirs = FUNC_0(VAR_7->their_entry) ?
  &VAR_7->their_entry : ((void*)0);

 if (VAR_9->favor != VAR_1) {




  VAR_16 = "text";
  VAR_13.base.apply = VAR_3;
  VAR_13.favor = VAR_9->favor;

  VAR_12 = &VAR_13.base;
 } else {

  if ((VAR_18 = FUNC_2(&VAR_16, &VAR_12, &VAR_10)) < 0)
   goto done;

  if (VAR_12 == ((void*)0))
   VAR_17 = 1;
 }

 if (VAR_12) {
  VAR_18 = FUNC_7(&VAR_14, VAR_16, VAR_12,
   VAR_6, &VAR_10);

  if (VAR_18 == VAR_2)
   VAR_17 = 1;
 }

 if (VAR_17) {
  VAR_18 = FUNC_7(&VAR_14, "text",
   &VAR_4.base, VAR_6, &VAR_10);
 }

 if (VAR_18 < 0) {
  if (VAR_18 == VAR_0)
   VAR_18 = 0;

  goto done;
 }

 FUNC_5(&VAR_6->staged, VAR_14);
 FUNC_5(&VAR_6->resolved, (git_merge_diff *)VAR_7);

 *VAR_5 = 1;

done:
 FUNC_3(&VAR_11);
 FUNC_4(VAR_15);

 return VAR_18;
}
