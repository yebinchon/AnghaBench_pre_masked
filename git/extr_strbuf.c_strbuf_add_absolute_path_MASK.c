
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int * buf; } ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 () ;

void FUNC_10(struct strbuf *VAR_0, const char *VAR_1)
{
 if (!*VAR_1)
  FUNC_0("The empty string is not a valid path");
 if (!FUNC_3(VAR_1)) {
  struct stat VAR_2, VAR_3;
  size_t VAR_4 = VAR_0->len;
  char *VAR_5 = FUNC_9();
  char *VAR_6 = FUNC_2("PWD");
  if (VAR_6 && FUNC_8(VAR_6, VAR_5) &&
      !FUNC_5(VAR_5, &VAR_2) &&
      (VAR_2.st_dev || VAR_2.st_ino) &&
      !FUNC_5(VAR_6, &VAR_3) &&
      VAR_3.st_dev == VAR_2.st_dev &&
      VAR_3.st_ino == VAR_2.st_ino)
   FUNC_7(VAR_0, VAR_6);
  else
   FUNC_7(VAR_0, VAR_5);
  if (VAR_0->len > VAR_4 && !FUNC_4(VAR_0->buf[VAR_0->len - 1]))
   FUNC_6(VAR_0, '/');
  FUNC_1(VAR_5);
 }
 FUNC_7(VAR_0, VAR_1);
}
