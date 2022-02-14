
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct netconfig {int dummy; } ;
struct netbuf {scalar_t__ buf; } ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 int FUNC_2 (char*,char*,char const*) ;
 char* FUNC_3 (struct netconfig*,struct netbuf*) ;

__attribute__((used)) static bool_t
FUNC_4(void *VAR_3, struct netbuf *VAR_4, struct netconfig *VAR_5)



{
 char *VAR_6;
 char VAR_7[VAR_1];
 const char *VAR_8;
 struct sockaddr *VAR_9 = (struct sockaddr *)VAR_4->buf;

 if (FUNC_1(VAR_9, VAR_9->sa_len, VAR_7, VAR_1, ((void*)0), 0, 0)) {
  VAR_8 = VAR_2;
 } else {
  VAR_8 = VAR_7;
 }
 VAR_6 = FUNC_3(VAR_5, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_2("%s\t%s\n", VAR_2, VAR_8);
 } else {
  FUNC_2("%s\t%s\n", VAR_6, VAR_8);
  FUNC_0((char *)VAR_6);
 }
 return (VAR_0);
}
