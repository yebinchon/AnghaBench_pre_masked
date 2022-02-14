
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int repo; } ;
struct TYPE_5__ {TYPE_2__ base; int ignores; } ;
typedef TYPE_1__ filesystem_iterator ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(filesystem_iterator *VAR_1)
{
 int VAR_2;

 if (FUNC_2(&VAR_1->base) &&
  (VAR_2 = FUNC_1(VAR_1->base.repo,
   ".gitignore", &VAR_1->ignores)) < 0)
  return VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1, ((void*)0))) < 0)
  return VAR_2;

 VAR_1->base.flags &= ~VAR_0;

 return 0;
}
