
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct mailinfo {int filter_stage; } ;


 int FUNC_0 (struct mailinfo*,struct strbuf*) ;
 int FUNC_1 (struct mailinfo*,struct strbuf*) ;

__attribute__((used)) static void FUNC_2(struct mailinfo *VAR_0, struct strbuf *VAR_1)
{
 switch (VAR_0->filter_stage) {
 case 0:
  if (!FUNC_0(VAR_0, VAR_1))
   break;
  VAR_0->filter_stage++;

 case 1:
  FUNC_1(VAR_0, VAR_1);
  break;
 }
}
