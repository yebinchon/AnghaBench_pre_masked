
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;



__attribute__((used)) static int FUNC_0(struct strbuf *VAR_0)
{
 int VAR_1;


 for (VAR_1 = VAR_0->len - 1; VAR_1 >= 0; VAR_1--)
  if (VAR_0->buf[VAR_1] == '\n')
   break;
 return VAR_0->len - (VAR_1 + 1);
}
