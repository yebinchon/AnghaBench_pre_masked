
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct strbuf*,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0)
{
 size_t VAR_1, VAR_2;
 for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++) {
  if (FUNC_0(VAR_0->buf[VAR_1])) {
   VAR_0->buf[VAR_1] = ' ';
   for (VAR_2 = 0; FUNC_0(VAR_0->buf[VAR_1 + VAR_2 + 1]); VAR_2++);
   FUNC_1(VAR_0, VAR_1 + 1, VAR_2);
  }
 }
}
