
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_blame__origin ;
struct TYPE_6__ {size_t s_lno; size_t num_lines; int suspect; scalar_t__ guilty; struct TYPE_6__* next; } ;
typedef TYPE_1__ git_blame__entry ;
struct TYPE_7__ {TYPE_1__* ent; } ;
typedef TYPE_2__ git_blame ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,size_t,size_t,size_t,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(
  git_blame *VAR_0,
  size_t VAR_1,
  size_t VAR_2,
  size_t VAR_3,
  git_blame__origin *VAR_4,
  git_blame__origin *VAR_5)
{
 git_blame__entry *VAR_6;

 for (VAR_6 = VAR_0->ent; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->guilty || !FUNC_1(VAR_6->suspect, VAR_4))
   continue;
  if (VAR_3 <= VAR_6->s_lno)
   continue;
  if (VAR_1 < VAR_6->s_lno + VAR_6->num_lines) {
   if (FUNC_0(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3, VAR_5) < 0)
    return -1;
  }
 }

 return 0;
}
