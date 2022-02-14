
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos_in_chain; struct evbuffer_chain* chain; } ;
struct evbuffer_ptr {size_t pos; TYPE_1__ internal_; } ;
struct evbuffer_chain {size_t off; struct evbuffer_chain* next; } ;
struct evbuffer {struct evbuffer_chain* first; } ;
typedef enum evbuffer_ptr_how { ____Placeholder_evbuffer_ptr_how } evbuffer_ptr_how ;


 int FUNC_0 (struct evbuffer*) ;


 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int) ;
 size_t VAR_0 ;
 int FUNC_3 (struct evbuffer_ptr*) ;

int
FUNC_4(struct evbuffer *VAR_1, struct evbuffer_ptr *VAR_2,
    size_t VAR_3, enum evbuffer_ptr_how VAR_4)
{
 size_t VAR_5 = VAR_3;
 struct evbuffer_chain *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_0(VAR_1);

 switch (VAR_4) {
 case 128:
  VAR_6 = VAR_1->first;
  VAR_2->pos = VAR_3;
  VAR_3 = 0;
  break;
 case 129:


  if (VAR_2->pos < 0 || VAR_0 - VAR_3 < (size_t)VAR_2->pos) {
   FUNC_1(VAR_1);
   return -1;
  }
  VAR_6 = VAR_2->internal_.chain;
  VAR_2->pos += VAR_3;
  VAR_3 = VAR_2->internal_.pos_in_chain;
  break;
 }

 FUNC_2(VAR_0 - VAR_5 >= VAR_3);
 while (VAR_6 && VAR_3 + VAR_5 >= VAR_6->off) {
  VAR_5 -= VAR_6->off - VAR_3;
  VAR_6 = VAR_6->next;
  VAR_3 = 0;
 }
 if (VAR_6) {
  VAR_2->internal_.chain = VAR_6;
  VAR_2->internal_.pos_in_chain = VAR_3 + VAR_5;
 } else if (VAR_5 == 0) {

  VAR_2->internal_.chain = ((void*)0);
  VAR_2->internal_.pos_in_chain = 0;
 } else {
  FUNC_3(VAR_2);
  VAR_7 = -1;
 }

 FUNC_1(VAR_1);

 return VAR_7;
}
