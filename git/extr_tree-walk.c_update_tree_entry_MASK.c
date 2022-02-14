
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct strbuf*) ;
 scalar_t__ FUNC_2 (struct tree_desc*,struct strbuf*) ;

void FUNC_3(struct tree_desc *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 if (FUNC_2(VAR_1, &VAR_2))
  FUNC_0("%s", VAR_2.buf);
 FUNC_1(&VAR_2);
}
