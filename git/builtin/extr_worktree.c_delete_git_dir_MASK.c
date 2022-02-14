
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 int VAR_5;

 FUNC_4(&VAR_4, FUNC_2("worktrees/%s", VAR_3));
 VAR_5 = FUNC_3(&VAR_4, 0);
 if (VAR_5 < 0 && VAR_2 == VAR_0)
  VAR_5 = FUNC_6(VAR_4.buf);
 if (VAR_5)
  FUNC_1(FUNC_0("failed to delete '%s'"), VAR_4.buf);
 FUNC_5(&VAR_4);
 return VAR_5;
}
