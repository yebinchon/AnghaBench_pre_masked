
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int default_driver; int repo; TYPE_3__* theirs; TYPE_2__* ours; TYPE_1__* ancestor; } ;
typedef TYPE_4__ git_merge_driver_source ;
typedef int git_merge_driver ;
struct TYPE_8__ {int * path; } ;
struct TYPE_7__ {int * path; } ;
struct TYPE_6__ {int * path; } ;


 char* FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (char const**,int ,char const*,int ) ;

int FUNC_3(
 const char **VAR_0,
 git_merge_driver **VAR_1,
 const git_merge_driver_source *VAR_2)
{
 const char *VAR_3, *VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_0(
  VAR_2->ancestor ? VAR_2->ancestor->path : ((void*)0),
  VAR_2->ours ? VAR_2->ours->path : ((void*)0),
  VAR_2->theirs ? VAR_2->theirs->path : ((void*)0));

 if ((VAR_5 = FUNC_2(
   &VAR_4, VAR_2->repo, VAR_3, VAR_2->default_driver)) < 0)
  return VAR_5;

 *VAR_0 = VAR_4;
 *VAR_1 = FUNC_1(VAR_4);
 return VAR_5;
}
