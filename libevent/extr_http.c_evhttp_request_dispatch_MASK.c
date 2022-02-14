
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {scalar_t__ kind; } ;
struct evhttp_connection {scalar_t__ state; int requests; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct evhttp_request* FUNC_1 (int *) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp_connection*,struct evhttp_request*) ;
 int FUNC_4 (struct evhttp_connection*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct evhttp_connection* VAR_4)
{
 struct evhttp_request *VAR_5 = FUNC_1(&VAR_4->requests);


 if (VAR_5 == ((void*)0))
  return;

 FUNC_0(VAR_5->kind == VAR_2);


 FUNC_2(VAR_4);


 FUNC_0(VAR_4->state == VAR_0);

 VAR_4->state = VAR_1;


 FUNC_3(VAR_4, VAR_5);

 FUNC_4(VAR_4, VAR_3, ((void*)0));
}
