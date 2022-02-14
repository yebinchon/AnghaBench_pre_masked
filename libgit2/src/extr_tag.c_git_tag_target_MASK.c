
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int repo; } ;
struct TYPE_6__ {int type; int target; TYPE_1__ object; } ;
typedef TYPE_2__ git_tag ;
typedef int git_object ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int **,int ,int *,int ) ;

int FUNC_2(git_object **VAR_0, const git_tag *VAR_1)
{
 FUNC_0(VAR_1);
 return FUNC_1(VAR_0, VAR_1->object.repo, &VAR_1->target, VAR_1->type);
}
