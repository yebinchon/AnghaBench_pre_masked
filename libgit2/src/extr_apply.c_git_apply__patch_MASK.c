
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ size; } ;
struct TYPE_12__ {TYPE_2__* delta; TYPE_1__ hunks; } ;
typedef TYPE_3__ git_patch ;
struct TYPE_13__ {int mode; int path; } ;
typedef TYPE_4__ git_diff_file ;
typedef int git_buf ;
typedef int git_apply_options ;
struct TYPE_14__ {int opts; int member_0; } ;
typedef TYPE_5__ apply_hunks_ctx ;
struct TYPE_11__ {scalar_t__ status; int flags; TYPE_4__ new_file; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char const*,size_t,TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,size_t,TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,size_t) ;
 int FUNC_8 (int *,int const*,int) ;

int FUNC_9(
 git_buf *VAR_4,
 char **VAR_5,
 unsigned int *VAR_6,
 const char *VAR_7,
 size_t VAR_8,
 git_patch *VAR_9,
 const git_apply_options *VAR_10)
{
 apply_hunks_ctx VAR_11 = { VAR_0 };
 char *VAR_12 = ((void*)0);
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_3(VAR_4 && VAR_5 && VAR_6 && (VAR_7 || !VAR_8) && VAR_9);

 if (VAR_10)
  FUNC_8(&VAR_11.opts, VAR_10, sizeof(git_apply_options));

 *VAR_5 = ((void*)0);
 *VAR_6 = 0;

 if (VAR_9->delta->status != VAR_1) {
  const git_diff_file *VAR_15 = &VAR_9->delta->new_file;

  VAR_12 = FUNC_5(VAR_15->path);
  VAR_13 = VAR_15->mode ?
   VAR_15->mode : VAR_3;
 }

 if (VAR_9->delta->flags & VAR_2)
  VAR_14 = FUNC_0(VAR_4, VAR_7, VAR_8, VAR_9);
 else if (VAR_9->hunks.size)
  VAR_14 = FUNC_2(VAR_4, VAR_7, VAR_8, VAR_9, &VAR_11);
 else
  VAR_14 = FUNC_7(VAR_4, VAR_7, VAR_8);

 if (VAR_14)
  goto done;

 if (VAR_9->delta->status == VAR_1 &&
  FUNC_6(VAR_4) > 0) {
  VAR_14 = FUNC_1("removal patch leaves file contents");
  goto done;
 }

 *VAR_5 = VAR_12;
 *VAR_6 = VAR_13;

done:
 if (VAR_14 < 0)
  FUNC_4(VAR_12);

 return VAR_14;
}
