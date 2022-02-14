
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;


struct TYPE_33__ {scalar_t__ mode; int len; scalar_t__ ptr; int * path; int member_0; } ;
typedef TYPE_2__ git_merge_file_result ;
struct TYPE_34__ {char* ancestor_label; char* our_label; char* their_label; int flags; } ;
typedef TYPE_3__ git_merge_file_options ;
struct TYPE_35__ {int * temp_buf; int * attr_session; } ;
typedef TYPE_4__ git_filter_options ;
typedef int git_filter_list ;
typedef int git_filebuf ;
struct TYPE_36__ {char* ptr; int size; } ;
typedef TYPE_5__ git_buf ;
struct TYPE_32__ {int checkout_strategy; char* ancestor_label; char* our_label; char* their_label; int dir_mode; int disable_filters; } ;
struct TYPE_37__ {int strategy; TYPE_1__ opts; int repo; int tmp; int attr_session; } ;
typedef TYPE_6__ checkout_data ;
struct TYPE_38__ {TYPE_12__* theirs; TYPE_11__* ours; int ancestor; } ;
typedef TYPE_7__ checkout_conflictdata ;
struct TYPE_31__ {int path; } ;
struct TYPE_30__ {int path; } ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*,TYPE_7__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_6__*,void*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,char*,int ) ;
 void* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void*,int ,scalar_t__) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int **,int ,int *,void*,int ,TYPE_4__*) ;
 int FUNC_10 (TYPE_5__*,int *,TYPE_5__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,int ,int ,TYPE_11__*,TYPE_12__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_6__*,char*,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(
 checkout_data *VAR_11,
 checkout_conflictdata *VAR_12)
{
 git_buf VAR_13 = VAR_0, VAR_14 = VAR_0,
  VAR_15 = VAR_0, VAR_16 = VAR_0,
  VAR_17 = VAR_0, VAR_18 = VAR_0;
 git_merge_file_options VAR_19 = VAR_9;
 git_merge_file_result VAR_20 = {0};
 git_filebuf VAR_21 = VAR_6;
 git_filter_list *VAR_22 = ((void*)0);
 git_filter_options VAR_23 = VAR_7;
 int VAR_24 = 0;

 if (VAR_11->opts.checkout_strategy & VAR_1)
  VAR_19.flags |= VAR_10;

 VAR_19.ancestor_label = VAR_11->opts.ancestor_label ?
  VAR_11->opts.ancestor_label : "ancestor";
 VAR_19.our_label = VAR_11->opts.our_label ?
  VAR_11->opts.our_label : "ours";
 VAR_19.their_label = VAR_11->opts.their_label ?
  VAR_11->opts.their_label : "theirs";




 if (VAR_12->ours && VAR_12->theirs &&
  FUNC_15(VAR_12->ours->path, VAR_12->theirs->path) != 0) {

  if ((VAR_24 = FUNC_2(
   &VAR_13, VAR_19.our_label, VAR_12->ours->path)) < 0 ||
   (VAR_24 = FUNC_2(
   &VAR_14, VAR_19.their_label, VAR_12->theirs->path)) < 0)
   goto done;

  VAR_19.our_label = FUNC_3(&VAR_13);
  VAR_19.their_label = FUNC_3(&VAR_14);
 }

 if ((VAR_24 = FUNC_12(&VAR_20, VAR_11->repo,
  VAR_12->ancestor, VAR_12->ours, VAR_12->theirs, &VAR_19)) < 0)
  goto done;

 if (VAR_20.path == ((void*)0) || VAR_20.mode == 0) {
  FUNC_5(VAR_4, "could not merge contents of file");
  VAR_24 = VAR_3;
  goto done;
 }

 if ((VAR_24 = FUNC_0(&VAR_16, VAR_11, VAR_12, &VAR_20)) < 0)
  goto done;

 if ((VAR_11->strategy & VAR_2) != 0 &&
  (VAR_24 = FUNC_1(VAR_11, FUNC_3(&VAR_16), VAR_20.mode)) <= 0)
  goto done;

 if (!VAR_11->opts.disable_filters) {
  VAR_17.ptr = (char *)VAR_20.ptr;
  VAR_17.size = VAR_20.len;

  VAR_23.attr_session = &VAR_11->attr_session;
  VAR_23.temp_buf = &VAR_11->tmp;

  if ((VAR_24 = FUNC_9(
    &VAR_22, VAR_11->repo, ((void*)0), FUNC_3(&VAR_16),
    VAR_8, &VAR_23)) < 0 ||
   (VAR_24 = FUNC_10(&VAR_18, VAR_22, &VAR_17)) < 0)
   goto done;
 } else {
  VAR_18.ptr = (char *)VAR_20.ptr;
  VAR_18.size = VAR_20.len;
 }

 if ((VAR_24 = FUNC_14(VAR_11, VAR_16.ptr, VAR_11->opts.dir_mode)) < 0 ||
  (VAR_24 = FUNC_7(&VAR_21, FUNC_3(&VAR_16), VAR_5, VAR_20.mode)) < 0 ||
  (VAR_24 = FUNC_8(&VAR_21, VAR_18.ptr, VAR_18.size)) < 0 ||
  (VAR_24 = FUNC_6(&VAR_21)) < 0)
  goto done;

done:
 FUNC_11(VAR_22);

 FUNC_4(&VAR_18);
 FUNC_4(&VAR_13);
 FUNC_4(&VAR_14);

 FUNC_13(&VAR_20);
 FUNC_4(&VAR_16);
 FUNC_4(&VAR_15);

 return VAR_24;
}
