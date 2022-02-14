
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;


 int FUNC_0 (struct strbuf*,struct strbuf const*) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*) ;
 struct strbuf* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct strbuf **VAR_0, const struct strbuf *VAR_1)
{
 if (!*VAR_0) {
  *VAR_0 = FUNC_3(sizeof(struct strbuf));
  FUNC_1(*VAR_0, VAR_1->len);
 } else
  FUNC_2(*VAR_0);

 FUNC_0(*VAR_0, VAR_1);
}
