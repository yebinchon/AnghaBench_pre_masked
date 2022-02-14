
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct column_options {char* indent; int padding; } ;
struct cmdnames {int cnt; TYPE_1__** names; } ;
typedef int copts ;
struct TYPE_2__ {int name; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct string_list VAR_2 ;
 int FUNC_0 (struct column_options*,int ,int) ;
 int FUNC_1 (struct string_list*,unsigned int,struct column_options*) ;
 int FUNC_2 (struct string_list*,int ) ;
 int FUNC_3 (struct string_list*,int ) ;

__attribute__((used)) static void FUNC_4(struct cmdnames *VAR_3, unsigned int VAR_4)
{
 struct string_list VAR_5 = VAR_2;
 struct column_options VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->cnt; VAR_7++)
  FUNC_2(&VAR_5, VAR_3->names[VAR_7]->name);




 VAR_4 = (VAR_4 & ~VAR_1) | VAR_0;
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.indent = "  ";
 VAR_6.padding = 2;
 FUNC_1(&VAR_5, VAR_4, &VAR_6);
 FUNC_3(&VAR_5, 0);
}
