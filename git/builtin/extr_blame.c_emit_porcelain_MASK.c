
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blame_scoreboard {char const* final_buf; int final_buf_size; } ;
struct blame_origin {TYPE_2__* commit; } ;
struct blame_entry {int s_lno; int lno; int num_lines; struct blame_origin* suspect; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct blame_scoreboard*,int) ;
 int FUNC_1 (struct blame_origin*,int) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char*,int,int,...) ;
 int FUNC_4 (char) ;

__attribute__((used)) static void FUNC_5(struct blame_scoreboard *VAR_2, struct blame_entry *VAR_3,
      int VAR_4)
{
 int VAR_5 = VAR_4 & VAR_1;
 int VAR_6;
 const char *VAR_7;
 struct blame_origin *VAR_8 = VAR_3->suspect;
 char VAR_9[VAR_0 + 1];

 FUNC_2(VAR_9, &VAR_8->commit->object.oid);
 FUNC_3("%s %d %d %d\n",
        VAR_9,
        VAR_3->s_lno + 1,
        VAR_3->lno + 1,
        VAR_3->num_lines);
 FUNC_1(VAR_8, VAR_5);

 VAR_7 = FUNC_0(VAR_2, VAR_3->lno);
 for (VAR_6 = 0; VAR_6 < VAR_3->num_lines; VAR_6++) {
  char VAR_10;
  if (VAR_6) {
   FUNC_3("%s %d %d\n", VAR_9,
          VAR_3->s_lno + 1 + VAR_6,
          VAR_3->lno + 1 + VAR_6);
   if (VAR_5)
    FUNC_1(VAR_8, 1);
  }
  FUNC_4('\t');
  do {
   VAR_10 = *VAR_7++;
   FUNC_4(VAR_10);
  } while (VAR_10 != '\n' &&
    VAR_7 < VAR_2->final_buf + VAR_2->final_buf_size);
 }

 if (VAR_2->final_buf_size && VAR_7[-1] != '\n')
  FUNC_4('\n');
}
