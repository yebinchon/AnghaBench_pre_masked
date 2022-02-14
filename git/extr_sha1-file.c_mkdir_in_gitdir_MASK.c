
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct stat {int st_size; int st_mode; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (struct strbuf*,char const*,int ) ;
 int FUNC_6 (struct strbuf*) ;

int FUNC_7(const char *VAR_3)
{
 if (FUNC_4(VAR_3, 0777)) {
  int VAR_4 = VAR_2;
  struct stat VAR_5;
  struct strbuf VAR_6 = VAR_1;

  if (VAR_2 != VAR_0)
   return -1;







  if (FUNC_3(VAR_3, &VAR_5) || !FUNC_0(VAR_5.st_mode) ||
      FUNC_5(&VAR_6, VAR_3, VAR_5.st_size) ||
      !FUNC_2(VAR_6.buf) ||
      FUNC_4(VAR_6.buf, 0777)) {
   FUNC_6(&VAR_6);
   VAR_2 = VAR_4;
   return -1;
  }
  FUNC_6(&VAR_6);
 }
 return FUNC_1(VAR_3);
}
