
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct strbuf *VAR_0, FILE *VAR_1)
{
 if (FUNC_1(VAR_0->buf, 1, VAR_0->len, VAR_1) == VAR_0->len)
  return 0;
 return FUNC_0("cannot write delta postimage");
}
