
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int dummy; } ;
struct blame_entry {int score; scalar_t__ num_lines; scalar_t__ lno; } ;


 char* FUNC_0 (struct blame_scoreboard*,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int) ;

unsigned FUNC_2(struct blame_scoreboard *VAR_0, struct blame_entry *VAR_1)
{
 unsigned VAR_2;
 const char *VAR_3, *VAR_4;

 if (VAR_1->score)
  return VAR_1->score;

 VAR_2 = 1;
 VAR_3 = FUNC_0(VAR_0, VAR_1->lno);
 VAR_4 = FUNC_0(VAR_0, VAR_1->lno + VAR_1->num_lines);
 while (VAR_3 < VAR_4) {
  unsigned VAR_5 = *((unsigned char *)VAR_3);
  if (FUNC_1(VAR_5))
   VAR_2++;
  VAR_3++;
 }
 VAR_1->score = VAR_2;
 return VAR_2;
}
