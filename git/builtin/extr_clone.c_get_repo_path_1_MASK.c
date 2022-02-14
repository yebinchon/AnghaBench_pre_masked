
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char const* buf; } ;
struct stat {int st_size; int st_mode; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (int,char*,int) ;
 scalar_t__ FUNC_8 (char const*,struct stat*) ;
 int FUNC_9 (struct strbuf*,char*) ;
 int FUNC_10 (struct strbuf*,size_t) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;

__attribute__((used)) static const char *FUNC_12(struct strbuf *VAR_1, int *VAR_2)
{
 static char *VAR_3[] = { "/.git", "", ".git/.git", ".git" };
 static char *VAR_4[] = { ".bundle", "" };
 size_t VAR_5 = VAR_1->len;
 struct stat VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  FUNC_10(VAR_1, VAR_5);
  FUNC_9(VAR_1, VAR_3[VAR_7]);
  if (FUNC_8(VAR_1->buf, &VAR_6))
   continue;
  if (FUNC_1(VAR_6.st_mode) && FUNC_4(VAR_1->buf)) {
   *VAR_2 = 0;
   return VAR_1->buf;
  } else if (FUNC_2(VAR_6.st_mode) && VAR_6.st_size > 8) {

   char VAR_8[8];
   const char *VAR_9;
   int VAR_10, VAR_11 = FUNC_5(VAR_1->buf, VAR_0);
   if (VAR_11 < 0)
    continue;
   VAR_10 = FUNC_7(VAR_11, VAR_8, 8);
   FUNC_3(VAR_11);
   if (VAR_10 != 8 || FUNC_11(VAR_8, "gitdir: ", 8))
    continue;
   VAR_9 = FUNC_6(VAR_1->buf);
   if (VAR_9) {
    *VAR_2 = 0;
    return VAR_9;
   }
  }
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  FUNC_10(VAR_1, VAR_5);
  FUNC_9(VAR_1, VAR_4[VAR_7]);
  if (!FUNC_8(VAR_1->buf, &VAR_6) && FUNC_2(VAR_6.st_mode)) {
   *VAR_2 = 1;
   return VAR_1->buf;
  }
 }

 return ((void*)0);
}
