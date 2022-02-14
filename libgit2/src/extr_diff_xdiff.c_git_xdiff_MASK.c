
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int info ;
struct TYPE_9__ {int error; } ;
struct TYPE_15__ {TYPE_3__* priv; } ;
struct TYPE_14__ {int flags; int * find_func; int * find_func_priv; } ;
struct TYPE_10__ {TYPE_1__ output; TYPE_7__ callback; TYPE_6__ config; int params; } ;
typedef TYPE_2__ git_xdiff_output ;
struct TYPE_13__ {scalar_t__ size; int ptr; } ;
struct TYPE_12__ {scalar_t__ size; int ptr; } ;
struct TYPE_11__ {TYPE_5__ xd_new_data; TYPE_4__ xd_old_data; TYPE_2__* xo; int * patch; } ;
typedef TYPE_3__ git_xdiff_info ;
typedef int git_patch_generated_output ;
typedef int git_patch_generated ;
typedef int git_diff_find_context_payload ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__*,int *) ;
 int FUNC_5 (int *,scalar_t__*,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,int *,TYPE_6__*,TYPE_7__*) ;

__attribute__((used)) static int FUNC_8(git_patch_generated_output *VAR_3, git_patch_generated *VAR_4)
{
 git_xdiff_output *VAR_5 = (git_xdiff_output *)VAR_3;
 git_xdiff_info VAR_6;
 git_diff_find_context_payload VAR_7;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.patch = VAR_4;
 VAR_6.xo = VAR_5;

 VAR_5->callback.priv = &VAR_6;

 FUNC_1(
  &VAR_5->config.find_func, &VAR_7, FUNC_3(VAR_4));
 VAR_5->config.find_func_priv = &VAR_7;

 if (VAR_5->config.find_func != ((void*)0))
  VAR_5->config.flags |= VAR_2;
 else
  VAR_5->config.flags &= ~VAR_2;





 FUNC_5(&VAR_6.xd_old_data.ptr, &VAR_6.xd_old_data.size, VAR_4);
 FUNC_4(&VAR_6.xd_new_data.ptr, &VAR_6.xd_new_data.size, VAR_4);

 if (VAR_6.xd_old_data.size > VAR_1 ||
  VAR_6.xd_new_data.size > VAR_1) {
  FUNC_2(VAR_0, "files too large for diff");
  return -1;
 }

 FUNC_7(&VAR_6.xd_old_data, &VAR_6.xd_new_data,
  &VAR_5->params, &VAR_5->config, &VAR_5->callback);

 FUNC_0(&VAR_7);

 return VAR_5->output.error;
}
