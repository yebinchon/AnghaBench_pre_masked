
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userformat_want {int dummy; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*,int ,struct userformat_want*) ;
 int FUNC_1 (struct strbuf*) ;
 char* VAR_1 ;
 int VAR_2 ;

void FUNC_2(const char *VAR_3, struct userformat_want *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 if (!VAR_3) {
  if (!VAR_1)
   return;
  VAR_3 = VAR_1;
 }
 FUNC_0(&VAR_5, VAR_3, VAR_2, VAR_4);
 FUNC_1(&VAR_5);
}
