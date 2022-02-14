
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;


 int FUNC_0 (struct strbuf*,int) ;

__attribute__((used)) static void FUNC_1(struct strbuf *VAR_0)
{
 int VAR_1 = VAR_0->len;


 while (VAR_1 && VAR_0->buf[VAR_1 - 1] == '/')
  VAR_1--;





 while (VAR_1 && VAR_0->buf[VAR_1 - 1] != '/')
  VAR_1--;

 FUNC_0(VAR_0, VAR_1);
}
