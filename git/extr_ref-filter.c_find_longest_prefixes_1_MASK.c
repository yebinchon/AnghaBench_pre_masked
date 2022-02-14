
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {size_t len; int buf; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct strbuf*,char const) ;
 int FUNC_2 (struct strbuf*,int) ;
 int FUNC_3 (struct string_list*,int ) ;

__attribute__((used)) static void FUNC_4(struct string_list *VAR_0,
      struct strbuf *VAR_1,
      const char **VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  char VAR_5 = VAR_2[VAR_4][VAR_1->len];
  if (!VAR_5 || FUNC_0(VAR_5)) {
   FUNC_3(VAR_0, VAR_1->buf);
   return;
  }
 }

 VAR_4 = 0;
 while (VAR_4 < VAR_3) {
  size_t VAR_6;





  for (VAR_6 = VAR_4 + 1; VAR_6 < VAR_3; VAR_6++) {
   if (VAR_2[VAR_4][VAR_1->len] != VAR_2[VAR_6][VAR_1->len])
    break;
  }

  FUNC_1(VAR_1, VAR_2[VAR_4][VAR_1->len]);
  FUNC_4(VAR_0, VAR_1, VAR_2 + VAR_4, VAR_6 - VAR_4);
  FUNC_2(VAR_1, VAR_1->len - 1);

  VAR_4 = VAR_6;
 }
}
