
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int requests; } ;


 int FUNC_0 (int *,struct evhttp_request*,int ) ;
 int FUNC_1 (struct evhttp_request*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct evhttp_connection *VAR_1, struct evhttp_request *VAR_2)
{
 FUNC_0(&VAR_1->requests, VAR_2, VAR_0);
 FUNC_1(VAR_2);
}
