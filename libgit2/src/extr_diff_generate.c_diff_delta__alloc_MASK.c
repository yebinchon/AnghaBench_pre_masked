
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int pool; } ;
struct TYPE_14__ {TYPE_3__ base; } ;
typedef TYPE_4__ git_diff_generated ;
struct TYPE_12__ {int * path; } ;
struct TYPE_11__ {int * path; } ;
struct TYPE_15__ {int status; TYPE_2__ old_file; TYPE_1__ new_file; } ;
typedef TYPE_5__ git_diff_delta ;
typedef int git_delta_t ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;


 int VAR_0 ;
 TYPE_5__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int * FUNC_3 (int *,char const*) ;

__attribute__((used)) static git_diff_delta *FUNC_4(
 git_diff_generated *VAR_1,
 git_delta_t VAR_2,
 const char *VAR_3)
{
 git_diff_delta *VAR_4 = FUNC_1(1, sizeof(git_diff_delta));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->old_file.path = FUNC_3(&VAR_1->base.pool, VAR_3);
 if (VAR_4->old_file.path == ((void*)0)) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_4->new_file.path = VAR_4->old_file.path;

 if (FUNC_0(VAR_1, VAR_0)) {
  switch (VAR_2) {
  case 129: VAR_2 = 128; break;
  case 128: VAR_2 = 129; break;
  default: break;
  }
 }
 VAR_4->status = VAR_2;

 return VAR_4;
}
