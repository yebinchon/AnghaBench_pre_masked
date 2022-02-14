
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int symbolic; } ;
struct TYPE_7__ {int name; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int *,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(git_repository *VAR_1, const char *VAR_2, void *VAR_3)
{
 git_reference *VAR_4 = (git_reference *) VAR_3;
 git_reference *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (FUNC_1(&VAR_5, VAR_1, VAR_2) < 0 ||
  FUNC_3(VAR_5) != VAR_0)
  goto done;

 VAR_6 = !FUNC_0(VAR_5->target.symbolic, VAR_4->name);

done:
 FUNC_2(VAR_5);
 return VAR_6;
}
