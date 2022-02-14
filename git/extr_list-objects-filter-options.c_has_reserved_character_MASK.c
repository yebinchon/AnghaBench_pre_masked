
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,int ,char const) ;
 scalar_t__ FUNC_2 (int ,char const) ;

__attribute__((used)) static int FUNC_3(
 struct strbuf *VAR_1, struct strbuf *VAR_2)
{
 const char *VAR_3 = VAR_1->buf;
 while (*VAR_3) {
  if (*VAR_3 <= ' ' || FUNC_2(VAR_0, *VAR_3)) {
   FUNC_1(
    VAR_2,
    FUNC_0("must escape char in sub-filter-spec: '%c'"),
    *VAR_3);
   return 1;
  }
  VAR_3++;
 }

 return 0;
}
