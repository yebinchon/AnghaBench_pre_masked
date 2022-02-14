
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {void (* on_complete_cb ) (struct evhttp_request*,void*) ;void* on_complete_cb_arg; } ;



void
FUNC_0(struct evhttp_request *VAR_0,
    void (*VAR_1)(struct evhttp_request *, void *), void *VAR_2)
{
 VAR_0->on_complete_cb = VAR_1;
 VAR_0->on_complete_cb_arg = VAR_2;
}
