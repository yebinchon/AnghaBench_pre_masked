
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_table {int agents_num; int agents; } ;
struct agent {char* name; int type; } ;
typedef enum agent_type { ____Placeholder_agent_type } agent_type ;


 int FUNC_0 (struct agent* (*) (struct agent_table*,char const*,int)) ;
 int FUNC_1 (struct agent* (*) (struct agent_table*,char const*,int)) ;
 int VAR_0 ;
 struct agent** FUNC_2 (struct agent**,int ,int ,int,int ) ;

struct agent *
FUNC_3(struct agent_table *VAR_1, const char *VAR_2, enum agent_type VAR_3)
{
 struct agent **VAR_4;
 struct agent VAR_5, *VAR_6;

 FUNC_0(FUNC_3);
 VAR_5.name = (char *)VAR_2;
 VAR_5.type = VAR_3;
 VAR_6 = &VAR_5;
 VAR_4 = FUNC_2(&VAR_6, VAR_1->agents, VAR_1->agents_num,
  sizeof(struct agent *), VAR_0);

 FUNC_1(FUNC_3);
 return ( VAR_4 == ((void*)0) ? ((void*)0) : *VAR_4);
}
