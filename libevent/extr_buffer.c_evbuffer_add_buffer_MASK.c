
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int dummy; } ;
struct evbuffer {size_t total_len; size_t n_del_for_cb; size_t n_add_for_cb; int first; scalar_t__ freeze_start; scalar_t__ freeze_end; } ;


 int FUNC_0 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_2 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*,struct evbuffer*) ;
 scalar_t__ FUNC_4 (struct evbuffer*,struct evbuffer_chain**,struct evbuffer_chain**) ;
 int FUNC_5 (struct evbuffer*,struct evbuffer_chain*,struct evbuffer_chain*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct evbuffer*) ;

int
FUNC_8(struct evbuffer *VAR_0, struct evbuffer *VAR_1)
{
 struct evbuffer_chain *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_2(VAR_1, VAR_0);
 VAR_4 = VAR_1->total_len;
 VAR_5 = VAR_0->total_len;

 if (VAR_4 == 0 || VAR_0 == VAR_1)
  goto done;

 if (VAR_0->freeze_end || VAR_1->freeze_start) {
  VAR_6 = -1;
  goto done;
 }

 if (FUNC_4(VAR_1, &VAR_2, &VAR_3) < 0) {
  VAR_6 = -1;
  goto done;
 }

 if (VAR_5 == 0) {


  FUNC_6(VAR_0->first);
  FUNC_1(VAR_0, VAR_1);
 } else {
  FUNC_0(VAR_0, VAR_1);
 }

 FUNC_5(VAR_1, VAR_2, VAR_3);

 VAR_1->n_del_for_cb += VAR_4;
 VAR_0->n_add_for_cb += VAR_4;

 FUNC_7(VAR_1);
 FUNC_7(VAR_0);

done:
 FUNC_3(VAR_1, VAR_0);
 return VAR_6;
}
