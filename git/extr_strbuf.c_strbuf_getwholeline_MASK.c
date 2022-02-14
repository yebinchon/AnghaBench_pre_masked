
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int* buf; size_t len; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int) ;
 int FUNC_6 (struct strbuf*) ;

int FUNC_7(struct strbuf *VAR_1, FILE *VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2))
  return VAR_0;

 FUNC_6(VAR_1);
 FUNC_1(VAR_2);
 while ((VAR_4 = FUNC_3(VAR_2)) != VAR_0) {
  if (!FUNC_4(VAR_1))
   FUNC_5(VAR_1, 1);
  VAR_1->buf[VAR_1->len++] = VAR_4;
  if (VAR_4 == VAR_3)
   break;
 }
 FUNC_2(VAR_2);
 if (VAR_4 == VAR_0 && VAR_1->len == 0)
  return VAR_0;

 VAR_1->buf[VAR_1->len] = '\0';
 return 0;
}
