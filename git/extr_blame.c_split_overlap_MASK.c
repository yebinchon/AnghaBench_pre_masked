
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {int dummy; } ;
struct blame_entry {int s_lno; int lno; int num_lines; struct blame_origin* suspect; int unblamable; int ignored; } ;


 void* FUNC_0 (struct blame_origin*) ;
 int FUNC_1 (struct blame_entry*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct blame_entry *VAR_0,
     struct blame_entry *VAR_1,
     int VAR_2, int VAR_3, int VAR_4,
     struct blame_origin *VAR_5)
{
 int VAR_6;
 int VAR_7;
 FUNC_1(VAR_0, 0, sizeof(struct blame_entry [3]));

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_0[VAR_7].ignored = VAR_1->ignored;
  VAR_0[VAR_7].unblamable = VAR_1->unblamable;
 }

 if (VAR_1->s_lno < VAR_2) {

  VAR_0[0].suspect = FUNC_0(VAR_1->suspect);
  VAR_0[0].lno = VAR_1->lno;
  VAR_0[0].s_lno = VAR_1->s_lno;
  VAR_0[0].num_lines = VAR_2 - VAR_1->s_lno;
  VAR_0[1].lno = VAR_1->lno + VAR_2 - VAR_1->s_lno;
  VAR_0[1].s_lno = VAR_3;
 }
 else {
  VAR_0[1].lno = VAR_1->lno;
  VAR_0[1].s_lno = VAR_3 + (VAR_1->s_lno - VAR_2);
 }

 if (VAR_4 < VAR_1->s_lno + VAR_1->num_lines) {

  VAR_0[2].suspect = FUNC_0(VAR_1->suspect);
  VAR_0[2].lno = VAR_1->lno + (VAR_4 - VAR_1->s_lno);
  VAR_0[2].s_lno = VAR_1->s_lno + (VAR_4 - VAR_1->s_lno);
  VAR_0[2].num_lines = VAR_1->s_lno + VAR_1->num_lines - VAR_4;
  VAR_6 = VAR_0[2].lno;
 }
 else
  VAR_6 = VAR_1->lno + VAR_1->num_lines;
 VAR_0[1].num_lines = VAR_6 - VAR_0[1].lno;





 if (VAR_0[1].num_lines < 1)
  return;
 VAR_0[1].suspect = FUNC_0(VAR_5);
}
