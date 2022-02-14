
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int num_lines; int final_buf_size; int final_buf; int lineno; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct blame_scoreboard *VAR_0)
{
 VAR_0->num_lines = FUNC_0(&VAR_0->lineno, VAR_0->final_buf,
      VAR_0->final_buf_size);
 return VAR_0->num_lines;
}
