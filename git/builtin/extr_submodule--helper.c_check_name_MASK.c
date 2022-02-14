
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 if (VAR_3 > 1) {
  while (*++VAR_4) {
   if (FUNC_0(*VAR_4) < 0)
    return 1;
  }
 } else {
  struct strbuf VAR_6 = VAR_1;
  while (FUNC_2(&VAR_6, VAR_2) != VAR_0) {
   if (!FUNC_0(VAR_6.buf))
    FUNC_1("%s\n", VAR_6.buf);
  }
  FUNC_3(&VAR_6);
 }
 return 0;
}
