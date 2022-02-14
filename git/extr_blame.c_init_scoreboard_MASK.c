
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int copy_score; int move_score; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blame_scoreboard*,int ,int) ;

void FUNC_1(struct blame_scoreboard *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(struct blame_scoreboard));
 VAR_2->move_score = VAR_1;
 VAR_2->copy_score = VAR_0;
}
