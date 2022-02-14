
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_pool ;
struct TYPE_10__ {int flags; TYPE_2__* pattern; int length; } ;
struct TYPE_11__ {int assigns; TYPE_1__ match; } ;
typedef TYPE_2__ git_attr_rule ;
struct TYPE_12__ {int pool; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int *,char const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int *,char const*) ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 int VAR_4;
 git_attr_rule *VAR_5 = ((void*)0);
 git_pool *VAR_6;

 if ((VAR_4 = FUNC_3(VAR_1)) < 0)
  return VAR_4;

 VAR_5 = FUNC_1(1, sizeof(git_attr_rule));
 FUNC_0(VAR_5);

 VAR_6 = &FUNC_7(VAR_1)->pool;

 VAR_5->match.pattern = FUNC_6(VAR_6, VAR_2);
 FUNC_0(VAR_5->match.pattern);

 VAR_5->match.length = FUNC_8(VAR_5->match.pattern);
 VAR_5->match.flags = VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_6, &VAR_5->assigns, &VAR_3);

 if (!VAR_4)
  VAR_4 = FUNC_4(VAR_1, VAR_5);

 if (VAR_4 < 0)
  FUNC_5(VAR_5);

 return VAR_4;
}
