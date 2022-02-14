
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {size_t off; scalar_t__ misalign; scalar_t__ buffer; struct evbuffer_chain* next; } ;
struct evbuffer {size_t total_len; size_t n_add_for_cb; size_t n_del_for_cb; struct evbuffer_chain* first; struct evbuffer_chain* last; struct evbuffer_chain** last_with_datap; scalar_t__ freeze_start; scalar_t__ freeze_end; } ;


 int FUNC_0 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*,scalar_t__,size_t) ;
 int FUNC_5 (struct evbuffer*,struct evbuffer*) ;
 struct evbuffer_chain** FUNC_6 (struct evbuffer*) ;
 int FUNC_7 (struct evbuffer*) ;

int
FUNC_8(struct evbuffer *VAR_0, struct evbuffer *VAR_1,
    size_t VAR_2)
{



 struct evbuffer_chain *VAR_3, *VAR_4;
 size_t VAR_5 = 0;
 int VAR_6;

 FUNC_0(VAR_0, VAR_1);

 VAR_3 = VAR_4 = VAR_0->first;

 if (VAR_2 == 0 || VAR_1 == VAR_0) {
  VAR_6 = 0;
  goto done;
 }

 if (VAR_1->freeze_end || VAR_0->freeze_start) {
  VAR_6 = -1;
  goto done;
 }


 if (VAR_2 >= VAR_0->total_len) {
  VAR_2 = VAR_0->total_len;
  FUNC_5(VAR_1, VAR_0);
  VAR_6 = (int)VAR_2;
  goto done;
 }


 while (VAR_3->off <= VAR_2) {



  FUNC_2(VAR_3 != *VAR_0->last_with_datap);
  VAR_5 += VAR_3->off;
  VAR_2 -= VAR_3->off;
  VAR_4 = VAR_3;
  if (VAR_0->last_with_datap == &VAR_3->next)
   VAR_0->last_with_datap = &VAR_0->first;
  VAR_3 = VAR_3->next;
 }

 if (VAR_3 != VAR_0->first) {

  struct evbuffer_chain **VAR_7;
  VAR_7 = FUNC_6(VAR_1);

  if (VAR_1->first == ((void*)0)) {
   VAR_1->first = VAR_0->first;
  } else {
   *VAR_7 = VAR_0->first;
  }
  VAR_1->last = VAR_4;
  VAR_4->next = ((void*)0);
  VAR_0->first = VAR_3;
  FUNC_3(VAR_1);

  VAR_1->total_len += VAR_5;
  VAR_1->n_add_for_cb += VAR_5;
 }



 FUNC_4(VAR_1, VAR_3->buffer + VAR_3->misalign, VAR_2);
 VAR_3->misalign += VAR_2;
 VAR_3->off -= VAR_2;
 VAR_5 += VAR_2;




 VAR_0->total_len -= VAR_5;
 VAR_0->n_del_for_cb += VAR_5;

 if (VAR_5) {
  FUNC_7(VAR_1);
  FUNC_7(VAR_0);
 }
 VAR_6 = (int)VAR_5;

done:
 FUNC_1(VAR_0, VAR_1);
 return VAR_6;
}
