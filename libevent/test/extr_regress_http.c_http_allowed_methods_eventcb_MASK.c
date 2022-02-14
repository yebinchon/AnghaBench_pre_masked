
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int buf ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_3, short VAR_4, void *VAR_5)
{
 char **VAR_6 = VAR_5;
 if ((VAR_4 & (VAR_1|VAR_0))) {
  char VAR_7[4096];
  int VAR_8;
  VAR_8 = FUNC_1(FUNC_0(VAR_3), VAR_7,
      sizeof(VAR_7)-1);
  if (VAR_8 >= 0) {
   VAR_7[VAR_8]='\0';
   if (*VAR_6)
    FUNC_3(*VAR_6);
   *VAR_6 = FUNC_4(VAR_7);
  }
  FUNC_2(VAR_2, ((void*)0));
 }
}
