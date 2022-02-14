
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_hook_meta {struct evhttp_connection* evcon; } ;
struct evhttp_connection {int dummy; } ;


 struct evrpc_hook_meta* FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct evrpc_hook_meta **VAR_0,
    struct evhttp_connection *VAR_1)
{
 struct evrpc_hook_meta *VAR_2 = *VAR_0;
 if (VAR_2 == ((void*)0))
  *VAR_0 = VAR_2 = FUNC_0();
 VAR_2->evcon = VAR_1;
}
