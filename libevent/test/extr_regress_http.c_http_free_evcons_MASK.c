
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int dummy; } ;


 int FUNC_0 (struct evhttp_connection*) ;
 int FUNC_1 (struct evhttp_connection**) ;

__attribute__((used)) static void
FUNC_2(struct evhttp_connection **VAR_0)
{
 struct evhttp_connection *VAR_1, **VAR_2 = VAR_0;

 if (!VAR_0)
  return;

 while ((VAR_1 = *VAR_0++)) {
  FUNC_0(VAR_1);
 }
 FUNC_1(VAR_2);
}
