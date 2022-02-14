
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_cmd {int op; int name; int len; int * next; } ;


 struct event_cmd* FUNC_0 (int ) ;

struct event_cmd *
FUNC_1(void *VAR_0)
{
 struct event_cmd * VAR_1 = VAR_0;
 struct event_cmd * VAR_2 = FUNC_0(VAR_1->len);

 VAR_2->next = ((void*)0);
 VAR_2->len = VAR_1->len;
 VAR_2->name = VAR_1->name;
 VAR_2->op = VAR_1->op;
 return VAR_2;
}
