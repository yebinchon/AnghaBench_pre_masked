
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int input; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bufferevent*,int ) ;
 int FUNC_2 (struct bufferevent*,struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct evbuffer* FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct bufferevent *VAR_2, void *VAR_3)
{
 struct evbuffer *VAR_4 = FUNC_5();
 int VAR_5 = (int)FUNC_4(VAR_2->input);
 static int VAR_6;

 FUNC_0(VAR_5 >= 10 && VAR_5 <= 20);

 FUNC_0(VAR_4 != ((void*)0));


 FUNC_2(VAR_2, VAR_4);

 VAR_6 += VAR_5;
 if (VAR_6 == 65000) {
  FUNC_1(VAR_2, VAR_0);
  VAR_1++;
 }

 FUNC_3(VAR_4);
}
