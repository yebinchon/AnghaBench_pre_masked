
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
struct option {struct grep_opt* value; } ;
struct grep_opt {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct grep_opt*,int ,scalar_t__,char const*,int,int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 struct grep_opt *VAR_6 = VAR_3->value;
 int VAR_7;
 FILE *VAR_8;
 int VAR_9 = 0;
 struct strbuf VAR_10 = VAR_1;

 FUNC_0(VAR_5);

 VAR_7 = !FUNC_8(VAR_4, "-");
 VAR_8 = VAR_7 ? VAR_2 : FUNC_5(VAR_4, "r");
 if (!VAR_8)
  FUNC_3(FUNC_1("cannot open '%s'"), VAR_4);
 while (FUNC_6(&VAR_10, VAR_8) == 0) {

  if (VAR_10.len == 0)
   continue;

  FUNC_2(VAR_6, VAR_10.buf, VAR_10.len, VAR_4, ++VAR_9,
    VAR_0);
 }
 if (!VAR_7)
  FUNC_4(VAR_8);
 FUNC_7(&VAR_10);
 return 0;
}
