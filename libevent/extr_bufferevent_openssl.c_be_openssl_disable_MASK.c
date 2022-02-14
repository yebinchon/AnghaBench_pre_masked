
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {scalar_t__ underlying; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_2 (struct bufferevent_openssl*) ;
 int FUNC_3 (struct bufferevent_openssl*) ;
 struct bufferevent_openssl* FUNC_4 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_5(struct bufferevent *VAR_2, short VAR_3)
{
 struct bufferevent_openssl *VAR_4 = FUNC_4(VAR_2);

 if (VAR_3 & VAR_0)
  FUNC_2(VAR_4);
 if (VAR_3 & VAR_1)
  FUNC_3(VAR_4);

 if (VAR_4->underlying) {
  if (VAR_3 & VAR_0)
   FUNC_0(VAR_2);
  if (VAR_3 & VAR_1)
   FUNC_1(VAR_2);
 }
 return 0;
}
