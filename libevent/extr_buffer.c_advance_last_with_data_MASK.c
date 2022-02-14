
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {scalar_t__ off; struct evbuffer_chain* next; } ;
struct evbuffer {struct evbuffer_chain** last_with_datap; } ;


 int FUNC_0 (struct evbuffer*) ;

__attribute__((used)) static int
FUNC_1(struct evbuffer *VAR_0)
{
 int VAR_1 = 0;
 struct evbuffer_chain **VAR_2 = VAR_0->last_with_datap;

 FUNC_0(VAR_0);

 if (!*VAR_2)
  return 0;

 while ((*VAR_2)->next) {
  VAR_2 = &(*VAR_2)->next;
  if ((*VAR_2)->off)
   VAR_0->last_with_datap = VAR_2;
  ++VAR_1;
 }
 return VAR_1;
}
