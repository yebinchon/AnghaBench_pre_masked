
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer {TYPE_1__* last; int ** last_with_datap; int * first; scalar_t__ total_len; } ;
struct TYPE_2__ {int * next; } ;


 int FUNC_0 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_1(struct evbuffer *VAR_0, struct evbuffer *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 VAR_1->last->next = VAR_0->first;
 VAR_0->first = VAR_1->first;
 VAR_0->total_len += VAR_1->total_len;
 if (*VAR_0->last_with_datap == ((void*)0)) {
  if (VAR_1->last_with_datap == &(VAR_1)->first)
   VAR_0->last_with_datap = &VAR_0->first;
  else
   VAR_0->last_with_datap = VAR_1->last_with_datap;
 } else if (VAR_0->last_with_datap == &VAR_0->first) {
  VAR_0->last_with_datap = &VAR_1->last->next;
 }
}
