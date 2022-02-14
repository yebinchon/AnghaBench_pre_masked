
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;




 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,scalar_t__) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 struct strbuf VAR_7 = VAR_0;

 switch (VAR_4) {
 case 128:
  FUNC_5("%s", FUNC_0(VAR_3));

 case 129:
  return;
 default:

  break;
 }

 if (VAR_1) {
  FUNC_2(&VAR_7, VAR_1);
  FUNC_1(&VAR_7, VAR_2);
  FUNC_4(&VAR_7);
 }
 if (VAR_5) {
  FUNC_2(&VAR_7, VAR_5);
  FUNC_1(&VAR_7, VAR_6);
 }
 FUNC_3(&VAR_7);
}
