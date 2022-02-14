
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {int write_blocked_on_read; int underlying; } ;


 int FUNC_0 (struct bufferevent_openssl*) ;
 int FUNC_1 (struct bufferevent_openssl*) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent_openssl *VAR_0)
{
 if (!VAR_0->underlying)
  FUNC_1(VAR_0);
 VAR_0->write_blocked_on_read = 1;
 return FUNC_0(VAR_0);
}
