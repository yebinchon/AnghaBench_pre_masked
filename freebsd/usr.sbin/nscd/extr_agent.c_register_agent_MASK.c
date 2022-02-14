
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_table {int agents_num; struct agent** agents; } ;
struct agent {int dummy; } ;


 int FUNC_0 (void (*) (struct agent_table*,struct agent*)) ;
 int FUNC_1 (void (*) (struct agent_table*,struct agent*)) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct agent**) ;
 struct agent** FUNC_4 (int) ;
 int FUNC_5 (struct agent**,struct agent**,int) ;
 int FUNC_6 (struct agent**,size_t,int,int ) ;

void
FUNC_7(struct agent_table *VAR_1, struct agent *VAR_2)
{
 struct agent **VAR_3;
     size_t VAR_4;

 FUNC_0(FUNC_7);
 FUNC_2(VAR_1 != ((void*)0));
 FUNC_2(VAR_2 != ((void*)0));
 VAR_4 = VAR_1->agents_num + 1;
 VAR_3 = FUNC_4(sizeof(*VAR_3) *
  VAR_4);
 FUNC_2(VAR_3 != ((void*)0));
 FUNC_5(VAR_3, VAR_1->agents, VAR_1->agents_num * sizeof(struct agent *));
 VAR_3[VAR_4 - 1] = VAR_2;
 FUNC_6(VAR_3, VAR_4, sizeof(struct agent *),
  VAR_0);

 FUNC_3(VAR_1->agents);
 VAR_1->agents = VAR_3;
 VAR_1->agents_num = VAR_4;
     FUNC_1(FUNC_7);
}
