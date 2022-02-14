
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tree_desc*,void const*,unsigned long,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;

int FUNC_3(struct tree_desc *VAR_1, const void *VAR_2, unsigned long VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5)
  FUNC_0("%s", VAR_4.buf);
 FUNC_2(&VAR_4);
 return VAR_5;
}
