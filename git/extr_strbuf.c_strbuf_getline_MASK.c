
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct strbuf*,int *,char) ;
 int FUNC_1 (struct strbuf*,int) ;

int FUNC_2(struct strbuf *VAR_1, FILE *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2, '\n'))
  return VAR_0;
 if (VAR_1->buf[VAR_1->len - 1] == '\n') {
  FUNC_1(VAR_1, VAR_1->len - 1);
  if (VAR_1->len && VAR_1->buf[VAR_1->len - 1] == '\r')
   FUNC_1(VAR_1, VAR_1->len - 1);
 }
 return 0;
}
