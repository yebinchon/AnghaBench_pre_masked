
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char*,int) ;
 int FUNC_1 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 0:
  FUNC_1(VAR_0, "0,0");
  break;
 case 1:
  FUNC_1(VAR_0, "1");
  break;
 default:
  FUNC_0(VAR_0, "1,%d", VAR_1);
  break;
 }
}
