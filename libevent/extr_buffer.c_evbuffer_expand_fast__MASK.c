
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int flags; scalar_t__ off; struct evbuffer_chain* next; scalar_t__ buffer_len; scalar_t__ misalign; } ;
struct evbuffer {struct evbuffer_chain* last; struct evbuffer_chain** last_with_datap; struct evbuffer_chain* first; } ;


 int FUNC_0 (struct evbuffer*) ;
 scalar_t__ FUNC_1 (struct evbuffer_chain*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer_chain*) ;
 int FUNC_5 (struct evbuffer*,struct evbuffer_chain*) ;
 struct evbuffer_chain* FUNC_6 (size_t) ;

int
FUNC_7(struct evbuffer *VAR_1, size_t VAR_2, int VAR_3)
{
 struct evbuffer_chain *VAR_4 = VAR_1->last, *VAR_5, *VAR_6;
 size_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_1);
 FUNC_2(VAR_3 >= 2);

 if (VAR_4 == ((void*)0) || (VAR_4->flags & VAR_0)) {


  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4 == ((void*)0))
   return (-1);

  FUNC_5(VAR_1, VAR_4);
  return (0);
 }

 VAR_8 = 0;
 VAR_7 = 0;



 for (VAR_4 = *VAR_1->last_with_datap; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->off) {
   size_t VAR_9 = (size_t) FUNC_1(VAR_4);
   FUNC_2(VAR_4 == *VAR_1->last_with_datap);
   if (VAR_9) {
    VAR_7 += VAR_9;
    ++VAR_8;
   }
  } else {

   VAR_4->misalign = 0;
   VAR_7 += VAR_4->buffer_len;
   ++VAR_8;
  }
  if (VAR_7 >= VAR_2) {

   return (0);
  }
  if (VAR_8 == VAR_3)
   break;
 }




 if (VAR_8 < VAR_3) {


  FUNC_2(VAR_4 == ((void*)0));

  VAR_5 = FUNC_6(VAR_2 - VAR_7);
  if (VAR_5 == ((void*)0))
   return (-1);

  VAR_1->last->next = VAR_5;
  VAR_1->last = VAR_5;



  return (0);
 } else {

  int VAR_10 = 0;
  VAR_4 = *VAR_1->last_with_datap;
  if (!VAR_4->off) {
   FUNC_2(VAR_4 == VAR_1->first);
   VAR_10 = 1;
   VAR_7 = 0;
  } else {


   VAR_7 = (size_t) FUNC_1(VAR_4);
   VAR_4 = VAR_4->next;
  }


  for (; VAR_4; VAR_4 = VAR_6) {
   VAR_6 = VAR_4->next;
   FUNC_2(VAR_4->off == 0);
   FUNC_4(VAR_4);
  }
  FUNC_2(VAR_2 >= VAR_7);
  VAR_5 = FUNC_6(VAR_2 - VAR_7);
  if (VAR_5 == ((void*)0)) {
   if (VAR_10) {
    FUNC_3(VAR_1);
   } else {
    VAR_1->last = *VAR_1->last_with_datap;
    (*VAR_1->last_with_datap)->next = ((void*)0);
   }
   return (-1);
  }

  if (VAR_10) {
   VAR_1->first = VAR_1->last = VAR_5;
   VAR_1->last_with_datap = &VAR_1->first;
  } else {
   (*VAR_1->last_with_datap)->next = VAR_5;
   VAR_1->last = VAR_5;
  }
  return (0);
 }
}
