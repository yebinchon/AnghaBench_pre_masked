
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int state; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct git_graph*,struct strbuf*) ;
 int FUNC_2 (struct git_graph*,struct strbuf*) ;
 int FUNC_3 (struct git_graph*,struct strbuf*) ;
 int FUNC_4 (struct git_graph*,struct strbuf*) ;
 int FUNC_5 (struct git_graph*,struct strbuf*) ;
 int FUNC_6 (struct git_graph*,struct strbuf*) ;

int FUNC_7(struct git_graph *VAR_0, struct strbuf *VAR_1)
{
 switch (VAR_0->state) {
 case 131:
  FUNC_3(VAR_0, VAR_1);
  return 0;
 case 128:
  FUNC_6(VAR_0, VAR_1);
  return 0;
 case 129:
  FUNC_5(VAR_0, VAR_1);
  return 0;
 case 132:
  FUNC_2(VAR_0, VAR_1);
  return 1;
 case 130:
  FUNC_4(VAR_0, VAR_1);
  return 0;
 case 133:
  FUNC_1(VAR_0, VAR_1);
  return 0;
 }

 FUNC_0(0);
 return 0;
}
