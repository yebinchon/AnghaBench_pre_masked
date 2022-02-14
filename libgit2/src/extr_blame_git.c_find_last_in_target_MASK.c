
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_blame__origin ;
struct TYPE_4__ {size_t s_lno; size_t num_lines; int suspect; scalar_t__ guilty; struct TYPE_4__* next; } ;
typedef TYPE_1__ git_blame__entry ;
struct TYPE_5__ {TYPE_1__* ent; } ;
typedef TYPE_2__ git_blame ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(size_t *VAR_0, git_blame *VAR_1, git_blame__origin *VAR_2)
{
 git_blame__entry *VAR_3;
 size_t VAR_4 = 0;
 bool VAR_5 = 0;

 *VAR_0 = 0;

 for (VAR_3=VAR_1->ent; VAR_3; VAR_3=VAR_3->next) {
  if (VAR_3->guilty || !FUNC_0(VAR_3->suspect, VAR_2))
   continue;
  if (VAR_4 < VAR_3->s_lno + VAR_3->num_lines) {
   VAR_5 = 1;
   VAR_4 = VAR_3->s_lno + VAR_3->num_lines;
  }
 }

 *VAR_0 = VAR_4;
 return VAR_5;
}
