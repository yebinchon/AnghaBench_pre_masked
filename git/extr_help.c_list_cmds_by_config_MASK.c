
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const**) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (struct string_list*,char*) ;
 int FUNC_5 (struct string_list*,char*,int ) ;
 int FUNC_6 (struct string_list*,int ) ;
 int FUNC_7 (struct string_list*) ;

void FUNC_8(struct string_list *VAR_1)
{
 const char *VAR_2;

 if (FUNC_0("completion.commands", &VAR_2))
  return;

 FUNC_7(VAR_1);
 FUNC_6(VAR_1, 0);

 while (*VAR_2) {
  struct strbuf VAR_3 = VAR_0;
  const char *VAR_4 = FUNC_3(VAR_2, ' ');

  FUNC_1(&VAR_3, VAR_2, VAR_4 - VAR_2);
  if (VAR_3.buf[0] == '-')
   FUNC_5(VAR_1, VAR_3.buf + 1, 0);
  else
   FUNC_4(VAR_1, VAR_3.buf);
  FUNC_2(&VAR_3);
  while (*VAR_4 == ' ')
   VAR_4++;
  VAR_2 = VAR_4;
 }
}
