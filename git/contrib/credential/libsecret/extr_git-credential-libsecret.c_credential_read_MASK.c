
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {char* protocol; char* host; char* path; char* username; char* password; int port; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static int FUNC_10(struct credential *VAR_1)
{
 char *VAR_2;
 size_t VAR_3;
 char *VAR_4;
 char *VAR_5;

 VAR_4 = VAR_2 = FUNC_3(1024);

 while (FUNC_1(VAR_2, 1024, VAR_0)) {
  VAR_3 = FUNC_8(VAR_2);

  if (VAR_3 && VAR_2[VAR_3-1] == '\n')
   VAR_2[--VAR_3] = '\0';

  if (!VAR_3)
   break;

  VAR_5 = FUNC_6(VAR_2, '=');
  if (!VAR_5) {
   FUNC_5("invalid credential line: %s", VAR_4);
   FUNC_2(VAR_2);
   return -1;
  }
  *VAR_5++ = '\0';

  if (!FUNC_7(VAR_4, "protocol")) {
   FUNC_2(VAR_1->protocol);
   VAR_1->protocol = FUNC_4(VAR_5);
  } else if (!FUNC_7(VAR_4, "host")) {
   FUNC_2(VAR_1->host);
   VAR_1->host = FUNC_4(VAR_5);
   VAR_5 = FUNC_9(VAR_1->host, ':');
   if (VAR_5) {
    *VAR_5++ = '\0';
    VAR_1->port = FUNC_0(VAR_5);
   }
  } else if (!FUNC_7(VAR_4, "path")) {
   FUNC_2(VAR_1->path);
   VAR_1->path = FUNC_4(VAR_5);
  } else if (!FUNC_7(VAR_4, "username")) {
   FUNC_2(VAR_1->username);
   VAR_1->username = FUNC_4(VAR_5);
  } else if (!FUNC_7(VAR_4, "password")) {
   FUNC_2(VAR_1->password);
   VAR_1->password = FUNC_4(VAR_5);
   while (*VAR_5)
    *VAR_5++ = '\0';
  }





 }

 FUNC_2(VAR_2);

 return 0;
}
