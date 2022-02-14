
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct bufferevent **VAR_0)
{
 evutil_socket_t VAR_1;
 struct bufferevent *VAR_2 = *VAR_0;

 if (!VAR_2)
  return;

 VAR_1 = FUNC_1(VAR_2);
 FUNC_2("Freeing bufferevent with fd=%d\n", VAR_1);

 FUNC_0(VAR_2);
 *VAR_0 = ((void*)0);
}
