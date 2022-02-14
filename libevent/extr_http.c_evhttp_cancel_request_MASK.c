
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {struct evhttp_connection* evcon; } ;
struct evhttp_connection {int requests; } ;


 int VAR_0 ;
 struct evhttp_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evhttp_request*,int ) ;
 int FUNC_2 (struct evhttp_connection*,int ) ;
 int FUNC_3 (struct evhttp_request*) ;
 int VAR_1 ;

void
FUNC_4(struct evhttp_request *VAR_2)
{
 struct evhttp_connection *VAR_3 = VAR_2->evcon;
 if (VAR_3 != ((void*)0)) {

  if (FUNC_0(&VAR_3->requests) == VAR_2) {



   FUNC_2(VAR_3,
       VAR_0);


   return;
  } else {



   FUNC_1(&VAR_3->requests, VAR_2, VAR_1);
  }
 }

 FUNC_3(VAR_2);
}
