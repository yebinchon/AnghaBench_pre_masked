
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (struct strbuf*,int ,char*,int) ;

void FUNC_2(struct strbuf *VAR_0)
{
 if (FUNC_0(VAR_0->buf, "refs/notes/"))
  return;
 else if (FUNC_0(VAR_0->buf, "notes/"))
  FUNC_1(VAR_0, 0, "refs/", 5);
 else
  FUNC_1(VAR_0, 0, "refs/notes/", 11);
}
