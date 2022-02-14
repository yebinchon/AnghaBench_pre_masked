
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int flags; struct evbuffer_chain* next; } ;
struct evbuffer {size_t total_len; size_t n_add_for_cb; struct evbuffer_chain* first; scalar_t__ freeze_end; } ;


 int FUNC_0 (struct evbuffer*,struct evbuffer*) ;
 int VAR_0 ;
 int FUNC_1 (struct evbuffer*,struct evbuffer*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_3 (struct evbuffer_chain*) ;
 int FUNC_4 (struct evbuffer*) ;

int
FUNC_5(struct evbuffer *VAR_3, struct evbuffer *VAR_4)
{
 size_t VAR_5, VAR_6;
 struct evbuffer_chain *VAR_7;
 int VAR_8 = 0;

 FUNC_1(VAR_4, VAR_3);
 VAR_5 = VAR_4->total_len;
 VAR_6 = VAR_3->total_len;
 VAR_7 = VAR_4->first;

 if (VAR_5 == 0)
  goto done;

 if (VAR_3->freeze_end || VAR_3 == VAR_4) {
  VAR_8 = -1;
  goto done;
 }

 for (; VAR_7; VAR_7 = VAR_7->next) {
  if ((VAR_7->flags & (VAR_0|VAR_2|VAR_1)) != 0) {

   VAR_8 = -1;
   goto done;
  }
 }

 if (VAR_6 == 0) {


  FUNC_3(VAR_3->first);
 }
 FUNC_0(VAR_3, VAR_4);

 VAR_3->n_add_for_cb += VAR_5;
 FUNC_4(VAR_3);

done:
 FUNC_2(VAR_4, VAR_3);
 return VAR_8;
}
