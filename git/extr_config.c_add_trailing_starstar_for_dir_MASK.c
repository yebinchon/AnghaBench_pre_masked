
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int * buf; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0)
{
 if (VAR_0->len && FUNC_0(VAR_0->buf[VAR_0->len - 1]))
  FUNC_1(VAR_0, "**");
}
