
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct trace_key {int dummy; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,struct trace_key*,struct strbuf*) ;
 int FUNC_1 (struct trace_key*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char const*,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, int VAR_2, struct trace_key *VAR_3,
        const char *VAR_4, va_list VAR_5)
{
 struct strbuf VAR_6 = VAR_0;

 if (!FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6))
  return;

 FUNC_3(&VAR_6, VAR_4, VAR_5);
 FUNC_1(VAR_3, &VAR_6);
 FUNC_2(&VAR_6);
}
