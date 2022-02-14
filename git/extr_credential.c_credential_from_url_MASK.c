
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {char* path; void* host; int protocol; void* password; void* username; } ;


 int FUNC_0 (struct credential*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*) ;
 void* FUNC_6 (char const*,int) ;
 int FUNC_7 (char const*,int) ;

void FUNC_8(struct credential *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;

 FUNC_0(VAR_0);







 VAR_7 = FUNC_4(VAR_1, "://");
 if (!VAR_7)
  return;
 VAR_4 = VAR_7 + 3;
 VAR_2 = FUNC_1(VAR_4, '@');
 VAR_3 = FUNC_1(VAR_4, ':');
 VAR_5 = FUNC_2(VAR_4, '/');

 if (!VAR_2 || VAR_5 <= VAR_2) {

  VAR_6 = VAR_4;
 }
 else if (!VAR_3 || VAR_2 <= VAR_3) {

  VAR_0->username = FUNC_6(VAR_4, VAR_2 - VAR_4);
  VAR_6 = VAR_2 + 1;
 } else {

  VAR_0->username = FUNC_6(VAR_4, VAR_3 - VAR_4);
  VAR_0->password = FUNC_6(VAR_3 + 1, VAR_2 - (VAR_3 + 1));
  VAR_6 = VAR_2 + 1;
 }

 if (VAR_7 - VAR_1 > 0)
  VAR_0->protocol = FUNC_7(VAR_1, VAR_7 - VAR_1);
 if (VAR_5 - VAR_6 > 0)
  VAR_0->host = FUNC_6(VAR_6, VAR_5 - VAR_6);

 while (*VAR_5 == '/')
  VAR_5++;
 if (*VAR_5) {
  char *VAR_8;
  VAR_0->path = FUNC_5(VAR_5);
  VAR_8 = VAR_0->path + FUNC_3(VAR_0->path) - 1;
  while (VAR_8 > VAR_0->path && *VAR_8 == '/')
   *VAR_8-- = '\0';
 }
}
