
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int dummy; } ;
struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer_chain* FUNC_2 (struct evbuffer*,size_t) ;

int
FUNC_3(struct evbuffer *VAR_0, size_t VAR_1)
{
 struct evbuffer_chain *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 return VAR_2 ? 0 : -1;
}
