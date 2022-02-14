
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_key {int dummy; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,struct trace_key*,struct strbuf*) ;
 int FUNC_1 (struct trace_key*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,struct strbuf const*) ;
 int FUNC_3 (struct strbuf*) ;

void FUNC_4(const char *VAR_1, int VAR_2, struct trace_key *VAR_3,
       const struct strbuf *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 if (!FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5))
  return;

 FUNC_2(&VAR_5, VAR_4);
 FUNC_1(VAR_3, &VAR_5);
 FUNC_3(&VAR_5);
}
