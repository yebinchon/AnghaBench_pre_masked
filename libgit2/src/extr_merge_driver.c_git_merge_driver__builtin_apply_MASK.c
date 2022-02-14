
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_18__ {int * ptr; int len; int automergeable; int member_0; } ;
typedef TYPE_1__ git_merge_file_result ;
struct TYPE_19__ {int flags; scalar_t__ favor; } ;
typedef TYPE_2__ git_merge_file_options ;
struct TYPE_20__ {TYPE_11__* theirs; TYPE_10__* ours; TYPE_9__* ancestor; int repo; int file_opts; } ;
typedef TYPE_3__ git_merge_driver_source ;
struct TYPE_21__ {scalar_t__ favor; } ;
typedef TYPE_4__ git_merge_driver__builtin ;
typedef int git_merge_driver ;
struct TYPE_22__ {char* ptr; int asize; int size; } ;
typedef TYPE_5__ git_buf ;
struct TYPE_23__ {int mode; int * path; } ;
struct TYPE_17__ {int mode; int * path; } ;
struct TYPE_16__ {int mode; int * path; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ,int ) ;
 char* FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_9__*,TYPE_10__*,TYPE_11__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

int FUNC_6(
 git_merge_driver *VAR_3,
 const char **VAR_4,
 uint32_t *VAR_5,
 git_buf *VAR_6,
 const char *VAR_7,
 const git_merge_driver_source *VAR_8)
{
 git_merge_driver__builtin *VAR_9 = (git_merge_driver__builtin *)VAR_3;
 git_merge_file_options VAR_10 = VAR_2;
 git_merge_file_result VAR_11 = {0};
 int VAR_12;

 FUNC_0(VAR_7);

 if (VAR_8->file_opts)
  FUNC_5(&VAR_10, VAR_8->file_opts, sizeof(git_merge_file_options));

 if (VAR_9->favor)
  VAR_10.favor = VAR_9->favor;

 if ((VAR_12 = FUNC_3(&VAR_11, VAR_8->repo,
  VAR_8->ancestor, VAR_8->ours, VAR_8->theirs, &VAR_10)) < 0)
  goto done;

 if (!VAR_11.automergeable &&
  !(VAR_10.flags & VAR_1)) {
  VAR_12 = VAR_0;
  goto done;
 }

 *VAR_4 = FUNC_2(
  VAR_8->ancestor ? VAR_8->ancestor->path : ((void*)0),
  VAR_8->ours ? VAR_8->ours->path : ((void*)0),
  VAR_8->theirs ? VAR_8->theirs->path : ((void*)0));

 *VAR_5 = FUNC_1(
  VAR_8->ancestor ? VAR_8->ancestor->mode : 0,
  VAR_8->ours ? VAR_8->ours->mode : 0,
  VAR_8->theirs ? VAR_8->theirs->mode : 0);

 VAR_6->ptr = (char *)VAR_11.ptr;
 VAR_6->size = VAR_11.len;
 VAR_6->asize = VAR_11.len;
 VAR_11.ptr = ((void*)0);

done:
 FUNC_4(&VAR_11);
 return VAR_12;
}
