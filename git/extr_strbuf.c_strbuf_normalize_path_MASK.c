
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*,struct strbuf*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct strbuf *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;

 FUNC_1(&VAR_2, VAR_1->len);
 if (FUNC_0(VAR_2.buf, VAR_1->buf) < 0) {
  FUNC_2(&VAR_2);
  return -1;
 }





 FUNC_3(&VAR_2, FUNC_5(VAR_2.buf));
 FUNC_4(VAR_1, &VAR_2);
 FUNC_2(&VAR_2);
 return 0;
}
