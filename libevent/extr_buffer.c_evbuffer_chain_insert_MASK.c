
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {scalar_t__ off; } ;
struct evbuffer {int total_len; struct evbuffer_chain* last; struct evbuffer_chain** last_with_datap; struct evbuffer_chain* first; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (int) ;
 struct evbuffer_chain** FUNC_2 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_3(struct evbuffer *VAR_0,
    struct evbuffer_chain *VAR_1)
{
 FUNC_0(VAR_0);
 if (*VAR_0->last_with_datap == ((void*)0)) {

  FUNC_1(VAR_0->last_with_datap == &VAR_0->first);
  FUNC_1(VAR_0->first == ((void*)0));
  VAR_0->first = VAR_0->last = VAR_1;
 } else {
  struct evbuffer_chain **VAR_2;
  VAR_2 = FUNC_2(VAR_0);
  *VAR_2 = VAR_1;
  if (VAR_1->off)
   VAR_0->last_with_datap = VAR_2;
  VAR_0->last = VAR_1;
 }
 VAR_0->total_len += VAR_1->off;
}
