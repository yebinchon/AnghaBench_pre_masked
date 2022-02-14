
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_4__ {int newest_commit; } ;
struct TYPE_5__ {int path; scalar_t__ final; scalar_t__ final_blob; TYPE_1__ options; int repository; } ;
typedef TYPE_2__ git_blame ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int *) ;
 int FUNC_1 (int **,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(git_blame *VAR_1)
{
 int VAR_2;

 if (VAR_1->final_blob) return 0;

 VAR_2 = FUNC_0(&VAR_1->final, VAR_1->repository, &VAR_1->options.newest_commit);
 if (VAR_2 < 0)
  goto cleanup;
 VAR_2 = FUNC_1((git_object**)&VAR_1->final_blob,
   (git_object*)VAR_1->final, VAR_1->path, VAR_0);

cleanup:
 return VAR_2;
}
