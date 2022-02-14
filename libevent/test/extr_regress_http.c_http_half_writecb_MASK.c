
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*,char const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_2, void *VAR_3)
{
 if (FUNC_3(FUNC_1(VAR_2)) == 0) {
  if (!VAR_1) {
   const char VAR_4[] = "host\r\n"
    "Connection: close\r\n"
    "\r\n";
   FUNC_2(VAR_2, VAR_4, FUNC_4(VAR_4));
  }

  FUNC_0(VAR_2, VAR_0);
  VAR_1++;
 }
}
