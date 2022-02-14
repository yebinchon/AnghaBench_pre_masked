
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
typedef int FILE ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (struct strbuf*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char) ;
 scalar_t__ FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static int FUNC_8(struct strbuf *VAR_2, FILE *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;


 if (FUNC_4(VAR_2, VAR_3))
  return 0;





 FUNC_6(VAR_2);
 if (!VAR_2->len || !FUNC_1(VAR_2)) {

  FUNC_3(VAR_2, '\n');
  return 0;
 }





 for (;;) {
  int VAR_5;

  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 == VAR_0)
   break;
  FUNC_7(VAR_5, VAR_3);
  if (VAR_5 != ' ' && VAR_5 != '\t')
   break;
  if (FUNC_4(&VAR_4, VAR_3))
   break;
  VAR_4.buf[0] = ' ';
  FUNC_6(&VAR_4);
  FUNC_2(VAR_2, &VAR_4);
 }
 FUNC_5(&VAR_4);

 return 1;
}
