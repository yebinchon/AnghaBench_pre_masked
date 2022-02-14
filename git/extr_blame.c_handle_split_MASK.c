
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int dummy; } ;
struct blame_origin {int dummy; } ;
struct blame_entry {int num_lines; scalar_t__ s_lno; } ;


 int FUNC_0 (struct blame_scoreboard*,struct blame_entry*,struct blame_entry*) ;
 int FUNC_1 (struct blame_entry*) ;
 int FUNC_2 (struct blame_entry*,struct blame_entry*,int,int,int,struct blame_origin*) ;

__attribute__((used)) static void FUNC_3(struct blame_scoreboard *VAR_0,
    struct blame_entry *VAR_1,
    int VAR_2, int VAR_3, int VAR_4,
    struct blame_origin *VAR_5,
    struct blame_entry *VAR_6)
{
 if (VAR_1->num_lines <= VAR_2)
  return;
 if (VAR_2 < VAR_4) {
  struct blame_entry VAR_7[3];
  VAR_2 += VAR_1->s_lno;
  VAR_4 += VAR_1->s_lno;
  FUNC_2(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_0(VAR_0, VAR_6, VAR_7);
  FUNC_1(VAR_7);
 }
}
