
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {scalar_t__ commit_count; int ** commits; } ;
typedef TYPE_1__ describe_options ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(git_repository *VAR_0, describe_options *VAR_1)
{
 if (VAR_1->commit_count == 0)
  FUNC_0(VAR_0, VAR_1, ((void*)0));
 else
 {
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->commit_count; VAR_2++)
   FUNC_0(VAR_0, VAR_1, VAR_1->commits[VAR_2]);
 }
}
