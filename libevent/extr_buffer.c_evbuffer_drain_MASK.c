
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {size_t off; size_t misalign; struct evbuffer_chain* next; } ;
struct evbuffer {size_t total_len; size_t n_del_for_cb; struct evbuffer_chain* first; struct evbuffer_chain** last_with_datap; scalar_t__ freeze_start; } ;


 scalar_t__ FUNC_0 (struct evbuffer_chain*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct evbuffer*) ;
 int FUNC_5 (struct evbuffer*) ;
 int FUNC_6 (struct evbuffer_chain*) ;
 int FUNC_7 (struct evbuffer*) ;

int
FUNC_8(struct evbuffer *VAR_0, size_t VAR_1)
{
 struct evbuffer_chain *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_1(VAR_0);
 VAR_5 = VAR_0->total_len;

 if (VAR_5 == 0)
  goto done;

 if (VAR_0->freeze_start) {
  VAR_6 = -1;
  goto done;
 }

 if (VAR_1 >= VAR_5 && !FUNC_4(VAR_0)) {
  VAR_1 = VAR_5;
  for (VAR_2 = VAR_0->first; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
   VAR_3 = VAR_2->next;
   FUNC_6(VAR_2);
  }

  FUNC_5(VAR_0);
 } else {
  if (VAR_1 >= VAR_5)
   VAR_1 = VAR_5;

  VAR_0->total_len -= VAR_1;
  VAR_4 = VAR_1;
  for (VAR_2 = VAR_0->first;
       VAR_4 >= VAR_2->off;
       VAR_2 = VAR_3) {
   VAR_3 = VAR_2->next;
   VAR_4 -= VAR_2->off;

   if (VAR_2 == *VAR_0->last_with_datap) {
    VAR_0->last_with_datap = &VAR_0->first;
   }
   if (&VAR_2->next == VAR_0->last_with_datap)
    VAR_0->last_with_datap = &VAR_0->first;

   if (FUNC_0(VAR_2)) {
    FUNC_3(VAR_4 == 0);
    VAR_2->misalign += VAR_2->off;
    VAR_2->off = 0;
    break;
   } else
    FUNC_6(VAR_2);
  }

  VAR_0->first = VAR_2;
  FUNC_3(VAR_4 <= VAR_2->off);
  VAR_2->misalign += VAR_4;
  VAR_2->off -= VAR_4;
 }

 VAR_0->n_del_for_cb += VAR_1;

 FUNC_7(VAR_0);

done:
 FUNC_2(VAR_0);
 return VAR_6;
}
