
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct option {struct strbuf* value; } ;


 int FUNC_0 (int,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (struct strbuf*,char) ;
 scalar_t__ FUNC_6 (struct strbuf*,int,int ) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(const struct option *VAR_1,
  const char *VAR_2, int VAR_3)
{
 int VAR_4;
 struct strbuf *VAR_5 = VAR_1->value;

 FUNC_0(VAR_3, VAR_2);

 if (VAR_5->len)
  FUNC_5(VAR_5, '\n');
 if (!FUNC_7(VAR_2, "-"))
  VAR_4 = 0;
 else {
  VAR_4 = FUNC_4(VAR_2, VAR_0);
  if (VAR_4 < 0)
   FUNC_3(FUNC_1("git commit-tree: failed to open '%s'"), VAR_2);
 }
 if (FUNC_6(VAR_5, VAR_4, 0) < 0)
  FUNC_3(FUNC_1("git commit-tree: failed to read '%s'"), VAR_2);
 if (VAR_4 && FUNC_2(VAR_4))
  FUNC_3(FUNC_1("git commit-tree: failed to close '%s'"), VAR_2);

 return 0;
}
