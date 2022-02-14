
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 struct evbuffer* FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct bufferevent *VAR_0, void *VAR_1)
{
 struct evbuffer *VAR_2 = FUNC_1(VAR_0);
 if (FUNC_2(VAR_2) == 0) {
  FUNC_3("flushed answer\n");
  FUNC_0(VAR_0);
 }
}
