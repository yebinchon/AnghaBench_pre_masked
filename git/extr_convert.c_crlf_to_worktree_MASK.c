
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_stat {scalar_t__ lonelf; } ;
struct strbuf {char const* buf; } ;
typedef enum crlf_action { ____Placeholder_crlf_action } crlf_action ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,size_t,struct text_stat*) ;
 char* FUNC_2 (char const*,char,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct strbuf*,char const*,size_t) ;
 int FUNC_5 (struct strbuf*,char*) ;
 char* FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*,scalar_t__) ;
 int FUNC_8 (struct text_stat*,int) ;

__attribute__((used)) static int FUNC_9(const char *VAR_1, size_t VAR_2,
       struct strbuf *VAR_3, enum crlf_action VAR_4)
{
 char *VAR_5 = ((void*)0);
 struct text_stat VAR_6;

 if (!VAR_2 || FUNC_3(VAR_4) != VAR_0)
  return 0;

 FUNC_1(VAR_1, VAR_2, &VAR_6);
 if (!FUNC_8(&VAR_6, VAR_4))
  return 0;


 if (VAR_1 == VAR_3->buf)
  VAR_5 = FUNC_6(VAR_3, ((void*)0));

 FUNC_7(VAR_3, VAR_2 + VAR_6.lonelf);
 for (;;) {
  const char *VAR_7 = FUNC_2(VAR_1, '\n', VAR_2);
  if (!VAR_7)
   break;
  if (VAR_7 > VAR_1 && VAR_7[-1] == '\r') {
   FUNC_4(VAR_3, VAR_1, VAR_7 + 1 - VAR_1);
  } else {
   FUNC_4(VAR_3, VAR_1, VAR_7 - VAR_1);
   FUNC_5(VAR_3, "\r\n");
  }
  VAR_2 -= VAR_7 + 1 - VAR_1;
  VAR_1 = VAR_7 + 1;
 }
 FUNC_4(VAR_3, VAR_1, VAR_2);

 FUNC_0(VAR_5);
 return 1;
}
