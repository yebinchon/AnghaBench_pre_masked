
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ,struct strbuf*,int *) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 int FUNC_7 (struct strbuf*,int ,char const*,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*,int) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static int FUNC_12(const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_0;

 FUNC_4(&VAR_3, VAR_2);
 if (!VAR_3.len || VAR_3.buf[VAR_3.len-1] != '\n')
  FUNC_5(&VAR_3, '\n');
 FUNC_7(&VAR_3,
      FUNC_0("Please edit the description for the branch\n"
        "  %s\n"
        "Lines starting with '%c' will be stripped.\n"),
      VAR_2, VAR_1);
 FUNC_11(FUNC_1(), VAR_3.buf, VAR_3.len);
 FUNC_9(&VAR_3);
 if (FUNC_3(FUNC_1(), &VAR_3, ((void*)0))) {
  FUNC_8(&VAR_3);
  return -1;
 }
 FUNC_10(&VAR_3, 1);

 FUNC_6(&VAR_4, "branch.%s.description", VAR_2);
 FUNC_2(VAR_4.buf, VAR_3.len ? VAR_3.buf : ((void*)0));
 FUNC_8(&VAR_4);
 FUNC_8(&VAR_3);

 return 0;
}
