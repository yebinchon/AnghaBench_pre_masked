
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union evwatch_cb {int dummy; } evwatch_cb ;
struct evwatch {unsigned int type; void* arg; union evwatch_cb callback; struct event_base* base; } ;
struct event_base {int * watchers; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 int FUNC_2 (int *,struct evwatch*,int ) ;
 struct evwatch* FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct evwatch *
FUNC_4(struct event_base *VAR_2, union evwatch_cb VAR_3, void *VAR_4, unsigned VAR_5)
{
 struct evwatch *VAR_6 = FUNC_3(sizeof(struct evwatch));
 if (!VAR_6)
  return ((void*)0);
 VAR_6->base = VAR_2;
 VAR_6->type = VAR_5;
 VAR_6->callback = VAR_3;
 VAR_6->arg = VAR_4;
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->watchers[VAR_5], VAR_6, VAR_0);
 FUNC_1(VAR_2, VAR_1);
 return VAR_6;
}
