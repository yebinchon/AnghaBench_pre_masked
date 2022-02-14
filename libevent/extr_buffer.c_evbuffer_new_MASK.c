
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int refcnt; int max_read; int first; int * last_with_datap; int callbacks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct evbuffer* FUNC_1 (int,int) ;

struct evbuffer *
FUNC_2(void)
{
 struct evbuffer *VAR_1;

 VAR_1 = FUNC_1(1, sizeof(struct evbuffer));
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0(&VAR_1->callbacks);
 VAR_1->refcnt = 1;
 VAR_1->last_with_datap = &VAR_1->first;
 VAR_1->max_read = VAR_0;

 return (VAR_1);
}
