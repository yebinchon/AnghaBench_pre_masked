
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int ext_method_cmp; } ;
typedef int evhttp_ext_method_cb ;



void
FUNC_0(struct evhttp_connection *VAR_0,
 evhttp_ext_method_cb VAR_1)
{
 VAR_0->ext_method_cmp = VAR_1;
}
