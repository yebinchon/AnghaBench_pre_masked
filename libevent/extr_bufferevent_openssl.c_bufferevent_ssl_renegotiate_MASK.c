
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {int underlying; int state; int ssl; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bufferevent_openssl*,int) ;
 int FUNC_2 (struct bufferevent_openssl*) ;
 scalar_t__ FUNC_3 (struct bufferevent_openssl*,int ) ;
 struct bufferevent_openssl* FUNC_4 (struct bufferevent*) ;

int
FUNC_5(struct bufferevent *VAR_1)
{
 struct bufferevent_openssl *VAR_2 = FUNC_4(VAR_1);
 if (!VAR_2)
  return -1;
 if (FUNC_0(VAR_2->ssl) < 0)
  return -1;
 VAR_2->state = VAR_0;
 if (FUNC_3(VAR_2, FUNC_1(VAR_2, -1)) < 0)
  return -1;
 if (!VAR_2->underlying)
  return FUNC_2(VAR_2);
 return 0;
}
