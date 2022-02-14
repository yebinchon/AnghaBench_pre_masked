
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct patch_id_args {int ctx; scalar_t__ first_file; int result; } ;
struct TYPE_11__ {int path; } ;
struct TYPE_10__ {int path; } ;
struct TYPE_12__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_13__ {int size; int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (float) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,char*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(
 const git_diff_delta *VAR_1,
 float VAR_2,
 void *VAR_3)
{
 struct patch_id_args *VAR_4 = (struct patch_id_args *) VAR_3;
 git_buf VAR_5 = VAR_0;
 int VAR_6;

 FUNC_0(VAR_2);

 if (!VAR_4->first_file &&
     (VAR_6 = FUNC_1(&VAR_4->result, &VAR_4->ctx)) < 0)
  goto out;
 VAR_4->first_file = 0;

 if ((VAR_6 = FUNC_3(&VAR_5,
        "diff--gita/%sb/%s---a/%s+++b/%s",
        VAR_1->old_file.path,
        VAR_1->new_file.path,
        VAR_1->old_file.path,
        VAR_1->new_file.path)) < 0)
  goto out;

 FUNC_5(&VAR_5);

 if ((VAR_6 = FUNC_4(&VAR_4->ctx, VAR_5.ptr, VAR_5.size)) < 0)
  goto out;

out:
 FUNC_2(&VAR_5);
 return VAR_6;
}
