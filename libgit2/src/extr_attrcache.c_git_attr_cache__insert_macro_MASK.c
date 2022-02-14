
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_12__ {int pattern; } ;
struct TYPE_13__ {scalar_t__ length; } ;
struct TYPE_14__ {TYPE_1__ match; TYPE_2__ assigns; } ;
typedef TYPE_3__ git_attr_rule ;
struct TYPE_15__ {int macros; } ;
typedef TYPE_4__ git_attr_cache ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;

int FUNC_6(git_repository *VAR_0, git_attr_rule *VAR_1)
{
 git_attr_cache *VAR_2 = FUNC_3(VAR_0);
 git_attr_rule *VAR_3;
 bool VAR_4 = 0;
 int VAR_5 = 0;
 if (VAR_1->assigns.length == 0) {
  FUNC_2(VAR_1);
  goto out;
 }

 if ((VAR_5 = FUNC_0(VAR_2)) < 0)
  goto out;
 VAR_4 = 1;

 if ((VAR_3 = FUNC_4(VAR_2->macros, VAR_1->match.pattern)) != ((void*)0))
     FUNC_2(VAR_3);

 if ((VAR_5 = FUNC_5(VAR_2->macros, VAR_1->match.pattern, VAR_1)) < 0)
     goto out;

out:
 if (VAR_4)
  FUNC_1(VAR_2);
 return VAR_5;
}
