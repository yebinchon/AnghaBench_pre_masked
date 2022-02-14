
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,struct strbuf*,int *,int ) ;
 int FUNC_3 (struct strbuf*,char const) ;
 int FUNC_4 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_1)
{
 const char VAR_2 = VAR_0 ? '\0' : '\t';

 FUNC_4(VAR_1, FUNC_1());
 FUNC_3(VAR_1, ':');
 if (VAR_0)
  FUNC_4(VAR_1, FUNC_0());
 else
  FUNC_2(FUNC_0(), VAR_1, ((void*)0), 0);
 FUNC_3(VAR_1, VAR_2);
}
