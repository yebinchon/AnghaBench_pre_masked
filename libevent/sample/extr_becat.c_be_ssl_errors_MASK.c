
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (char*,int,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_5(struct bufferevent *VAR_0)
{
 int VAR_1;
 while ((VAR_1 = FUNC_3(VAR_0))) {
  const char *VAR_2 = FUNC_2(VAR_1);
  const char *VAR_3 = FUNC_1(VAR_1);
  const char *VAR_4 = FUNC_0(VAR_1);
  FUNC_4("ssl/err=%d/%s in %s %s\n", VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
