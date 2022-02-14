
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {struct evbuffer* output; } ;



struct evbuffer *
FUNC_0(struct bufferevent *VAR_0)
{
 return VAR_0->output;
}
