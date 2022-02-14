
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int* buf; int len; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct strbuf*,int *,int) ;
 int FUNC_1 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_2(struct strbuf *VAR_1, FILE *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_3))
  return VAR_0;
 if (VAR_1->buf[VAR_1->len - 1] == VAR_3)
  FUNC_1(VAR_1, VAR_1->len - 1);
 return 0;
}
