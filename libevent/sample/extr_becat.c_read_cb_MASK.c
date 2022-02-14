
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct context {int fout; } ;
struct bufferevent {int dummy; } ;


 struct evbuffer* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct evbuffer*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bufferevent *VAR_0, void *VAR_1)
{
 struct context *VAR_2 = VAR_1;
 struct evbuffer *VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_3, FUNC_2(VAR_2->fout));
}
