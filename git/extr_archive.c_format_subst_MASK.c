
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char const* buf; } ;
struct TYPE_2__ {int type; } ;
struct pretty_print_context {int abbrev; TYPE_1__ date_mode; int member_0; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct commit const*,char const*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char,int) ;
 char* FUNC_3 (char const*,size_t,char*,int) ;
 int FUNC_4 (struct strbuf*,char const*,size_t) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(const struct commit *VAR_3,
    const char *VAR_4, size_t VAR_5,
    struct strbuf *VAR_6)
{
 char *VAR_7 = ((void*)0);
 struct strbuf VAR_8 = VAR_2;
 struct pretty_print_context VAR_9 = {0};
 VAR_9.date_mode.type = VAR_0;
 VAR_9.abbrev = VAR_1;

 if (VAR_4 == VAR_6->buf)
  VAR_7 = FUNC_5(VAR_6, ((void*)0));
 for (;;) {
  const char *VAR_10, *VAR_11;

  VAR_10 = FUNC_3(VAR_4, VAR_5, "$Format:", 8);
  if (!VAR_10)
   break;
  VAR_11 = FUNC_2(VAR_10 + 8, '$', (VAR_4 + VAR_5) - VAR_10 - 8);
  if (!VAR_11)
   break;

  FUNC_7(&VAR_8);
  FUNC_4(&VAR_8, VAR_10 + 8, VAR_11 - VAR_10 - 8);

  FUNC_4(VAR_6, VAR_4, VAR_10 - VAR_4);
  FUNC_0(VAR_3, VAR_8.buf, VAR_6, &VAR_9);
  VAR_5 -= VAR_11 + 1 - VAR_4;
  VAR_4 = VAR_11 + 1;
 }
 FUNC_4(VAR_6, VAR_4, VAR_5);
 FUNC_6(&VAR_8);
 FUNC_1(VAR_7);
}
