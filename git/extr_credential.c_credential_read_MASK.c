
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct credential {int quit; void* path; void* host; void* protocol; void* password; void* username; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct credential*,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (struct strbuf*,int *) ;
 int FUNC_4 (struct strbuf*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 void* FUNC_8 (char*) ;

int FUNC_9(struct credential *VAR_2, FILE *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;

 while (FUNC_3(&VAR_4, VAR_3) != VAR_0) {
  char *VAR_5 = VAR_4.buf;
  char *VAR_6 = FUNC_5(VAR_5, '=');

  if (!VAR_4.len)
   break;

  if (!VAR_6) {
   FUNC_7("invalid credential line: %s", VAR_5);
   FUNC_4(&VAR_4);
   return -1;
  }
  *VAR_6++ = '\0';

  if (!FUNC_6(VAR_5, "username")) {
   FUNC_1(VAR_2->username);
   VAR_2->username = FUNC_8(VAR_6);
  } else if (!FUNC_6(VAR_5, "password")) {
   FUNC_1(VAR_2->password);
   VAR_2->password = FUNC_8(VAR_6);
  } else if (!FUNC_6(VAR_5, "protocol")) {
   FUNC_1(VAR_2->protocol);
   VAR_2->protocol = FUNC_8(VAR_6);
  } else if (!FUNC_6(VAR_5, "host")) {
   FUNC_1(VAR_2->host);
   VAR_2->host = FUNC_8(VAR_6);
  } else if (!FUNC_6(VAR_5, "path")) {
   FUNC_1(VAR_2->path);
   VAR_2->path = FUNC_8(VAR_6);
  } else if (!FUNC_6(VAR_5, "url")) {
   FUNC_0(VAR_2, VAR_6);
  } else if (!FUNC_6(VAR_5, "quit")) {
   VAR_2->quit = !!FUNC_2("quit", VAR_6);
  }





 }

 FUNC_4(&VAR_4);
 return 0;
}
