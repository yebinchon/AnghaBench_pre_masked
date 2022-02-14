
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int dummy; } ;
struct blame_entry {scalar_t__ suspect; } ;


 scalar_t__ FUNC_0 (struct blame_scoreboard*,struct blame_entry*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct blame_entry*) ;
 int FUNC_3 (struct blame_entry*,struct blame_entry*,int) ;

__attribute__((used)) static void FUNC_4(struct blame_scoreboard *VAR_0,
     struct blame_entry *VAR_1,
     struct blame_entry *VAR_2)
{
 int VAR_3;

 if (!VAR_2[1].suspect)
  return;
 if (VAR_1[1].suspect) {
  if (FUNC_0(VAR_0, &VAR_2[1]) <
      FUNC_0(VAR_0, &VAR_1[1]))
   return;
 }

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  FUNC_1(VAR_2[VAR_3].suspect);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1, VAR_2, sizeof(struct blame_entry[3]));
}
