
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int (* newreqcb ) (struct evhttp_request*,void*) ;void* newreqcbarg; } ;



void
FUNC_0(struct evhttp *VAR_0,
    int (*VAR_1)(struct evhttp_request *, void *), void *VAR_2)
{
 VAR_0->newreqcb = VAR_1;
 VAR_0->newreqcbarg = VAR_2;
}
