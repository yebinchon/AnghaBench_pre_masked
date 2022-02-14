
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_blame__origin ;
struct TYPE_4__ {size_t s_lno; size_t lno; size_t num_lines; int * suspect; } ;
typedef TYPE_1__ git_blame__entry ;


 void* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(git_blame__entry *VAR_0, git_blame__entry *VAR_1,
  size_t VAR_2, size_t VAR_3, size_t VAR_4, git_blame__origin *VAR_5)
{
 size_t VAR_6;

 if (VAR_1->s_lno < VAR_2) {

  VAR_0[0].suspect = FUNC_0(VAR_1->suspect);
  VAR_0[0].lno = VAR_1->lno;
  VAR_0[0].s_lno = VAR_1->s_lno;
  VAR_0[0].num_lines = VAR_2 - VAR_1->s_lno;
  VAR_0[1].lno = VAR_1->lno + VAR_2 - VAR_1->s_lno;
  VAR_0[1].s_lno = VAR_3;
 } else {
  VAR_0[1].lno = VAR_1->lno;
  VAR_0[1].s_lno = VAR_3 + (VAR_1->s_lno - VAR_2);
 }

 if (VAR_4 < VAR_1->s_lno + VAR_1->num_lines) {

  VAR_0[2].suspect = FUNC_0(VAR_1->suspect);
  VAR_0[2].lno = VAR_1->lno + (VAR_4 - VAR_1->s_lno);
  VAR_0[2].s_lno = VAR_1->s_lno + (VAR_4 - VAR_1->s_lno);
  VAR_0[2].num_lines = VAR_1->s_lno + VAR_1->num_lines - VAR_4;
  VAR_6 = VAR_0[2].lno;
 } else {
  VAR_6 = VAR_1->lno + VAR_1->num_lines;
 }
 VAR_0[1].num_lines = VAR_6 - VAR_0[1].lno;





 if (VAR_0[1].num_lines < 1)
  return;
 VAR_0[1].suspect = FUNC_0(VAR_5);
}
