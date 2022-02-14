
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct client_state {int queued; } ;
struct bufferevent {int dummy; } ;
typedef int buf ;


 struct evbuffer* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct evbuffer*,char*,int) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_1, void *VAR_2)
{
 struct client_state *VAR_3 = VAR_2;
 struct evbuffer *VAR_4 = FUNC_0(VAR_1);
 char VAR_5[1024];
 int VAR_6 = FUNC_3(&VAR_0);
 FUNC_4(VAR_5, VAR_6, sizeof(VAR_5));
 while (FUNC_2(VAR_4) < 8192) {
  FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  VAR_3->queued += sizeof(VAR_5);
 }
}
