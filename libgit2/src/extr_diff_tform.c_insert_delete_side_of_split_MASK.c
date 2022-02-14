
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_14__ {int flags; int path; } ;
struct TYPE_11__ {int path; } ;
struct TYPE_12__ {int nfiles; TYPE_4__ new_file; TYPE_1__ old_file; int status; } ;
typedef TYPE_2__ git_diff_delta ;
struct TYPE_13__ {int pool; } ;
typedef TYPE_3__ git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__ const*,int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_4(
 git_diff *VAR_2, git_vector *VAR_3, const git_diff_delta *VAR_4)
{

 git_diff_delta *VAR_5 = FUNC_1(VAR_4, &VAR_2->pool);
 FUNC_0(VAR_5);

 VAR_5->status = VAR_0;
 VAR_5->nfiles = 1;
 FUNC_3(&VAR_5->new_file, 0, sizeof(VAR_5->new_file));
 VAR_5->new_file.path = VAR_5->old_file.path;
 VAR_5->new_file.flags |= VAR_1;

 return FUNC_2(VAR_3, VAR_5);
}
