
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct mailinfo {int transfer_encoding; } ;





 struct strbuf* FUNC_0 (struct strbuf*) ;
 struct strbuf* FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct mailinfo *VAR_0, struct strbuf *VAR_1)
{
 struct strbuf *VAR_2;

 switch (VAR_0->transfer_encoding) {
 case 128:
  VAR_2 = FUNC_1(VAR_1, 0);
  break;
 case 130:
  VAR_2 = FUNC_0(VAR_1);
  break;
 case 129:
 default:
  return;
 }
 FUNC_5(VAR_1);
 FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2);
}
