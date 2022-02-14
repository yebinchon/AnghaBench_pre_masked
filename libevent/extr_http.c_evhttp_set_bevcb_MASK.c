
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {struct bufferevent* (* bevcb ) (struct event_base*,void*) ;void* bevcbarg; } ;



void
FUNC_0(struct evhttp *VAR_0,
    struct bufferevent* (*VAR_1)(struct event_base *, void *), void *VAR_2)
{
 VAR_0->bevcb = VAR_1;
 VAR_0->bevcbarg = VAR_2;
}
