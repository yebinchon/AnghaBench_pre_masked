
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {void (* error_cb ) (int,void*) ;void (* cb ) (struct evhttp_request*,void*) ;void* cb_arg; } ;
struct evhttp_connection {int flags; int requests; int bufev; } ;
typedef enum evhttp_request_error { ____Placeholder_evhttp_request_error } evhttp_request_error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct evhttp_request* FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct evhttp_connection*) ;
 int FUNC_6 (struct evhttp_connection*) ;
 int FUNC_7 (struct evhttp_request*,int) ;
 int FUNC_8 (struct evhttp_connection*) ;
 int FUNC_9 (struct evhttp_connection*,struct evhttp_request*) ;
 void FUNC_10 (struct evhttp_request*,void*) ;

void
FUNC_11(struct evhttp_connection *VAR_4,
    enum evhttp_request_error VAR_5)
{
 const int VAR_6 = FUNC_2();
 struct evhttp_request* VAR_7 = FUNC_3(&VAR_4->requests);
 void (*VAR_8)(struct evhttp_request *, void *);
 void *VAR_9;
 void (*VAR_10)(enum evhttp_request_error, void *);
 void *VAR_11;
 FUNC_0(VAR_7 != ((void*)0));

 FUNC_4(VAR_4->bufev, VAR_2|VAR_3);

 if (VAR_4->flags & VAR_0) {
  if (FUNC_7(VAR_7, VAR_5) == -1)
   FUNC_6(VAR_4);
  return;
 }

 VAR_10 = VAR_7->error_cb;
 VAR_11 = VAR_7->cb_arg;

 if (VAR_5 != VAR_1) {

  VAR_8 = VAR_7->cb;
  VAR_9 = VAR_7->cb_arg;
 } else {
  VAR_8 = ((void*)0);
  VAR_9 = ((void*)0);
 }





 FUNC_9(VAR_4, VAR_7);


 FUNC_8(VAR_4);


 if (FUNC_3(&VAR_4->requests) != ((void*)0))
  FUNC_5(VAR_4);





 FUNC_1(VAR_6);


 if (VAR_10 != ((void*)0))
  VAR_10(VAR_5, VAR_11);
 if (VAR_8 != ((void*)0))
  (*VAR_8)(((void*)0), VAR_9);
}
