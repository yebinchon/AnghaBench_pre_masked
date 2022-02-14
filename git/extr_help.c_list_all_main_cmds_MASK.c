
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct cmdnames {int cnt; TYPE_1__** names; } ;
typedef int other_cmds ;
typedef int main_cmds ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct cmdnames*) ;
 int FUNC_1 (char*,struct cmdnames*,struct cmdnames*) ;
 int FUNC_2 (struct cmdnames*,int ,int) ;
 int FUNC_3 (struct string_list*,int ) ;

void FUNC_4(struct string_list *VAR_0)
{
 struct cmdnames VAR_1, VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1, 0, sizeof(VAR_1));
 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 FUNC_1("git-", &VAR_1, &VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1.cnt; VAR_3++)
  FUNC_3(VAR_0, VAR_1.names[VAR_3]->name);

 FUNC_0(&VAR_1);
 FUNC_0(&VAR_2);
}
